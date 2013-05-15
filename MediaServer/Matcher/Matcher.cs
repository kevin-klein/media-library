using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Web.Script.Serialization;

namespace Matcher
{
    public class Matcher
    {
        private JavaScriptSerializer serializer = new JavaScriptSerializer();
        public void loadRules(string filename)
        {
            StreamReader s = new StreamReader(filename);
            String json = s.ReadToEnd();

            serializer.Deserialize<List<Rule>>(json);

        }

    }
}
