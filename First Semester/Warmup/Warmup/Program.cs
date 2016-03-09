using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Warmup
{
    class Program
    {
        static void Main(string[] args)
        {

            List <int> list = new List <int> ();
            for (int i = 2000; i < 3200; i++)
            {
                if (i % 7 == 0 && i % 5 != 0)
                {
                    list.Add(i);
                }
            }

            Console.WriteLine(String.Join(",", list));
            Console.Write("Press any key to continue...");
            Console.ReadKey(true);
        }
    }
}
