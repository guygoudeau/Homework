using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void newToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form1 newMDIChild = new Form1();
            newMDIChild.MdiParent = this;
            newMDIChild.Show();
        }

        private void saveToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form activeChild = this.ActiveMdiChild;
            Object o = e as Object;
            //e is an eventarg
            //it is also an Object

            //me is a mouseventarg
            //which is also an Object
            MouseEventArgs me = e as MouseEventArgs;
            if (activeChild != null)
            {
                if (activeChild.GetType() == typeof(Form1))
                {
                    Form1 f = activeChild as Form1;
                    f.NewClick();
                }
            }
        }
    }
}
