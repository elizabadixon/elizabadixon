namespace HipHipWindowsForm
{
    partial class FrmViewProfile
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
            this.lblEmail = new System.Windows.Forms.Label();
            this.txtEmail = new System.Windows.Forms.TextBox();
            this.btnConfirm = new System.Windows.Forms.Button();
            this.lblWelcome = new System.Windows.Forms.Label();
            this.lblYourProfile = new System.Windows.Forms.Label();
            this.btnGoHome = new System.Windows.Forms.Button();
            this.btnExit = new System.Windows.Forms.Button();
            this.btnBack = new System.Windows.Forms.Button();
            this.txtUsername = new System.Windows.Forms.TextBox();
            this.lblUsername = new System.Windows.Forms.Label();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.txtNewPass = new System.Windows.Forms.TextBox();
            this.lblOldPass = new System.Windows.Forms.Label();
            this.lblNewPass = new System.Windows.Forms.Label();
            this.lblChangePass = new System.Windows.Forms.Label();
            this.btnUpdatePass = new System.Windows.Forms.Button();
            this.txtOldPass = new System.Windows.Forms.TextBox();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            this.SuspendLayout();
            // 
            // lblEmail
            // 
            this.lblEmail.AutoSize = true;
            this.lblEmail.Font = new System.Drawing.Font("Calibri", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblEmail.Location = new System.Drawing.Point(40, 147);
            this.lblEmail.Name = "lblEmail";
            this.lblEmail.Size = new System.Drawing.Size(49, 19);
            this.lblEmail.TabIndex = 2;
            this.lblEmail.Text = "Email:";
            // 
            // txtEmail
            // 
            this.txtEmail.AcceptsReturn = true;
            this.txtEmail.AcceptsTab = true;
            this.txtEmail.Location = new System.Drawing.Point(130, 147);
            this.txtEmail.Name = "txtEmail";
            this.txtEmail.Size = new System.Drawing.Size(144, 20);
            this.txtEmail.TabIndex = 6;
            this.txtEmail.TextChanged += new System.EventHandler(this.txtEmail_TextChanged);
            // 
            // btnConfirm
            // 
            this.btnConfirm.BackColor = System.Drawing.Color.YellowGreen;
            this.btnConfirm.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnConfirm.Font = new System.Drawing.Font("Calibri", 18.25F);
            this.btnConfirm.ForeColor = System.Drawing.Color.MidnightBlue;
            this.btnConfirm.Location = new System.Drawing.Point(130, 173);
            this.btnConfirm.Name = "btnConfirm";
            this.btnConfirm.Size = new System.Drawing.Size(149, 54);
            this.btnConfirm.TabIndex = 8;
            this.btnConfirm.Text = "Update";
            this.btnConfirm.UseVisualStyleBackColor = false;
            this.btnConfirm.Click += new System.EventHandler(this.btnConfirm_Click);
            // 
            // lblWelcome
            // 
            this.lblWelcome.AutoSize = true;
            this.lblWelcome.Font = new System.Drawing.Font("Gabriola", 36F, System.Drawing.FontStyle.Italic);
            this.lblWelcome.ForeColor = System.Drawing.Color.DarkBlue;
            this.lblWelcome.Location = new System.Drawing.Point(1, -1);
            this.lblWelcome.Name = "lblWelcome";
            this.lblWelcome.Size = new System.Drawing.Size(182, 88);
            this.lblWelcome.TabIndex = 11;
            this.lblWelcome.Text = "[Hip,Hip]";
            // 
            // lblYourProfile
            // 
            this.lblYourProfile.AutoSize = true;
            this.lblYourProfile.Font = new System.Drawing.Font("Microsoft Sans Serif", 22F);
            this.lblYourProfile.ForeColor = System.Drawing.Color.DarkBlue;
            this.lblYourProfile.Location = new System.Drawing.Point(309, 30);
            this.lblYourProfile.Name = "lblYourProfile";
            this.lblYourProfile.Size = new System.Drawing.Size(172, 36);
            this.lblYourProfile.TabIndex = 13;
            this.lblYourProfile.Text = "Your Profile";
            // 
            // btnGoHome
            // 
            this.btnGoHome.BackColor = System.Drawing.Color.DarkBlue;
            this.btnGoHome.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnGoHome.Font = new System.Drawing.Font("Calibri", 12F);
            this.btnGoHome.ForeColor = System.Drawing.Color.White;
            this.btnGoHome.Location = new System.Drawing.Point(688, 12);
            this.btnGoHome.Name = "btnGoHome";
            this.btnGoHome.Size = new System.Drawing.Size(100, 34);
            this.btnGoHome.TabIndex = 29;
            this.btnGoHome.Text = "Go Home";
            this.btnGoHome.UseVisualStyleBackColor = false;
            this.btnGoHome.Click += new System.EventHandler(this.btnGoHome_Click);
            // 
            // btnExit
            // 
            this.btnExit.BackColor = System.Drawing.Color.DarkBlue;
            this.btnExit.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnExit.Font = new System.Drawing.Font("Calibri", 12F);
            this.btnExit.ForeColor = System.Drawing.Color.White;
            this.btnExit.Location = new System.Drawing.Point(688, 52);
            this.btnExit.Name = "btnExit";
            this.btnExit.Size = new System.Drawing.Size(100, 34);
            this.btnExit.TabIndex = 28;
            this.btnExit.Text = "Exit";
            this.btnExit.UseVisualStyleBackColor = false;
            this.btnExit.Click += new System.EventHandler(this.btnExit_Click);
            // 
            // btnBack
            // 
            this.btnBack.BackColor = System.Drawing.Color.DarkBlue;
            this.btnBack.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnBack.Font = new System.Drawing.Font("Calibri", 12F);
            this.btnBack.ForeColor = System.Drawing.Color.White;
            this.btnBack.Location = new System.Drawing.Point(582, 34);
            this.btnBack.Name = "btnBack";
            this.btnBack.Size = new System.Drawing.Size(100, 34);
            this.btnBack.TabIndex = 31;
            this.btnBack.Text = "Back";
            this.btnBack.UseVisualStyleBackColor = false;
            // 
            // txtUsername
            // 
            this.txtUsername.AcceptsReturn = true;
            this.txtUsername.AcceptsTab = true;
            this.txtUsername.Location = new System.Drawing.Point(130, 118);
            this.txtUsername.Name = "txtUsername";
            this.txtUsername.Size = new System.Drawing.Size(144, 20);
            this.txtUsername.TabIndex = 32;
            // 
            // lblUsername
            // 
            this.lblUsername.AutoSize = true;
            this.lblUsername.Font = new System.Drawing.Font("Calibri", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblUsername.Location = new System.Drawing.Point(40, 118);
            this.lblUsername.Name = "lblUsername";
            this.lblUsername.Size = new System.Drawing.Size(79, 19);
            this.lblUsername.TabIndex = 33;
            this.lblUsername.Text = "Username:";
            // 
            // dataGridView1
            // 
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Location = new System.Drawing.Point(34, 270);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.Size = new System.Drawing.Size(240, 150);
            this.dataGridView1.TabIndex = 35;
            this.dataGridView1.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dataGridView1_CellContentClick);
            // 
            // txtNewPass
            // 
            this.txtNewPass.AcceptsReturn = true;
            this.txtNewPass.AcceptsTab = true;
            this.txtNewPass.Location = new System.Drawing.Point(509, 148);
            this.txtNewPass.Name = "txtNewPass";
            this.txtNewPass.Size = new System.Drawing.Size(144, 20);
            this.txtNewPass.TabIndex = 37;
            // 
            // lblOldPass
            // 
            this.lblOldPass.AutoSize = true;
            this.lblOldPass.Font = new System.Drawing.Font("Calibri", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblOldPass.Location = new System.Drawing.Point(407, 119);
            this.lblOldPass.Name = "lblOldPass";
            this.lblOldPass.Size = new System.Drawing.Size(102, 19);
            this.lblOldPass.TabIndex = 38;
            this.lblOldPass.Text = "Old Password:";
            // 
            // lblNewPass
            // 
            this.lblNewPass.AutoSize = true;
            this.lblNewPass.Font = new System.Drawing.Font("Calibri", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblNewPass.Location = new System.Drawing.Point(401, 149);
            this.lblNewPass.Name = "lblNewPass";
            this.lblNewPass.Size = new System.Drawing.Size(108, 19);
            this.lblNewPass.TabIndex = 39;
            this.lblNewPass.Text = "New Password:";
            // 
            // lblChangePass
            // 
            this.lblChangePass.AutoSize = true;
            this.lblChangePass.Font = new System.Drawing.Font("Calibri Light", 13F, System.Drawing.FontStyle.Italic);
            this.lblChangePass.Location = new System.Drawing.Point(335, 88);
            this.lblChangePass.Name = "lblChangePass";
            this.lblChangePass.Size = new System.Drawing.Size(174, 22);
            this.lblChangePass.TabIndex = 40;
            this.lblChangePass.Text = "Need a new password?";
            // 
            // btnUpdatePass
            // 
            this.btnUpdatePass.BackColor = System.Drawing.Color.YellowGreen;
            this.btnUpdatePass.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnUpdatePass.Font = new System.Drawing.Font("Calibri", 18.25F);
            this.btnUpdatePass.ForeColor = System.Drawing.Color.MidnightBlue;
            this.btnUpdatePass.Location = new System.Drawing.Point(509, 174);
            this.btnUpdatePass.Name = "btnUpdatePass";
            this.btnUpdatePass.Size = new System.Drawing.Size(149, 54);
            this.btnUpdatePass.TabIndex = 41;
            this.btnUpdatePass.Text = "Update";
            this.btnUpdatePass.UseVisualStyleBackColor = false;
            this.btnUpdatePass.Click += new System.EventHandler(this.btnUpdatePass_Click);
            // 
            // txtOldPass
            // 
            this.txtOldPass.AcceptsReturn = true;
            this.txtOldPass.AcceptsTab = true;
            this.txtOldPass.Location = new System.Drawing.Point(509, 117);
            this.txtOldPass.Name = "txtOldPass";
            this.txtOldPass.Size = new System.Drawing.Size(144, 20);
            this.txtOldPass.TabIndex = 42;
            // 
            // FrmViewProfile
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.Control;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.txtOldPass);
            this.Controls.Add(this.btnUpdatePass);
            this.Controls.Add(this.lblChangePass);
            this.Controls.Add(this.lblNewPass);
            this.Controls.Add(this.lblOldPass);
            this.Controls.Add(this.txtNewPass);
            this.Controls.Add(this.dataGridView1);
            this.Controls.Add(this.lblUsername);
            this.Controls.Add(this.txtUsername);
            this.Controls.Add(this.btnBack);
            this.Controls.Add(this.btnGoHome);
            this.Controls.Add(this.btnExit);
            this.Controls.Add(this.lblYourProfile);
            this.Controls.Add(this.lblWelcome);
            this.Controls.Add(this.btnConfirm);
            this.Controls.Add(this.txtEmail);
            this.Controls.Add(this.lblEmail);
            this.Name = "FrmViewProfile";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "My Profile";
            this.Load += new System.EventHandler(this.FrmViewProfile_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Label lblEmail;
        private System.Windows.Forms.TextBox txtEmail;
        private System.Windows.Forms.Button btnConfirm;
        private System.Windows.Forms.Label lblWelcome;
        private System.Windows.Forms.Label lblYourProfile;
        private System.Windows.Forms.Button btnGoHome;
        private System.Windows.Forms.Button btnExit;
        private System.Windows.Forms.Button btnBack;
        private System.Windows.Forms.TextBox txtUsername;
        private System.Windows.Forms.Label lblUsername;
        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.TextBox txtNewPass;
        private System.Windows.Forms.Label lblOldPass;
        private System.Windows.Forms.Label lblNewPass;
        private System.Windows.Forms.Label lblChangePass;
        private System.Windows.Forms.Button btnUpdatePass;
        private System.Windows.Forms.TextBox txtOldPass;
    }
}