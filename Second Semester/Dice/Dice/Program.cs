using System;
using System.Collections.Generic;
using System.Linq;

namespace Dice
{
    public class Dice
    {
        public List<float> rolls;
    }

    class Program
    {
        static void Main(string[] args)
        {
            Dice d = new Dice();
            d.rolls = new List<float> {8, 12, 7, 9, 7, 9, 7, 8, 11, 10, 9, 7, 6, 10, 6, 7, 4, 8, 11, 10 };

            float total = d.rolls.Sum();
            float average = total / d.rolls.Count;
            Console.WriteLine("Total: " + total);
            Console.WriteLine("Average: " + average);
            Console.ReadLine();

        }
    }
}
