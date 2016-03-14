using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DiceGraph
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            List<int> Data = new List<int> { 8, 12, 7, 9, 7, 9, 7, 8, 11, 10, 9, 7, 6, 10, 6, 7, 4, 8, 11, 10 };
            foreach (int i in Data)
            {
                DamageChart.Series["Damage Roll"].Points.AddY(i);
            }
            Data.Sort();
            foreach (int i in Data)
            {
                DamageChart.Series["Damage Roll Sorted"].Points.AddY(i);
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            DamageChart.Series["Damage Roll"].Points.Clear();
            DamageChart.Series["Damage Roll Sorted"].Points.Clear();
        }
    }
}
