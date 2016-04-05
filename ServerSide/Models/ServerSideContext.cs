using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using Microsoft.AspNet.Identity;
using Microsoft.AspNet.Identity.EntityFramework;

namespace ServerSide.Models
{
    public class ServerSideContext : IdentityDbContext<IdentityUser>
    {
        public ServerSideContext() : base("name=DefaultConnection")
        {
        }

        public System.Data.Entity.DbSet<ServerSide.Models.Question> Questions { get; set; }
    }
}