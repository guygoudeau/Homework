using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Senpai
{
    interface IHighSchooler
    {
        string School { get; set; }
        int Grade { get; set; }
        void SenpaiNotice(IHighSchooler senpai);
        // if senpai attends the same school && is in a higher grade -> return true
    }
    interface IMechPilot
    {
        string MechName { get; set; }
        int Attack { get; set; }
        int Defense { get; set; }
        void ItsAnAngel(IMonster angel);
        // if angel Level is higher than 1/3 your Defence => return (MechName + " Lost in Battle./n")
        // else return (MechName + "  Continues the fight./n")
        // if angel Level is higher than 1/4 your Attack => return (MechName + "'s Attacks did nothing./n")
        // else return (MechName + " Defeated the monster./n")
    }
    interface IMonster
    {
        int Level { get; set; }
    }

    class Protagonist : IHighSchooler, IMechPilot
    {
        private string school;
        private string mechName;
        private int grade;
        private int attack;
        private int defense;
        public Protagonist()
        {
            school = "AIE";
            mechName = "Evangelion";
            grade = 12;
            attack = 15;
            defense = 15;
        }

        public int Attack
        {
            get
            {
                return attack;
            }

            set
            {
                attack = value;
            }
        }

        public int Defense
        {
            get
            {
                return defense;
            }

            set
            {
                defense = value;
            }
        }

        public int Grade
        {
            get
            {
                return grade;
            }

            set
            {
                grade = value;
            }
        }

        public string MechName
        {
            get
            {
                return mechName;
            }

            set
            {
                mechName = value;
            }
        }

        public string School
        {
            get
            {
                return school;
            }

            set
            {
                school = value;
            }
        }

        public void ItsAnAngel(IMonster angel)
        {
            if (angel.Level > Defense / 3)
            {
                Console.WriteLine(MechName + " lost in battle.");
            }
            else
            {
                Console.WriteLine(MechName + " continues the fight.");
            }
            if (angel.Level > Attack / 4)
            {
                Console.WriteLine(MechName + "'s attacks did nothing.");
            }
            else
            {
                Console.WriteLine(MechName + " defeated the monster.");
            }
        }

        public void SenpaiNotice(IHighSchooler senpai)
        {
            if (senpai.School == School && senpai.Grade > Grade)
            {
                Console.WriteLine("Senpai noticed me!");
            }
        }
    }
    class SadTwist : IHighSchooler, IMonster
    {
        private string school;
        private int grade;
        private int level;
        public SadTwist()
        {
            school = "AIE";
            grade = 11;
            level = 3;
        }

        public int Grade
        {
            get
            {
                return grade;
            }

            set
            {
                grade = value;
            }
        }

        public int Level
        {
            get
            {
                return level;
            }

            set
            {
                level = value;
            }
        }

        public string School
        {
            get
            {
                return school;
            }

            set
            {
                school = value;
            }
        }

        public void SenpaiNotice(IHighSchooler senpai)
        {
            if (senpai.School == School && senpai.Grade > Grade)
            {
                Console.WriteLine("Senpai noticed me!");
            }
        }
    }


    class Program
    {
        static void Main(string[] args)
        {
            Protagonist sitsByWindow = new Protagonist();
            SadTwist childFriend = new SadTwist();

            childFriend.SenpaiNotice(sitsByWindow);
            sitsByWindow.ItsAnAngel(childFriend);

            Console.WriteLine("Press any key to continue...");
            Console.ReadKey();
        }
    }
}
