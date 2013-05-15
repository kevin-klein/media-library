using System;
using System.Collections.Generic;
using System.Data.Entity;
using System.Linq;
using System.Web;

namespace Server.Models
{
    public class Song
    {
        public int id { get; set; }
        public int bitrate { get; set; }
        public Artist artist { get; set; }
        public Album album { get; set; }
        public string name;
        public int length { get; set; }

    }

    public class SongDBContext : DbContext
    {
        public DbSet<Song> songs { get; set; }
    }

}