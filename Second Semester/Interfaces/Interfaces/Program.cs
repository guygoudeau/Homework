using System;
using System.Collections.Generic;

interface IDamageable
{
    void takeDamage(int dam);
}
interface IStats
{
    int health
    {
        get;
        set;
    }
}

class Ninja : IDamageable, IStats
{
    private int chi;

    public Ninja()
    {
        chi = 50;
    }

    public int health
    {
        get
        {
            return chi;
        }

        set
        {
            chi = value;
        }
    }

    public void takeDamage(int dam)
    {
        health -= dam;
    }
}

class Duck : IDamageable, IStats
{
    private int feathers;
    public Duck()
    {
        feathers = 15;
    }
    public int health
    {
        get
        {
            return feathers;
        }

        set
        {
            feathers = value;
        }
    }

    public void takeDamage(int dam)
    {
        health -= dam;
    }
}

namespace Interfaces
{
    class Program
    {
        static void Main(string[] args)
        {
            Ninja n = new Ninja();            
            Duck d = new Duck();

            List<IDamageable> fighters = new List<IDamageable>();
            fighters.Add(n);
            fighters.Add(d);
            
            Console.WriteLine("Ninja and Duck got into a fight!");
            Console.WriteLine("Ninja has " + n.health + " chi remaining.");
            Console.WriteLine("Duck has " + d.health + " feathers remaining.");
            for (int i = 0; i < 50; i++)
            {
                foreach(IDamageable f in fighters)
                {
                    f.takeDamage(3);
                }

                Console.WriteLine("Each fighter takes 3 damage.");
                Console.WriteLine("Ninja has " + n.health + " chi remaining.");
                Console.WriteLine("Duck has " + d.health + " feathers remaining.");

                if (d.health <= 0)
                {
                    Console.WriteLine("Duck has no more feathers; Ninja is the winner!");
                    Console.WriteLine("Press any key to exit.");
                    Console.ReadKey();
                    Environment.Exit(0);
                }
                if (n.health <= 0)
                {
                    Console.WriteLine("Ninja has no more chi; Duck is the winner!");
                    Console.WriteLine("Press any key to exit.");
                    Console.ReadKey();
                    Environment.Exit(0);
                }
            }
            Console.ReadLine();
        }
    }
}