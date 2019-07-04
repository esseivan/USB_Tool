using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO.Ports;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Test1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            list_portName.Items.AddRange(SerialPort.GetPortNames());
            if(list_portName.Items.Count != 0)
                list_portName.SelectedIndex = 0;
        }


        private void Btn_connect_Click(object sender, EventArgs e)
        {
            if (sp.IsOpen)
            {
                sp.Close();
                btn_connect.Text = "Connect";
                lbl_status.Text = "Not connected";
            }
            else
            {
                sp.PortName = list_portName.SelectedItem.ToString();
                sp.Open();
                btn_connect.Text = "Disconnect";
                lbl_status.Text = "Connected";
            }
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            if (sp.IsOpen)
            {
                sp.Close();
            }
        }

        private void Btn_send_Click(object sender, EventArgs e)
        {
            sp.Write(txt_send.Text);
        }
    }
}
