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
            pph_label.Text = States.INIT.ToString();
            eph_label.Text = States.INIT.ToString();
            attack.Enabled = false;
            enemy_attack.Enabled = false;
        }

        private void attack_Click(object sender, EventArgs e)
        {
            player.playerMachine.Switch(States.WAIT);
            enemy.enemyMachine.Switch(States.ATTACK);
            if (player.health > 0)
            {
                combatLog.AppendText("Player hit Enemy for " + player.strength + " damage.\n");
                player.Attack(enemy);
                ph_label.Text = player.health.ToString();
                ps_label.Text = player.strength.ToString();
                pl_label.Text = player.level.ToString();
                pe_label.Text = player.experience.ToString();
                pph_label.Text = States.WAIT.ToString();
                eph_label.Text = States.ATTACK.ToString();
                eh_label.Text = enemy.health.ToString();
                es_label.Text = enemy.strength.ToString();
                if (enemy.health <= 0)
                {
                    combatLog.AppendText("Player killed an enemy! Here comes another one!\n");
                    player.Kill(enemy);
                    enemy.health = 50;
                    eh_label.Text = enemy.health.ToString();
                    pl_label.Text = player.level.ToString();
                    pe_label.Text = player.experience.ToString();
                }
            }
            attack.Enabled = false;
            enemy_attack.Enabled = true;
            if (player.health <= 0)
            {
                player.health = 0;
                attack.Enabled = false;
                enemy_attack.Enabled = false;
                combatLog.AppendText("Player has died! GAME OVER!\n");
            }
        }

        private void enemy_attack_Click(object sender, EventArgs e)
        {
            player.playerMachine.Switch(States.ATTACK);
            enemy.enemyMachine.Switch(States.WAIT);
            if (player.health > 0)
            {
                combatLog.AppendText("Enemy hit Player for " + enemy.strength + " damage.\n");
                enemy.Attack(player);
                ph_label.Text = player.health.ToString();
                ps_label.Text = player.strength.ToString();
                pl_label.Text = player.level.ToString();
                pe_label.Text = player.experience.ToString();
                pph_label.Text = States.ATTACK.ToString();
                eph_label.Text = States.WAIT.ToString();
                eh_label.Text = enemy.health.ToString();
                es_label.Text = enemy.strength.ToString();
            }
            enemy_attack.Enabled = false;
            attack.Enabled = true;
            if (player.health <= 0)
            {
                player.health = 0;
                attack.Enabled = false;
                enemy_attack.Enabled = false;
                combatLog.AppendText("Player has died! GAME OVER!\n");
            }
            
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
            pph_label.Text = States.ATTACK.ToString();

            enemy.health = 50;
            enemy.strength = 3;
            eh_label.Text = enemy.health.ToString();
            es_label.Text = enemy.strength.ToString();
            eph_label.Text = States.WAIT.ToString();

            attack.Enabled = true;
            enemy_attack.Enabled = false;
        }
    }
}
