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
        void Abilities();
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

        public Player()
        {
            hp = 100;
            eng = 100;
            str = 10;
            pots = 5;
            elx = 3;
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

        public void takeDamage(int d)
        {
            health -= d;
        }

        public void Attack(Player player, Enemy enemy)
        {
            enemy.takeDamage(player.strength);
        }

        public void Abilities()
        {
            throw new NotImplementedException();
        }

        public void Items()
        {
            throw new NotImplementedException();
        }
    }

    class Enemy : IDamageable, IStats, IActions, IItems
    {
        private int hp;
        private int eng;
        private int str;
        private int pots;
        private int elx;

        public Enemy()
        {
            hp = 100;
            eng = 100;
            str = 10;
            pots = 5;
            elx = 3;
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

        public void takeDamage(int d)
        {
            health -= d;
        }

        public void Attack(Player player, Enemy enemy)
        {
            player.takeDamage(enemy.strength);
        }

        public void Abilities()
        {
            throw new NotImplementedException();
        }

        public void Items()
        {
            throw new NotImplementedException();
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Player Guy = new Player();
            Enemy Chaos = new Enemy();

            Guy.Attack(Guy, Chaos);
            Chaos.Attack(Guy, Chaos);
            Console.WriteLine(Guy.health + " " + Chaos.health);
            Console.ReadLine();
        }
    }
}
