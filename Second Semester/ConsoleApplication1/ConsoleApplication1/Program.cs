using System;
using System.Collections.Generic;

namespace ConsoleApplication1
{
    class Warrior
    {
        public string name;
        public float hp;
        public void Fight(string self, string other, float selfhp, float otherhp)
        {
            Console.WriteLine(self + " is fighting " + other + ". " + other + " lost " + selfhp + " health.");
        }
        public void SayName(string self)
        {
            Console.WriteLine("My name is " + self);
        }
    }

    class Duck : Warrior
    {
        public Duck(string n, float h)
        {
            name = n;
            hp = h;
        }
    }

    class Ninja : Warrior
    {
        public Ninja(string n, float h)
        {
            name = n;
            hp = h;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            List<Warrior> warriors = new List<Warrior>();
            
            for (int i = 1; i <= 50; i++)
            {
                Duck duck = new Duck("Duck " + i.ToString(), 1);
                Ninja ninja = new Ninja("Ninja " + i.ToString(), 3);
                duck.SayName(duck.name);
                ninja.SayName(ninja.name);
                duck.Fight(duck.name, ninja.name, duck.hp, ninja.hp);
                ninja.Fight(ninja.name, duck.name, ninja.hp, duck.hp);
            }

            
            Console.ReadLine();
        }
    }
}

