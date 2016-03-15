using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;



namespace Combat
{
    interface IDamageable
    {
        int takeDamage(int dam);
    }
    interface IStats
    {
        int health { get; set; }
        int energy { get; set; }
        int strength { get; set; }
    }
    interface IActions
    {
        int Attack(Player player, Enemy enemy);
        void Abilities(Player player, Enemy enemy);
        void Items();
        void Fight(Player player, Enemy enemy);
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
            elx = 5;
            nam = "Guy";
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

        public int takeDamage(int d)
        {
            
            if (health <= 0)
            {
                Console.WriteLine("\n" + name + " is out of health! " + name + " loses!");
                Console.WriteLine("Press any key to continue...");
                Console.ReadKey();
                Environment.Exit(0);
            }
            return health -= d;

        }

        public int Attack(Player player, Enemy enemy)
        {
            Console.WriteLine("\n" + name + " attacked! " + enemy.name + " takes " + strength + " damage.");
            return enemy.takeDamage(player.strength);
        }

        public void Abilities(Player player, Enemy enemy)
        {
            Console.WriteLine("\nAbilities Menu\n" + "-----------------------");
            Console.WriteLine("Z) Use Strong Attack");
            Console.WriteLine("X) Use Heal");
            var choice = Console.ReadKey();
            switch (choice.Key)
            {
                case ConsoleKey.Z:
                    if (energy >= 20)
                    {
                        Console.WriteLine("\n\n" + name + " used Strong Attack! Did 20 damage, lost 20 energy.");
                        enemy.takeDamage(20);
                        energy -= 20;
                    }
                    else
                    {
                        Console.WriteLine("\n\nNot enough energy to use move!");
                    }
                    break;
                case ConsoleKey.X:
                    if (energy >= 15)
                    {
                        Console.WriteLine("\n\n" + name + " used Heal! Restored 25 health, lost 15 energy.");
                        health += 25;
                        energy -= 15;
                    }
                    else
                    {
                        Console.WriteLine("\n\nNot enough energy to use move!");
                    }
                    break;
                default:
                    Console.WriteLine("\n\nError: Unacceptable input. Lost turn due to inability to follow directions.");
                    break;
            }
            if (health > 100)
            {
                health = 100;
            }
        }

        public void Items()
        {
            Console.WriteLine("\nItems Menu\n" + "-----------------------\n" + "Potions: " + potions + "   Elixers: " + elixers + "\n");
            Console.WriteLine("Z) Use Potion");
            Console.WriteLine("X) Use Elixer");
            var choice = Console.ReadKey();
            switch (choice.Key)
            {
                case ConsoleKey.Z:
                    if (potions != 0)
                    {
                        Console.WriteLine("\n\n" + name + " used a potion! Restored 30 health.");
                        health += 30;
                        potions -= 1;
                    }
                    else
                    {
                        Console.WriteLine("\n\nNo potions left!");
                    }
                    break;
                case ConsoleKey.X:
                    if (elixers != 0)
                    {
                        Console.WriteLine("\n\n" + name + " used an elixer! Restored 30 energy.");
                        energy += 30;
                        elixers -= 1;
                    }
                    else
                    {
                        Console.WriteLine("\n\nNo elixers left");
                    }
                    break;
                default:
                    Console.WriteLine("\n\nError: Unacceptable input. Lost turn due to inability to follow directions.");
                    break;
            }
            if (health > 100)
            {
                health = 100;
            }
            if (energy > 100)
            {
                energy = 100;
            }
        }

        public void Fight(Player player, Enemy enemy)
        {
            Console.WriteLine("Player health: " + player.health + " ------ Enemy health: " + enemy.health);
            Console.WriteLine("Player energy: " + player.energy + " ------ Enemy energy: " + enemy.energy);
            Console.WriteLine("\nCombat Menu\n" + "-----------------------");
            Console.WriteLine("A) Attack");
            Console.WriteLine("S) Abilities");
            Console.WriteLine("D) Items");
            var choice = Console.ReadKey();
            switch (choice.Key)
            {
                case ConsoleKey.A:
                    Console.WriteLine("");
                    Attack(player, enemy);
                    break;
                case ConsoleKey.S:
                    Console.WriteLine("");
                    Abilities(player, enemy);
                    break;
                case ConsoleKey.D:
                    Console.WriteLine("");
                    Items();
                    break;
                default:
                    Console.WriteLine("\n\nError: Unacceptable input. Lost turn due to inability to follow directions.");
                    break;
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
            elx = 5;
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

        public int takeDamage(int d)
        {
            
            if (health <= 0)
            {
                Console.WriteLine("\n" + name + " is out of health! " + name + " loses!");
                Console.WriteLine("Press any key to continue...");
                Console.ReadKey();
                Environment.Exit(0);
            }
            return health -= d;
        }

        public int Attack(Player player, Enemy enemy)
        {
            Console.WriteLine(name + " attacked! " + player.name + " takes " + strength + " damage.");
            return player.takeDamage(enemy.strength);
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
            if (health > 100)
            {
                health = 100;
            }
        }

        public void Items()
        {
            Random random = new Random();
            int rand = random.Next(1, 3);
            if (rand == 1)
            {
                if (potions != 0)
                {
                    Console.WriteLine(name + " used a potion! Restored 30 health.");
                    health += 30;
                    potions -= 1;
                }
                else
                {
                    Console.WriteLine("Enemy has no potions left.");
                }
            }
            if (rand == 2)
            {
                if (elixers != 0)
                {
                    Console.WriteLine(name + " used an elixer! Restored 30 energy.");
                    energy += 30;
                    elixers -= 1;
                }
                else
                {
                    Console.WriteLine("Enemy has no elixers left.");
                }
            }
            if (health > 100)
            {
                health = 100;
            }
            if (energy > 100)
            {
                energy = 100;
            }
        }

        public void Fight(Player player, Enemy enemy)
        {
            Random random = new Random();
            int rand = random.Next(1, 4);
            if (rand == 1)
            {
                Attack(player, enemy);
            }
            if (rand == 2)
            {
                Abilities(player, enemy);
            }
            if (rand == 3)
            {
                Items();
            }
        }
    }
}
