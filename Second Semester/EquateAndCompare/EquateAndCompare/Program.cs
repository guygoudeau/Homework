using System;
using System.Collections.Generic;

namespace EquateAndCompare
{
    public class Car : IEquatable<Car>, IComparable
    {
        public string model;
        public int year;

        public Car(string Model, int Year)
        {
            this.model = Model;
            this.year = Year;
        }
        
        public bool Equals(Car other)
        {
            if (other == null) return false;

            if (this.model.Equals(other.model) && this.year.Equals(other.year))
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        public int CompareTo(object obj)
        {
            if (obj == null) return 1;

            Car otherCar = obj as Car;
            if (otherCar != null)
            {
                Console.WriteLine("Same car.");
                return 0;
            }
            else
            {
                throw new ArgumentException("Object is not the same car.");
            }
        }
    }
    
    class Program
    {
        static void Main(string[] args)
        {
            Car muffin = new Car("ChevyAveo", 2005);
            Car alsoMuffin = new Car("ChevyAveo", 2005);
            Car newMuffin = new Car("ChevyAveo", 2016);
            Car feelGood = new Car("KiaSoul", 2013);

            muffin.CompareTo(alsoMuffin);

            Console.WriteLine("Muffin equals FeelGood: {0}", muffin.Equals(feelGood));
            Console.WriteLine("Muffin equals AlsoMuffin: {0}", muffin.Equals(alsoMuffin));
            Console.WriteLine("Muffin equals newMuffin: {0} \n", muffin.Equals(newMuffin));

            Console.WriteLine("Press any key to continue...");
            Console.ReadKey();
        }
    }
}
