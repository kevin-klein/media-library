using Server.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace Server.Controllers
{
    public class MediaController : Controller
    {

        private SongDBContext db = new SongDBContext();

        //
        // GET: /Media/

        public ActionResult Index()
        {
            return View();
        }

        public ActionResult getSong(int id)
        {
            Song song = db.songs.Find(id);
            if(song == null) {
                return Json(new { error = "song not found", errcode = 1 }, JsonRequestBehavior.AllowGet);
            }
            return Json(song, JsonRequestBehavior.AllowGet);
        }

    }
}
