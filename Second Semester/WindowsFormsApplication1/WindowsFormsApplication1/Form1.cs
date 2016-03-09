using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        public class Coords
        {
            public string v;
            public Coords(string v)
            {
                this.v = v;
            }
        }

        public List<Coords> coords = new List<Coords>();

        private void pictureBox1_Click(object sender, EventArgs e)
        {
            if(e.GetType() == typeof(MouseEventArgs))
            {
                MouseEventArgs me = e as MouseEventArgs;
                Coords co = new Coords(me.Location.ToString());
                coords.Add(co);
                textOutput.Text += me.Location.ToString() + " ";
            }
        }



        public void NewClick()
        {
            SaveFileDialog saveFileDialog1 = new SaveFileDialog();

            saveFileDialog1.Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
            saveFileDialog1.FilterIndex = 2;
            saveFileDialog1.RestoreDirectory = true;

            if (saveFileDialog1.ShowDialog() == DialogResult.OK)
            {
                File.WriteAllText(saveFileDialog1.FileName, coords[0].v);
                for (int i = 1; i < coords.Count; i++)
                {
                    File.AppendAllText(saveFileDialog1.FileName, coords[i].v);
                }
            }
        }

        private void buttonClear_Click(object sender, EventArgs e)
        {
            if (e.GetType() == typeof(MouseEventArgs))
            {
                MouseEventArgs me = e as MouseEventArgs;
                textOutput.Text = "";
            }
        }
    }
}
