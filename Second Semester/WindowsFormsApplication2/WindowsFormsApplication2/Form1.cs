﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication2
{
    public partial class Form1 : Form
    {
        Combat.Player player = new Combat.Player();
        Combat.Enemy enemy = new Combat.Enemy();
        public Form1()
        {
            
            InitializeComponent();
        }

        private void attack_Click(object sender, EventArgs e)
        {
            combatLog.Text = "Hit for " + player.strength + ". Remaining HP: " + player.Attack(enemy).ToString();
            player = player.LevelUp();
        }
    }
}
