using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using Microsoft.AspNet.Identity;
using Microsoft.AspNet.Identity.EntityFramework;
using Microsoft.AspNet.Identity.Owin;
using Microsoft.Owin;

namespace ServerSide.Models
{
    public class ______ApplicationUserManager : UserManager<IdentityUser>
    {
        public ______ApplicationUserManager(IUserStore<IdentityUser> store)
            : base(store)
        {
        }

        public static ______ApplicationUserManager Create(IdentityFactoryOptions<______ApplicationUserManager> options, IOwinContext context)
        {
            var appDbContext = context.Get<ServerSideContext>();
            var appUserManager = new ______ApplicationUserManager(new UserStore<IdentityUser>(appDbContext));

            return appUserManager;
        }
    }
}