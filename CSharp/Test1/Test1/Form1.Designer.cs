namespace Test1
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
            this.components = new System.ComponentModel.Container();
            this.btn_connect = new System.Windows.Forms.Button();
            this.lbl_status = new System.Windows.Forms.Label();
            this.txt_send = new System.Windows.Forms.TextBox();
            this.btn_send = new System.Windows.Forms.Button();
            this.txt_receive = new System.Windows.Forms.RichTextBox();
            this.sp = new System.IO.Ports.SerialPort(this.components);
            this.list_portName = new System.Windows.Forms.ComboBox();
            this.SuspendLayout();
            // 
            // btn_connect
            // 
            this.btn_connect.Location = new System.Drawing.Point(139, 10);
            this.btn_connect.Name = "btn_connect";
            this.btn_connect.Size = new System.Drawing.Size(75, 23);
            this.btn_connect.TabIndex = 1;
            this.btn_connect.Text = "Connect";
            this.btn_connect.UseVisualStyleBackColor = true;
            this.btn_connect.Click += new System.EventHandler(this.Btn_connect_Click);
            // 
            // lbl_status
            // 
            this.lbl_status.AutoSize = true;
            this.lbl_status.Location = new System.Drawing.Point(12, 36);
            this.lbl_status.Name = "lbl_status";
            this.lbl_status.Size = new System.Drawing.Size(78, 13);
            this.lbl_status.TabIndex = 2;
            this.lbl_status.Text = "Not connected";
            // 
            // txt_send
            // 
            this.txt_send.Location = new System.Drawing.Point(12, 81);
            this.txt_send.Name = "txt_send";
            this.txt_send.Size = new System.Drawing.Size(100, 20);
            this.txt_send.TabIndex = 3;
            // 
            // btn_send
            // 
            this.btn_send.Location = new System.Drawing.Point(118, 78);
            this.btn_send.Name = "btn_send";
            this.btn_send.Size = new System.Drawing.Size(75, 23);
            this.btn_send.TabIndex = 4;
            this.btn_send.Text = "Send data";
            this.btn_send.UseVisualStyleBackColor = true;
            this.btn_send.Click += new System.EventHandler(this.Btn_send_Click);
            // 
            // txt_receive
            // 
            this.txt_receive.Location = new System.Drawing.Point(280, 10);
            this.txt_receive.Name = "txt_receive";
            this.txt_receive.Size = new System.Drawing.Size(354, 314);
            this.txt_receive.TabIndex = 5;
            this.txt_receive.Text = "";
            // 
            // sp
            // 
            this.sp.BaudRate = 115200;
            this.sp.WriteBufferSize = 64;
            // 
            // list_portName
            // 
            this.list_portName.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.list_portName.FormattingEnabled = true;
            this.list_portName.Location = new System.Drawing.Point(12, 12);
            this.list_portName.Name = "list_portName";
            this.list_portName.Size = new System.Drawing.Size(121, 21);
            this.list_portName.TabIndex = 6;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.list_portName);
            this.Controls.Add(this.txt_receive);
            this.Controls.Add(this.btn_send);
            this.Controls.Add(this.txt_send);
            this.Controls.Add(this.lbl_status);
            this.Controls.Add(this.btn_connect);
            this.Name = "Form1";
            this.Text = "Form1";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.Form1_FormClosing);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Button btn_connect;
        private System.Windows.Forms.Label lbl_status;
        private System.Windows.Forms.TextBox txt_send;
        private System.Windows.Forms.Button btn_send;
        private System.Windows.Forms.RichTextBox txt_receive;
        private System.IO.Ports.SerialPort sp;
        private System.Windows.Forms.ComboBox list_portName;
    }
}

