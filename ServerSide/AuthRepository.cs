using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Threading.Tasks;
using System.Web;
using Microsoft.AspNet.Identity;
using Microsoft.AspNet.Identity.EntityFramework;
using ServerSide.Models;

namespace ServerSide
{
    public class AuthRepository : IDisposable
    {
        private ServerSideContext _ctx;

        private UserManager<IdentityUser> _userManager;

        public AuthRepository()
        {
            _ctx = new ServerSideContext();
            _userManager = new UserManager<IdentityUser>(new UserStore<IdentityUser>(_ctx));
        }

        public List<IdentityUser> GetUserList()
        {
            var userList = _userManager.Users.ToList();
            return userList;
        }

        public IEnumerable<string> GetRoles(string userId)
        {
            var roles = _userManager.GetRoles(userId);
            return roles;
        }

        public async Task<IdentityResult> RegisterUser(RegisterModel userModel)
        {
            IdentityUser user = new IdentityUser
            {
                UserName = userModel.UserName
            };

            var result = await _userManager.CreateAsync(user, userModel.Password);

            return result;
        }

        public async Task<IdentityResult> DeleteUser(string userName)
        {
            var user = _userManager.Users.First(f => f.UserName == userName);
            IdentityResult result = await _userManager.DeleteAsync(user);

            return result;
        }

        public async Task<IdentityUser> FindUser(string userName, string password)
        {
            IdentityUser user = await _userManager.FindAsync(userName, password);

            return user;
        }

        public void Dispose()
        {
            _ctx.Dispose();
            _userManager.Dispose();

        }
    }
}