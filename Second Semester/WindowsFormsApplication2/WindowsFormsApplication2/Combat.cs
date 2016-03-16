using System;
using System.Collections.Generic;

namespace Combat
{
    interface IDamageable
    {
        int takeDamage(int d);
    }
    interface IStats
    {
        int health { get; set; }
        int strength { get; set; }
    }
    interface IActions
    {
        int Attack(IDamageable dam);
    }
    interface ILevel
    {
        int level { get; set; }
        int experience { get; set; }
        Player LevelUp();
    }

    class Player : IDamageable, IStats, IActions, ILevel
    {
        private int hp;
        private int str;
        private int lvl;
        private int exp;

        public Player()
        {
            hp = 100;
            str = 10;
            lvl = 0;
            exp = 0;
        }

        public int health
        {
            get { return hp; }
            set { hp = value; }
        }
        public int strength
        {
            get { return str; }
            set { str = value; }
        }
        public int level
        {
            get { return lvl; }
            set { lvl = value; }
        }
        public int experience
        {
            get { return exp; }
            set { exp = value; }
        }

        public int takeDamage(int d)
        {
            return health -= d;
        }

        public int Attack(IDamageable dam)
        {
            return takeDamage(strength);
        }

        public Player LevelUp()
        {
            Player temp = this;
            if (experience == 25 + (level*50))
            {
                temp.level += 1;
                temp.health = 100;
                temp.health += 5 * level;
                temp.strength += 5;
            }
            return temp;
        }
        
    }

    class Enemy : IDamageable, IStats, IActions
    {
        private int hp;
        private int str;

        public Enemy()
        {
            hp = 100;
            str = 10;
        }

        public int health
        {
            get { return hp; }
            set { hp = value; }
        }

        public int strength
        {
            get { return str; }
            set { str = value; }
        }

        public int takeDamage(int d)
        {
            return health -= d;
        }

        public int Attack(IDamageable dam)
        {
            return takeDamage(strength);
        }
    }
}
