using Combat;
using System;
using System.Windows.Forms;
using FinateStateMachine;
using Serializer;

namespace WindowsFormsApplication2
{
    public partial class Form1 : Form
    {
        private SaveGameData SuperSave;
        private Player player = Player.instance;
        private Enemy enemy = new Enemy();
        public Form1()
        {
            
            InitializeComponent();
            phase_label.Text = GameState.init.ToString();
            attack.Enabled = false;
            enemy_attack.Enabled = false;
            GAMEFSM = new FSM<GameState>(GameState.init);
            GAMEFSM.AddState(GameState.init);
            GAMEFSM.AddState(GameState.player);
            GAMEFSM.AddState(GameState.enemy);
            GAMEFSM.AddState(GameState.end);
            GAMEFSM.AddTransition(GameState.init, GameState.player);
            GAMEFSM.AddTransition(GameState.player, GameState.enemy);
            GAMEFSM.AddTransition(GameState.enemy, GameState.player);
            GAMEFSM.AddTransition(GameState.player, GameState.end);
            GAMEFSM.AddTransition(GameState.enemy, GameState.end);
            SuperSave = new SaveGameData();
        }

        private FSM<GameState> GAMEFSM;
        enum GameState
        {
            init, player, enemy, end
        }

        [Serializable]
        public class SaveGameData
        {
            public SaveGameData() { }
            public SaveGameData(int hp, int str, int lvl, int exp)
            {
                SaveHealth = hp;
                SaveStrength = str;
                SaveLevel = lvl;
                SaveExperience = exp;
            }            
            public int SaveHealth;
            public int SaveStrength;
            public int SaveLevel;
            public int SaveExperience;
        }
        

        private void updateLabels()
        {
            ph_label.Text = player.health.ToString();
            ps_label.Text = player.strength.ToString();
            pl_label.Text = player.level.ToString();
            pe_label.Text = player.experience.ToString();
            phase_label.Text = GAMEFSM.cState.ToString();
            eh_label.Text = enemy.health.ToString();
            es_label.Text = enemy.strength.ToString();
        }

        private void updatePlayer()
        {
            if (player.health > 0)
            {
                combatLog.AppendText("Player hit Enemy for " + player.strength + " damage.\n");
                player.Attack(enemy);
                updateLabels();
                if (enemy.health <= 0)
                {
                    combatLog.AppendText("Player killed an enemy! Here comes another one!\n");
                    player.Kill(enemy);
                    enemy.health = 50;
                    updateLabels();
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

        private void updateEnemy()
        {
            if (player.health > 0)
            {
                combatLog.AppendText("Enemy hit Player for " + enemy.strength + " damage.\n");
                enemy.Attack(player);
                updateLabels();
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

        private void playerHandler()
        {
            GAMEFSM.Switch(GameState.enemy);
            updatePlayer();
        }

        private void enemyHandler()
        {
            GAMEFSM.Switch(GameState.player);
            updateEnemy();
        }

        private void attack_Click(object sender, EventArgs e)
        {
            playerHandler();
            SaveGameData save = new SaveGameData(player.health, player.strength, player.level, player.experience);
            SuperSave = save;
        }

        private void enemy_attack_Click(object sender, EventArgs e)
        {
            enemyHandler();
            SaveGameData save = new SaveGameData(player.health, player.strength, player.level, player.experience);
            SuperSave = save;
        }

        private void newGame_button_Click(object sender, EventArgs e)
        {
            combatLog.Clear();
            player.health = 100;
            player.strength = 10;
            player.level = 1;
            player.experience = 0;
            enemy.health = 50;
            enemy.strength = 3;
            GAMEFSM.Switch(GameState.player);
            updateLabels();
            attack.Enabled = true;
            enemy_attack.Enabled = false;
            SaveGameData save = new SaveGameData(player.health, player.strength, player.level, player.experience);
            SuperSave = save;
        }

        private void save_button_Click(object sender, EventArgs e)
        {
            string path = @"C:\Users\Guy.Goudeau\Desktop\Homework\Second Semester\WindowsFormsApplication2\WindowsFormsApplication2\Saves\";
            Utilities.SerializeXML<SaveGameData>("Stats", SuperSave, path);
            combatLog.AppendText("Game has been saved.\n");
        }

        private void load_button_Click(object sender, EventArgs e)
        {
            combatLog.Clear();
            combatLog.AppendText("Game has been loaded.\n");
            string path = @"C:\Users\Guy.Goudeau\Desktop\Homework\Second Semester\WindowsFormsApplication2\WindowsFormsApplication2\Saves\Stats";
            Utilities.DeserializeXML<SaveGameData>(path);
            SaveGameData save = Utilities.DeserializeXML<SaveGameData>(path);
            player.health = save.SaveHealth;
            player.strength = save.SaveStrength;
            player.level = save.SaveLevel;
            player.experience = save.SaveExperience;
            enemy.health = 50;
            updateLabels();
        }
    }
}
