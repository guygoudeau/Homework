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
            this.abilities = new System.Windows.Forms.Button();
            this.items = new System.Windows.Forms.Button();
            this.combatLog = new System.Windows.Forms.TextBox();
            this.player_label = new System.Windows.Forms.Label();
            this.health_label = new System.Windows.Forms.Label();
            this.energy_label = new System.Windows.Forms.Label();
            this.strength_label = new System.Windows.Forms.Label();
            this.potions_label = new System.Windows.Forms.Label();
            this.elixers_label = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // attack
            // 
            this.attack.Location = new System.Drawing.Point(90, 415);
            this.attack.Name = "attack";
            this.attack.Size = new System.Drawing.Size(75, 23);
            this.attack.TabIndex = 0;
            this.attack.Text = "Attack";
            this.attack.UseVisualStyleBackColor = true;
            this.attack.Click += new System.EventHandler(this.attack_Click);
            // 
            // abilities
            // 
            this.abilities.Location = new System.Drawing.Point(90, 444);
            this.abilities.Name = "abilities";
            this.abilities.Size = new System.Drawing.Size(75, 23);
            this.abilities.TabIndex = 1;
            this.abilities.Text = "Abilities";
            this.abilities.UseVisualStyleBackColor = true;
            this.abilities.Click += new System.EventHandler(this.abilities_Click);
            // 
            // items
            // 
            this.items.Location = new System.Drawing.Point(90, 473);
            this.items.Name = "items";
            this.items.Size = new System.Drawing.Size(75, 23);
            this.items.TabIndex = 2;
            this.items.Text = "Items";
            this.items.UseVisualStyleBackColor = true;
            this.items.Click += new System.EventHandler(this.items_Click);
            // 
            // combatLog
            // 
            this.combatLog.Location = new System.Drawing.Point(90, 52);
            this.combatLog.Multiline = true;
            this.combatLog.Name = "combatLog";
            this.combatLog.Size = new System.Drawing.Size(336, 202);
            this.combatLog.TabIndex = 3;
            // 
            // player_label
            // 
            this.player_label.AutoSize = true;
            this.player_label.Location = new System.Drawing.Point(473, 378);
            this.player_label.Name = "player_label";
            this.player_label.Size = new System.Drawing.Size(36, 13);
            this.player_label.TabIndex = 5;
            this.player_label.Text = "Player";
            // 
            // health_label
            // 
            this.health_label.AutoSize = true;
            this.health_label.Location = new System.Drawing.Point(473, 402);
            this.health_label.Name = "health_label";
            this.health_label.Size = new System.Drawing.Size(38, 13);
            this.health_label.TabIndex = 6;
            this.health_label.Text = "Health";
            // 
            // energy_label
            // 
            this.energy_label.AutoSize = true;
            this.energy_label.Location = new System.Drawing.Point(473, 415);
            this.energy_label.Name = "energy_label";
            this.energy_label.Size = new System.Drawing.Size(40, 13);
            this.energy_label.TabIndex = 7;
            this.energy_label.Text = "Energy";
            // 
            // strength_label
            // 
            this.strength_label.AutoSize = true;
            this.strength_label.Location = new System.Drawing.Point(473, 428);
            this.strength_label.Name = "strength_label";
            this.strength_label.Size = new System.Drawing.Size(47, 13);
            this.strength_label.TabIndex = 8;
            this.strength_label.Text = "Strength";
            // 
            // potions_label
            // 
            this.potions_label.AutoSize = true;
            this.potions_label.Location = new System.Drawing.Point(473, 441);
            this.potions_label.Name = "potions_label";
            this.potions_label.Size = new System.Drawing.Size(42, 13);
            this.potions_label.TabIndex = 9;
            this.potions_label.Text = "Potions";
            // 
            // elixers_label
            // 
            this.elixers_label.AutoSize = true;
            this.elixers_label.Location = new System.Drawing.Point(473, 454);
            this.elixers_label.Name = "elixers_label";
            this.elixers_label.Size = new System.Drawing.Size(37, 13);
            this.elixers_label.TabIndex = 10;
            this.elixers_label.Text = "Elixers";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(742, 538);
            this.Controls.Add(this.elixers_label);
            this.Controls.Add(this.potions_label);
            this.Controls.Add(this.strength_label);
            this.Controls.Add(this.energy_label);
            this.Controls.Add(this.health_label);
            this.Controls.Add(this.player_label);
            this.Controls.Add(this.combatLog);
            this.Controls.Add(this.items);
            this.Controls.Add(this.abilities);
            this.Controls.Add(this.attack);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button attack;
        private System.Windows.Forms.Button abilities;
        private System.Windows.Forms.Button items;
        private System.Windows.Forms.TextBox combatLog;
        private System.Windows.Forms.Label player_label;
        private System.Windows.Forms.Label health_label;
        private System.Windows.Forms.Label energy_label;
        private System.Windows.Forms.Label strength_label;
        private System.Windows.Forms.Label potions_label;
        private System.Windows.Forms.Label elixers_label;
    }
}

