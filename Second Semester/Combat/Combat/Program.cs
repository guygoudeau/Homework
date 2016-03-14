using System;
using System.Collections.Generic;

namespace Combat
{
    interface IDamageable
    {
        void takeDamage(int dam);
    }
    interface IStats
    {
        int health { get; set; }
        int energy { get; set; }
        int strength { get; set; }
    }
    interface IActions
    {
        void Attack(Player player, Enemy enemy);
        void Abilities(Player player, Enemy enemy);
        void Items();
    }
    interface IItems
    {
        int potions { get; set; }
        int elixers { get; set; }
    }

    class Player : IDamageable, IStats, IActions, IItems
    {
        private int hp;
        private int eng;
        private int str;
        private int pots;
        private int elx;
        private string nam;

        public Player()
        {
            hp = 100;
            eng = 100;
            str = 10;
            pots = 5;
            elx = 3;
            nam = "Guy";
        }

        public int health
        {
            get {return hp;}
            set {hp = value; }
        }
        public int energy
        {
            get { return eng; }
            set { eng = value; }
        }
        public int strength
        {
            get { return str; }
            set { str = value; }
        }
        public int potions
        {
            get { return pots; }
            set { pots = value; }
        }
        public int elixers
        {
            get { return elx; }
            set { elx = value; }
        }
        public string name
        {
            get { return nam; }
            set { nam = value; }
        }

        public void takeDamage(int d)
        {
            health -= d;
        }

        public void Attack(Player player, Enemy enemy)
        {
            Console.WriteLine(name + " attacked! " + enemy.name + " takes " + strength + " damage.");
            enemy.takeDamage(player.strength);
        }

        public void Abilities(Player player, Enemy enemy)
        {
            Random random = new Random();
            int choice = random.Next(1, 3);
            if (choice == 1)
            {
                if (energy >= 20)
                {
                    Console.WriteLine(name + " used Strong Attack! Did 20 damage, lost 20 energy.");
                    enemy.takeDamage(20);
                    energy -= 20;
                }
                else
                {
                    Console.WriteLine("Not enough energy to use move!");
                }
            }
            if (choice == 2)
            {
                if (energy >= 15)
                {
                    Console.WriteLine(name + " used Heal! Restored 25 health, lost 15 energy.");
                    health += 25;
                    energy -= 15;
                }
                else
                {
                    Console.WriteLine("Not enough energy to use move!");
                }
            }
        }

        public void Items()
        {
            Random random = new Random();
            int choice = random.Next(1, 3);
            if (choice == 1)
            {
                if (potions != 0)
                {
                    Console.WriteLine(name + " used a potion! Restored 30 health.");
                    health += 30;
                    potions -= 1;
                }
                else
                {
                    Console.WriteLine("No potions left!");
                }
            }
            if (choice == 2)
            {
                if (elixers != 0)
                {
                    Console.WriteLine(name + " used an elixer! Restored 30 energy.");
                    energy += 30;
                    elixers -= 1;
                }
                else
                {
                    Console.WriteLine("No elixers left");
                }
            }
        }
    }

    class Enemy : IDamageable, IStats, IActions, IItems
    {
        private int hp;
        private int eng;
        private int str;
        private int pots;
        private int elx;
        private string nam;

        public Enemy()
        {
            hp = 100;
            eng = 100;
            str = 10;
            pots = 5;
            elx = 3;
            nam = "Chaos";
        }

        public int health
        {
            get { return hp; }
            set { hp = value; }
        }
        public int energy
        {
            get { return eng; }
            set { eng = value; }
        }
        public int strength
        {
            get { return str; }
            set { str = value; }
        }
        public int potions
        {
            get { return pots; }
            set { pots = value; }
        }
        public int elixers
        {
            get { return elx; }
            set { elx = value; }
        }
        public string name
        {
            get { return nam; }
            set { nam = value; }
        }

        public void takeDamage(int d)
        {
            health -= d;
        }

        public void Attack(Player player, Enemy enemy)
        {
            Console.WriteLine(name + " attacked! " + player.name + " takes " + strength + " damage.");
            player.takeDamage(enemy.strength);
        }

        public void Abilities(Player player, Enemy enemy)
        {
            Random random = new Random();
            int choice = random.Next(1, 3);
            if (choice == 1) 
            {
                if (energy >= 20)
                {
                    Console.WriteLine(name + " used Strong Attack! Did 20 damage, lost 20 energy.");
                    player.takeDamage(20);
                    energy -= 20;
                }
                else
                {
                    Console.WriteLine("Not enough energy to use move!");
                }
            }
            if (choice == 2)
            {
                if (energy >= 15)
                {
                    Console.WriteLine(name + " used Heal! Restored 25 health, lost 15 energy.");
                    health += 25;
                    energy -= 15;
                }
                else
                {
                    Console.WriteLine("Not enough energy to use move!");
                }
            }
        }
        
        public void Items()
        {
            Random random = new Random();
            int choice = random.Next(1, 3);
            if (choice == 1)
            {
                if (potions != 0)
                {
                    Console.WriteLine(name + " used a potion! Restored 30 health.");
                    health += 30;
                    potions -= 1;
                }
                else
                {
                    Console.WriteLine("No potions left!");
                }
            }
            if (choice == 2)
            {
                if (elixers != 0)
                {
                    Console.WriteLine(name + " used an elixer! Restored 30 energy.");
                    energy += 30;
                    elixers -= 1;
                }
                else
                {
                    Console.WriteLine("No elixers left");
                }
            }
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Player player = new Player();
            Enemy enemy = new Enemy();

            player.Attack(player, enemy);
            enemy.Attack(player, enemy);
            player.Abilities(player, enemy);
            enemy.Abilities(player, enemy);
            player.Items();
            enemy.Items();
            Console.WriteLine("Player health: " + player.health + " ------ Enemy health: " + enemy.health);
            Console.WriteLine("Player energy: " + player.energy + " ------ Enemy energy: " + enemy.energy);
            Console.ReadLine();
        }
    }
}
