namespace HipHipWindowsForm
{
    partial class frmMessages
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
            this.lblLogoClaim = new System.Windows.Forms.Label();
            this.lblYourClaims = new System.Windows.Forms.Label();
            this.btnExit = new System.Windows.Forms.Button();
            this.btnHome = new System.Windows.Forms.Button();
            this.lblInstruction1 = new System.Windows.Forms.Label();
            this.btnBack = new System.Windows.Forms.Button();
            this.txtRecipient = new System.Windows.Forms.TextBox();
            this.lblInstruction2 = new System.Windows.Forms.Label();
            this.txtMessage = new System.Windows.Forms.TextBox();
            this.btnSend = new System.Windows.Forms.Button();
            this.lblCharCount = new System.Windows.Forms.Label();
            this.lblMaxChar = new System.Windows.Forms.Label();
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.txtMessageContent = new System.Windows.Forms.TextBox();
            this.txtSender = new System.Windows.Forms.TextBox();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            this.SuspendLayout();
            // 
            // lblLogoClaim
            // 
            this.lblLogoClaim.AutoSize = true;
            this.lblLogoClaim.Font = new System.Drawing.Font("Gabriola", 36F, System.Drawing.FontStyle.Italic);
            this.lblLogoClaim.ForeColor = System.Drawing.Color.DarkBlue;
            this.lblLogoClaim.Location = new System.Drawing.Point(1, -1);
            this.lblLogoClaim.Name = "lblLogoClaim";
            this.lblLogoClaim.Size = new System.Drawing.Size(182, 88);
            this.lblLogoClaim.TabIndex = 13;
            this.lblLogoClaim.Text = "[Hip,Hip]";
            // 
            // lblYourClaims
            // 
            this.lblYourClaims.AutoSize = true;
            this.lblYourClaims.Font = new System.Drawing.Font("Microsoft Sans Serif", 22F);
            this.lblYourClaims.ForeColor = System.Drawing.Color.DarkBlue;
            this.lblYourClaims.Location = new System.Drawing.Point(279, 30);
            this.lblYourClaims.Name = "lblYourClaims";
            this.lblYourClaims.Size = new System.Drawing.Size(217, 36);
            this.lblYourClaims.TabIndex = 15;
            this.lblYourClaims.Text = "Message Inbox";
            // 
            // btnExit
            // 
            this.btnExit.BackColor = System.Drawing.Color.DarkBlue;
            this.btnExit.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnExit.Font = new System.Drawing.Font("Calibri", 12F);
            this.btnExit.ForeColor = System.Drawing.Color.White;
            this.btnExit.Location = new System.Drawing.Point(759, 53);
            this.btnExit.Name = "btnExit";
            this.btnExit.Size = new System.Drawing.Size(100, 34);
            this.btnExit.TabIndex = 29;
            this.btnExit.Text = "Exit";
            this.btnExit.UseVisualStyleBackColor = false;
            this.btnExit.Click += new System.EventHandler(this.btnExit_Click);
            // 
            // btnHome
            // 
            this.btnHome.BackColor = System.Drawing.Color.DarkBlue;
            this.btnHome.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnHome.Font = new System.Drawing.Font("Calibri", 12F);
            this.btnHome.ForeColor = System.Drawing.Color.White;
            this.btnHome.Location = new System.Drawing.Point(759, 13);
            this.btnHome.Name = "btnHome";
            this.btnHome.Size = new System.Drawing.Size(100, 34);
            this.btnHome.TabIndex = 27;
            this.btnHome.Text = "Go Home";
            this.btnHome.UseVisualStyleBackColor = false;
            this.btnHome.Click += new System.EventHandler(this.btnHome_Click);
            // 
            // lblInstruction1
            // 
            this.lblInstruction1.AutoSize = true;
            this.lblInstruction1.Font = new System.Drawing.Font("Calibri", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblInstruction1.Location = new System.Drawing.Point(12, 114);
            this.lblInstruction1.Name = "lblInstruction1";
            this.lblInstruction1.Size = new System.Drawing.Size(358, 19);
            this.lblInstruction1.TabIndex = 30;
            this.lblInstruction1.Text = "Please enter the username of your intended recipient:";
            // 
            // btnBack
            // 
            this.btnBack.BackColor = System.Drawing.Color.DarkBlue;
            this.btnBack.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnBack.Font = new System.Drawing.Font("Calibri", 12F);
            this.btnBack.ForeColor = System.Drawing.Color.White;
            this.btnBack.Location = new System.Drawing.Point(653, 35);
            this.btnBack.Name = "btnBack";
            this.btnBack.Size = new System.Drawing.Size(100, 34);
            this.btnBack.TabIndex = 34;
            this.btnBack.Text = "Back";
            this.btnBack.UseVisualStyleBackColor = false;
            // 
            // txtRecipient
            // 
            this.txtRecipient.Location = new System.Drawing.Point(16, 147);
            this.txtRecipient.Name = "txtRecipient";
            this.txtRecipient.Size = new System.Drawing.Size(350, 20);
            this.txtRecipient.TabIndex = 35;
            // 
            // lblInstruction2
            // 
            this.lblInstruction2.AutoSize = true;
            this.lblInstruction2.Font = new System.Drawing.Font("Calibri", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblInstruction2.Location = new System.Drawing.Point(12, 208);
            this.lblInstruction2.Name = "lblInstruction2";
            this.lblInstruction2.Size = new System.Drawing.Size(174, 19);
            this.lblInstruction2.TabIndex = 36;
            this.lblInstruction2.Text = "Enter your message here:";
            // 
            // txtMessage
            // 
            this.txtMessage.Location = new System.Drawing.Point(16, 241);
            this.txtMessage.MaxLength = 256;
            this.txtMessage.Multiline = true;
            this.txtMessage.Name = "txtMessage";
            this.txtMessage.Size = new System.Drawing.Size(349, 119);
            this.txtMessage.TabIndex = 37;
            // 
            // btnSend
            // 
            this.btnSend.BackColor = System.Drawing.Color.YellowGreen;
            this.btnSend.Font = new System.Drawing.Font("Calibri", 20.25F);
            this.btnSend.ForeColor = System.Drawing.Color.MidnightBlue;
            this.btnSend.Location = new System.Drawing.Point(234, 384);
            this.btnSend.Name = "btnSend";
            this.btnSend.Size = new System.Drawing.Size(131, 54);
            this.btnSend.TabIndex = 38;
            this.btnSend.Text = "Send";
            this.btnSend.UseVisualStyleBackColor = false;
            this.btnSend.Click += new System.EventHandler(this.btnSend_Click);
            // 
            // lblCharCount
            // 
            this.lblCharCount.AutoSize = true;
            this.lblCharCount.Location = new System.Drawing.Point(315, 225);
            this.lblCharCount.Name = "lblCharCount";
            this.lblCharCount.Size = new System.Drawing.Size(25, 13);
            this.lblCharCount.TabIndex = 39;
            this.lblCharCount.Text = "255";
            // 
            // lblMaxChar
            // 
            this.lblMaxChar.AutoSize = true;
            this.lblMaxChar.Location = new System.Drawing.Point(336, 225);
            this.lblMaxChar.Name = "lblMaxChar";
            this.lblMaxChar.Size = new System.Drawing.Size(30, 13);
            this.lblMaxChar.TabIndex = 40;
            this.lblMaxChar.Text = "/256";
            // 
            // timer1
            // 
            this.timer1.Enabled = true;
            this.timer1.Interval = 20;
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // dataGridView1
            // 
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Location = new System.Drawing.Point(416, 114);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.ReadOnly = true;
            this.dataGridView1.Size = new System.Drawing.Size(416, 77);
            this.dataGridView1.TabIndex = 41;
            this.dataGridView1.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dataGridView1_CellContentClick);
            // 
            // txtMessageContent
            // 
            this.txtMessageContent.Location = new System.Drawing.Point(416, 257);
            this.txtMessageContent.MaxLength = 256;
            this.txtMessageContent.Multiline = true;
            this.txtMessageContent.Name = "txtMessageContent";
            this.txtMessageContent.Size = new System.Drawing.Size(416, 119);
            this.txtMessageContent.TabIndex = 42;
            // 
            // txtSender
            // 
            this.txtSender.Location = new System.Drawing.Point(416, 218);
            this.txtSender.Name = "txtSender";
            this.txtSender.Size = new System.Drawing.Size(416, 20);
            this.txtSender.TabIndex = 43;
            // 
            // frmMessages
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(871, 450);
            this.Controls.Add(this.txtSender);
            this.Controls.Add(this.txtMessageContent);
            this.Controls.Add(this.dataGridView1);
            this.Controls.Add(this.lblMaxChar);
            this.Controls.Add(this.lblCharCount);
            this.Controls.Add(this.btnSend);
            this.Controls.Add(this.txtMessage);
            this.Controls.Add(this.lblInstruction2);
            this.Controls.Add(this.txtRecipient);
            this.Controls.Add(this.btnBack);
            this.Controls.Add(this.lblInstruction1);
            this.Controls.Add(this.btnExit);
            this.Controls.Add(this.btnHome);
            this.Controls.Add(this.lblYourClaims);
            this.Controls.Add(this.lblLogoClaim);
            this.Name = "frmMessages";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "My Inbox";
            this.Load += new System.EventHandler(this.frmMessages_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lblLogoClaim;
        private System.Windows.Forms.Label lblYourClaims;
        private System.Windows.Forms.Button btnExit;
        private System.Windows.Forms.Button btnHome;
        private System.Windows.Forms.Label lblInstruction1;
        private System.Windows.Forms.Button btnBack;
        private System.Windows.Forms.TextBox txtRecipient;
        private System.Windows.Forms.Label lblInstruction2;
        private System.Windows.Forms.TextBox txtMessage;
        private System.Windows.Forms.Button btnSend;
        private System.Windows.Forms.Label lblCharCount;
        private System.Windows.Forms.Label lblMaxChar;
        private System.Windows.Forms.Timer timer1;
        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.TextBox txtMessageContent;
        private System.Windows.Forms.TextBox txtSender;
    }
}