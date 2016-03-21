﻿using System;
using System.Collections.Generic;
using FinateStateMachine;

namespace Combat
{
    enum States {INIT, ATTACK, WAIT,}

    interface IDamageable
    {
        int takeDamage(int d);
    }
    interface IStats
    {
        int health { get; set; }
        int strength { get; set; }
    }
    interface IPlayerAttack
    {
        int Attack(Enemy other);
    }
    interface IEnemyAttack
    {
        int Attack(Player other);
    }
    interface ILevel
    {
        int level { get; set; }
        int experience { get; set; }
    }
    interface IKill
    {
        Player Kill(Enemy other);
    }

    class Player : IDamageable, IStats, IPlayerAttack, ILevel, IKill
    {
        static private Player _instance;
        static public Player instance
        {
            get
            {
                if (_instance == null)
                {
                    _instance = new Player();
                }
                return _instance;
            }
        }

        private int hp;
        private int str;
        private int lvl;
        private int exp;
        private FSM<States> playerMachine = new FSM<States>(States.INIT);

        public Player()
        {
            hp = 100;
            str = 10;
            lvl = 1;
            exp = 0;
            playerMachine.AddState(States.ATTACK);
            playerMachine.AddState(States.WAIT);
            playerMachine.AddTransition(States.INIT, States.ATTACK);
            playerMachine.AddTransition(States.ATTACK, States.WAIT);
            playerMachine.AddTransition(States.WAIT, States.ATTACK);
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

        public int Attack(Enemy other)
        {
            return other.takeDamage(strength);
        }

        public Player Kill(Enemy other)
        {
            experience += 25;
            Player temp = this;
            if (other.health <= 0)
            {
                if (experience == 25 + (level * 50))
                {
                    temp.level += 1;
                    temp.health = 100;
                    temp.health += 5 * level;
                    temp.strength += 5;
                }
            }
            return temp;
        }
    }

    class Enemy : IDamageable, IStats, IEnemyAttack
    {
        private int hp;
        private int str;
        private FSM<States> enemyMachine = new FSM<States>(States.INIT);

        public Enemy()
        {
            hp = 100;
            str = 10;
            enemyMachine.AddState(States.ATTACK);
            enemyMachine.AddState(States.WAIT);
            enemyMachine.AddTransition(States.INIT, States.ATTACK);
            enemyMachine.AddTransition(States.ATTACK, States.WAIT);
            enemyMachine.AddTransition(States.WAIT, States.ATTACK);
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

        public int Attack(Player other)
        {
            return other.takeDamage(strength);
        }
    }
}
