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
            this.health_label.Size = new System.Drawing.Size(38, 13);
            this.health_label.TabIndex = 6;
            this.health_label.Text = "Health";
            // 
            // strength_label
            // 
            this.strength_label.AutoSize = true;
            this.strength_label.Location = new System.Drawing.Point(87, 455);
            this.strength_label.Name = "strength_label";
            this.strength_label.Size = new System.Drawing.Size(47, 13);
            this.strength_label.TabIndex = 8;
            this.strength_label.Text = "Strength";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(742, 538);
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
    }
}

