using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.Text.RegularExpressions;

namespace Matcher
{
    class Rule
    {

        public string suffix { get; set; }
        public List<String> args { get; set; }
        public Dictionary<String, String> metadata { get; set; }
        public string predicate;

        public Boolean match(string filename) {
            if (filename.EndsWith(suffix))
            {
                switch (predicate)
                {
                    case "grep":
                        // line based match for text files
                        StreamReader s = new StreamReader(filename);
                        string line;
                        while((line = s.ReadLine()) != null) 
                        {
                            if (Regex.IsMatch(args[0], line))
                            {
                                return true;
                            }
                        }

                        return false;

                    case "basename":
                        // full filename match
                        if (filename.EndsWith(filename + suffix))
                        {
                            return true;
                        }
                        else
                        {
                            return false;
                        }

                    default:
                        return false;

                }

            }
            else
            {
                return false;
            }
        }


    }
}
