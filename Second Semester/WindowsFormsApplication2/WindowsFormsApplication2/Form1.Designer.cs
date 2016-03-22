namespace WindowsFormsApplication2
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.attack = new System.Windows.Forms.Button();
            this.combatLog = new System.Windows.Forms.TextBox();
            this.player_label = new System.Windows.Forms.Label();
            this.health_label = new System.Windows.Forms.Label();
            this.strength_label = new System.Windows.Forms.Label();
            this.ph_label = new System.Windows.Forms.Label();
            this.ps_label = new System.Windows.Forms.Label();
            this.enemy_label = new System.Windows.Forms.Label();
            this.eHealth_label = new System.Windows.Forms.Label();
            this.eStrength_label = new System.Windows.Forms.Label();
            this.eh_label = new System.Windows.Forms.Label();
            this.es_label = new System.Windows.Forms.Label();
            this.enemy_attack = new System.Windows.Forms.Button();
            this.level_label = new System.Windows.Forms.Label();
            this.experience_label = new System.Windows.Forms.Label();
            this.pl_label = new System.Windows.Forms.Label();
            this.pe_label = new System.Windows.Forms.Label();
            this.newGame_button = new System.Windows.Forms.Button();
            this.cphase_label = new System.Windows.Forms.Label();
            this.phase_label = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // attack
            // 
            this.attack.Location = new System.Drawing.Point(90, 368);
            this.attack.Name = "attack";
            this.attack.Size = new System.Drawing.Size(75, 23);
            this.attack.TabIndex = 0;
            this.attack.Text = "Attack";
            this.attack.UseVisualStyleBackColor = true;
            this.attack.Click += new System.EventHandler(this.attack_Click);
            // 
            // combatLog
            // 
            this.combatLog.Location = new System.Drawing.Point(90, 52);
            this.combatLog.Multiline = true;
            this.combatLog.Name = "combatLog";
            this.combatLog.ReadOnly = true;
            this.combatLog.Size = new System.Drawing.Size(336, 202);
            this.combatLog.TabIndex = 3;
            // 
            // player_label
            // 
            this.player_label.AutoSize = true;
            this.player_label.Location = new System.Drawing.Point(87, 418);
            this.player_label.Name = "player_label";
            this.player_label.Size = new System.Drawing.Size(36, 13);
            this.player_label.TabIndex = 5;
            this.player_label.Text = "Player";
            // 
            // health_label
            // 
            this.health_label.AutoSize = true;
            this.health_label.Location = new System.Drawing.Point(87, 442);
            this.health_label.Name = "health_label";
            this.health_label.Size = new System.Drawing.Size(41, 13);
            this.health_label.TabIndex = 6;
            this.health_label.Text = "Health:";
            // 
            // strength_label
            // 
            this.strength_label.AutoSize = true;
            this.strength_label.Location = new System.Drawing.Point(87, 455);
            this.strength_label.Name = "strength_label";
            this.strength_label.Size = new System.Drawing.Size(50, 13);
            this.strength_label.TabIndex = 8;
            this.strength_label.Text = "Strength:";
            // 
            // ph_label
            // 
            this.ph_label.AutoSize = true;
            this.ph_label.Location = new System.Drawing.Point(179, 442);
            this.ph_label.Name = "ph_label";
            this.ph_label.Size = new System.Drawing.Size(0, 13);
            this.ph_label.TabIndex = 10;
            // 
            // ps_label
            // 
            this.ps_label.AutoSize = true;
            this.ps_label.Location = new System.Drawing.Point(179, 455);
            this.ps_label.Name = "ps_label";
            this.ps_label.Size = new System.Drawing.Size(0, 13);
            this.ps_label.TabIndex = 11;
            // 
            // enemy_label
            // 
            this.enemy_label.AutoSize = true;
            this.enemy_label.Location = new System.Drawing.Point(379, 417);
            this.enemy_label.Name = "enemy_label";
            this.enemy_label.Size = new System.Drawing.Size(39, 13);
            this.enemy_label.TabIndex = 12;
            this.enemy_label.Text = "Enemy";
            // 
            // eHealth_label
            // 
            this.eHealth_label.AutoSize = true;
            this.eHealth_label.Location = new System.Drawing.Point(379, 442);
            this.eHealth_label.Name = "eHealth_label";
            this.eHealth_label.Size = new System.Drawing.Size(41, 13);
            this.eHealth_label.TabIndex = 13;
            this.eHealth_label.Text = "Health:";
            // 
            // eStrength_label
            // 
            this.eStrength_label.AutoSize = true;
            this.eStrength_label.Location = new System.Drawing.Point(379, 455);
            this.eStrength_label.Name = "eStrength_label";
            this.eStrength_label.Size = new System.Drawing.Size(50, 13);
            this.eStrength_label.TabIndex = 14;
            this.eStrength_label.Text = "Strength:";
            // 
            // eh_label
            // 
            this.eh_label.AutoSize = true;
            this.eh_label.Location = new System.Drawing.Point(499, 441);
            this.eh_label.Name = "eh_label";
            this.eh_label.Size = new System.Drawing.Size(0, 13);
            this.eh_label.TabIndex = 15;
            // 
            // es_label
            // 
            this.es_label.AutoSize = true;
            this.es_label.Location = new System.Drawing.Point(499, 455);
            this.es_label.Name = "es_label";
            this.es_label.Size = new System.Drawing.Size(0, 13);
            this.es_label.TabIndex = 16;
            // 
            // enemy_attack
            // 
            this.enemy_attack.Location = new System.Drawing.Point(382, 368);
            this.enemy_attack.Name = "enemy_attack";
            this.enemy_attack.Size = new System.Drawing.Size(75, 23);
            this.enemy_attack.TabIndex = 17;
            this.enemy_attack.Text = "Attack";
            this.enemy_attack.UseVisualStyleBackColor = true;
            this.enemy_attack.Click += new System.EventHandler(this.enemy_attack_Click);
            // 
            // level_label
            // 
            this.level_label.AutoSize = true;
            this.level_label.Location = new System.Drawing.Point(88, 468);
            this.level_label.Name = "level_label";
            this.level_label.Size = new System.Drawing.Size(36, 13);
            this.level_label.TabIndex = 18;
            this.level_label.Text = "Level:";
            // 
            // experience_label
            // 
            this.experience_label.AutoSize = true;
            this.experience_label.Location = new System.Drawing.Point(87, 481);
            this.experience_label.Name = "experience_label";
            this.experience_label.Size = new System.Drawing.Size(63, 13);
            this.experience_label.TabIndex = 19;
            this.experience_label.Text = "Experience:";
            // 
            // pl_label
            // 
            this.pl_label.AutoSize = true;
            this.pl_label.Location = new System.Drawing.Point(179, 468);
            this.pl_label.Name = "pl_label";
            this.pl_label.Size = new System.Drawing.Size(0, 13);
            this.pl_label.TabIndex = 20;
            // 
            // pe_label
            // 
            this.pe_label.AutoSize = true;
            this.pe_label.Location = new System.Drawing.Point(179, 481);
            this.pe_label.Name = "pe_label";
            this.pe_label.Size = new System.Drawing.Size(0, 13);
            this.pe_label.TabIndex = 21;
            // 
            // newGame_button
            // 
            this.newGame_button.Location = new System.Drawing.Point(502, 52);
            this.newGame_button.Name = "newGame_button";
            this.newGame_button.Size = new System.Drawing.Size(75, 23);
            this.newGame_button.TabIndex = 23;
            this.newGame_button.Text = "New Game";
            this.newGame_button.UseVisualStyleBackColor = true;
            this.newGame_button.Click += new System.EventHandler(this.newGame_button_Click);
            // 
            // cphase_label
            // 
            this.cphase_label.AutoSize = true;
            this.cphase_label.Location = new System.Drawing.Point(204, 310);
            this.cphase_label.Name = "cphase_label";
            this.cphase_label.Size = new System.Drawing.Size(77, 13);
            this.cphase_label.TabIndex = 24;
            this.cphase_label.Text = "Current Phase:";
            // 
            // phase_label
            // 
            this.phase_label.AutoSize = true;
            this.phase_label.Location = new System.Drawing.Point(307, 310);
            this.phase_label.Name = "phase_label";
            this.phase_label.Size = new System.Drawing.Size(0, 13);
            this.phase_label.TabIndex = 26;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(742, 538);
            this.Controls.Add(this.phase_label);
            this.Controls.Add(this.cphase_label);
            this.Controls.Add(this.newGame_button);
            this.Controls.Add(this.pe_label);
            this.Controls.Add(this.pl_label);
            this.Controls.Add(this.experience_label);
            this.Controls.Add(this.level_label);
            this.Controls.Add(this.enemy_attack);
            this.Controls.Add(this.es_label);
            this.Controls.Add(this.eh_label);
            this.Controls.Add(this.eStrength_label);
            this.Controls.Add(this.eHealth_label);
            this.Controls.Add(this.enemy_label);
            this.Controls.Add(this.ps_label);
            this.Controls.Add(this.ph_label);
            this.Controls.Add(this.strength_label);
            this.Controls.Add(this.health_label);
            this.Controls.Add(this.player_label);
            this.Controls.Add(this.combatLog);
            this.Controls.Add(this.attack);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button attack;
        private System.Windows.Forms.TextBox combatLog;
        private System.Windows.Forms.Label player_label;
        private System.Windows.Forms.Label health_label;
        private System.Windows.Forms.Label strength_label;
        private System.Windows.Forms.Label ph_label;
        private System.Windows.Forms.Label ps_label;
        private System.Windows.Forms.Label enemy_label;
        private System.Windows.Forms.Label eHealth_label;
        private System.Windows.Forms.Label eStrength_label;
        private System.Windows.Forms.Label eh_label;
        private System.Windows.Forms.Label es_label;
        private System.Windows.Forms.Button enemy_attack;
        private System.Windows.Forms.Label level_label;
        private System.Windows.Forms.Label experience_label;
        private System.Windows.Forms.Label pl_label;
        private System.Windows.Forms.Label pe_label;
        private System.Windows.Forms.Button newGame_button;
        private System.Windows.Forms.Label cphase_label;
        private System.Windows.Forms.Label phase_label;
    }
}

