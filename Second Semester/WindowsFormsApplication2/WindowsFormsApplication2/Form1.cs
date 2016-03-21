using Combat;
using System;
using System.Windows.Forms;

namespace WindowsFormsApplication2
{
    public partial class Form1 : Form
    {
        Player player = Player.instance;
        Enemy enemy = new Enemy();
        public Form1()
        {
            
            InitializeComponent();
        }

        private void attack_Click(object sender, EventArgs e)
        {
            
            if (player.health > 0)
            {
                combatLog.AppendText("Player hit Enemy for " + player.strength + " damage.\n");
                player.Attack(enemy);
                ph_label.Text = player.health.ToString();
                ps_label.Text = player.strength.ToString();
                pl_label.Text = player.level.ToString();
                pe_label.Text = player.experience.ToString();
                eh_label.Text = enemy.health.ToString();
                es_label.Text = enemy.strength.ToString();
                if (enemy.health <= 0)
                {
                    combatLog.AppendText("Player killed an enemy! Here comes another one!\n");
                    player.Kill(enemy);
                    enemy.health = 100;
                }
            }
            if (player.health <= 0)
            {
                combatLog.AppendText("Player is dead! Start new game?\n");
            }
        }

        private void enemy_attack_Click(object sender, EventArgs e)
        {
            if (player.health > 0)
            {
                combatLog.AppendText("Enemy hit Player for " + enemy.strength + " damage.\n");
                enemy.Attack(player);
                ph_label.Text = player.health.ToString();
                ps_label.Text = player.strength.ToString();
                eh_label.Text = enemy.health.ToString();
                es_label.Text = enemy.strength.ToString();
            }
            if (player.health <= 0)
            {
                player.health = 0;
                combatLog.AppendText("Player is already dead! Start new game?\n");
            }
        }

        private void newEn_button_Click(object sender, EventArgs e)
        {
            combatLog.AppendText("A new Enemy appears!\n");
            enemy.health = 100;
            enemy.strength = 10;
            eh_label.Text = enemy.health.ToString();
            es_label.Text = enemy.strength.ToString();
        }

        private void newGame_button_Click(object sender, EventArgs e)
        {
            combatLog.Clear();

            player.health = 100;
            player.strength = 10;
            player.level = 1;
            player.experience = 0;
            ph_label.Text = player.health.ToString();
            ps_label.Text = player.strength.ToString();
            pl_label.Text = player.level.ToString();
            pe_label.Text = player.experience.ToString();

            enemy.health = 100;
            enemy.strength = 10;
            eh_label.Text = enemy.health.ToString();
            es_label.Text = enemy.strength.ToString();
        }
    }
}
