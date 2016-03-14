using ServerSide.Models;

namespace ServerSide.Migrations
{
    using System;
    using System.Data.Entity;
    using System.Data.Entity.Migrations;
    using System.Linq;

    internal sealed class Configuration : DbMigrationsConfiguration<ServerSide.Models.ServerSideContext>
    {
        public Configuration()
        {
            AutomaticMigrationsEnabled = true;
        }

        protected override void Seed(ServerSide.Models.ServerSideContext context)
        {
            //  This method will be called after migrating to the latest version.

            //  You can use the DbSet<T>.AddOrUpdate() helper extension method 
            //  to avoid creating duplicate seed data. E.g.
            //
            //    context.People.AddOrUpdate(
            //      p => p.FullName,
            //      new Person { FullName = "Andrew Peters" },
            //      new Person { FullName = "Brice Lambson" },
            //      new Person { FullName = "Rowan Miller" }
            //    );
            //
                context.Users.AddOrUpdate(
                  p => p.Id,
                  new User() { Id = 1, Name = "Nikita Siomin" },
                  new User() { Id = 2, Name = "Brice Lambson" },
                  new User() { Id = 3, Name = "Rowan Miller" },
                  new User() { Id = 4, Name = "Index In" }
                );
        }
    }
}
