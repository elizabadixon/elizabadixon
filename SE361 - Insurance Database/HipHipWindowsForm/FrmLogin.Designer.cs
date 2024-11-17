namespace HipHipWindowsForm
{
    partial class LoginForm
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
            this.lblUsername = new System.Windows.Forms.Label();
            this.lblPassword = new System.Windows.Forms.Label();
            this.txtUsername = new System.Windows.Forms.TextBox();
            this.txtPassword = new System.Windows.Forms.TextBox();
            this.btnLogin = new System.Windows.Forms.Button();
            this.btnClear = new System.Windows.Forms.Button();
            this.btnExit = new System.Windows.Forms.Button();
            this.linklblForgotPass = new System.Windows.Forms.LinkLabel();
            this.lblWelcome = new System.Windows.Forms.Label();
            this.lblSubWelcome = new System.Windows.Forms.Label();
            this.lblUserWarn = new System.Windows.Forms.Label();
            this.lblPassWarn = new System.Windows.Forms.Label();
            this.checkShowPass = new System.Windows.Forms.CheckBox();
            this.SuspendLayout();
            // 
            // lblUsername
            // 
            this.lblUsername.AutoSize = true;
            this.lblUsername.Font = new System.Drawing.Font("Calibri", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblUsername.Location = new System.Drawing.Point(268, 211);
            this.lblUsername.Name = "lblUsername";
            this.lblUsername.Size = new System.Drawing.Size(65, 15);
            this.lblUsername.TabIndex = 0;
            this.lblUsername.Text = "Username:";
            this.lblUsername.Click += new System.EventHandler(this.lblUsername_Click);
            // 
            // lblPassword
            // 
            this.lblPassword.AutoSize = true;
            this.lblPassword.Font = new System.Drawing.Font("Calibri", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblPassword.Location = new System.Drawing.Point(268, 237);
            this.lblPassword.Name = "lblPassword";
            this.lblPassword.Size = new System.Drawing.Size(64, 15);
            this.lblPassword.TabIndex = 1;
            this.lblPassword.Text = "Password:";
            this.lblPassword.Click += new System.EventHandler(this.lblPassword_Click);
            // 
            // txtUsername
            // 
            this.txtUsername.BackColor = System.Drawing.SystemColors.ControlLight;
            this.txtUsername.Location = new System.Drawing.Point(330, 207);
            this.txtUsername.Name = "txtUsername";
            this.txtUsername.Size = new System.Drawing.Size(120, 20);
            this.txtUsername.TabIndex = 2;
            this.txtUsername.TextChanged += new System.EventHandler(this.txtUsername_TextChanged);
            // 
            // txtPassword
            // 
            this.txtPassword.AcceptsReturn = true;
            this.txtPassword.AcceptsTab = true;
            this.txtPassword.BackColor = System.Drawing.SystemColors.ControlLight;
            this.txtPassword.Location = new System.Drawing.Point(330, 233);
            this.txtPassword.Name = "txtPassword";
            this.txtPassword.PasswordChar = '*';
            this.txtPassword.Size = new System.Drawing.Size(120, 20);
            this.txtPassword.TabIndex = 3;
            this.txtPassword.TextChanged += new System.EventHandler(this.txtPassword_TextChanged);
            // 
            // btnLogin
            // 
            this.btnLogin.BackColor = System.Drawing.Color.DarkBlue;
            this.btnLogin.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnLogin.ForeColor = System.Drawing.Color.White;
            this.btnLogin.Location = new System.Drawing.Point(207, 269);
            this.btnLogin.Name = "btnLogin";
            this.btnLogin.Size = new System.Drawing.Size(117, 45);
            this.btnLogin.TabIndex = 4;
            this.btnLogin.Text = "Login";
            this.btnLogin.UseVisualStyleBackColor = false;
            this.btnLogin.Click += new System.EventHandler(this.btnLogin_Click);
            // 
            // btnClear
            // 
            this.btnClear.BackColor = System.Drawing.Color.DarkBlue;
            this.btnClear.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnClear.ForeColor = System.Drawing.Color.White;
            this.btnClear.Location = new System.Drawing.Point(330, 269);
            this.btnClear.Name = "btnClear";
            this.btnClear.Size = new System.Drawing.Size(117, 45);
            this.btnClear.TabIndex = 5;
            this.btnClear.Text = "Clear";
            this.btnClear.UseVisualStyleBackColor = false;
            this.btnClear.Click += new System.EventHandler(this.btnClear_Click);
            // 
            // btnExit
            // 
            this.btnExit.BackColor = System.Drawing.Color.DarkBlue;
            this.btnExit.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnExit.ForeColor = System.Drawing.Color.White;
            this.btnExit.Location = new System.Drawing.Point(453, 269);
            this.btnExit.Name = "btnExit";
            this.btnExit.Size = new System.Drawing.Size(117, 45);
            this.btnExit.TabIndex = 6;
            this.btnExit.Text = "Exit";
            this.btnExit.UseVisualStyleBackColor = false;
            this.btnExit.Click += new System.EventHandler(this.btnExit_Click);
            // 
            // linklblForgotPass
            // 
            this.linklblForgotPass.AutoSize = true;
            this.linklblForgotPass.Cursor = System.Windows.Forms.Cursors.Hand;
            this.linklblForgotPass.Location = new System.Drawing.Point(343, 327);
            this.linklblForgotPass.Name = "linklblForgotPass";
            this.linklblForgotPass.Size = new System.Drawing.Size(92, 13);
            this.linklblForgotPass.TabIndex = 8;
            this.linklblForgotPass.TabStop = true;
            this.linklblForgotPass.Text = "Forgot Password?";
            this.linklblForgotPass.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.linklblForgotPass_LinkClicked);
            // 
            // lblWelcome
            // 
            this.lblWelcome.AutoSize = true;
            this.lblWelcome.Font = new System.Drawing.Font("Gabriola", 36F, System.Drawing.FontStyle.Italic, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblWelcome.ForeColor = System.Drawing.Color.DarkBlue;
            this.lblWelcome.Location = new System.Drawing.Point(301, 72);
            this.lblWelcome.Name = "lblWelcome";
            this.lblWelcome.Size = new System.Drawing.Size(182, 88);
            this.lblWelcome.TabIndex = 9;
            this.lblWelcome.Text = "[Hip,Hip]";
            // 
            // lblSubWelcome
            // 
            this.lblSubWelcome.AutoSize = true;
            this.lblSubWelcome.Font = new System.Drawing.Font("Calibri", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblSubWelcome.Location = new System.Drawing.Point(312, 160);
            this.lblSubWelcome.Name = "lblSubWelcome";
            this.lblSubWelcome.Size = new System.Drawing.Size(163, 23);
            this.lblSubWelcome.TabIndex = 10;
            this.lblSubWelcome.Text = "Insurance Database";
            // 
            // lblUserWarn
            // 
            this.lblUserWarn.AutoSize = true;
            this.lblUserWarn.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F);
            this.lblUserWarn.ForeColor = System.Drawing.Color.Red;
            this.lblUserWarn.Location = new System.Drawing.Point(456, 211);
            this.lblUserWarn.Name = "lblUserWarn";
            this.lblUserWarn.Size = new System.Drawing.Size(15, 20);
            this.lblUserWarn.TabIndex = 11;
            this.lblUserWarn.Text = "*";
            this.lblUserWarn.Click += new System.EventHandler(this.lblUserWarn_Click);
            // 
            // lblPassWarn
            // 
            this.lblPassWarn.AutoSize = true;
            this.lblPassWarn.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F);
            this.lblPassWarn.ForeColor = System.Drawing.Color.Red;
            this.lblPassWarn.Location = new System.Drawing.Point(456, 237);
            this.lblPassWarn.Name = "lblPassWarn";
            this.lblPassWarn.Size = new System.Drawing.Size(15, 20);
            this.lblPassWarn.TabIndex = 12;
            this.lblPassWarn.Text = "*";
            this.lblPassWarn.Click += new System.EventHandler(this.lblPassWarn_Click);
            // 
            // checkShowPass
            // 
            this.checkShowPass.AutoSize = true;
            this.checkShowPass.Location = new System.Drawing.Point(477, 237);
            this.checkShowPass.Name = "checkShowPass";
            this.checkShowPass.Size = new System.Drawing.Size(102, 17);
            this.checkShowPass.TabIndex = 13;
            this.checkShowPass.Text = "Show Password";
            this.checkShowPass.UseVisualStyleBackColor = true;
            this.checkShowPass.CheckedChanged += new System.EventHandler(this.checkShowPass_CheckedChanged);
            // 
            // LoginForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.White;
            this.ClientSize = new System.Drawing.Size(784, 411);
            this.Controls.Add(this.checkShowPass);
            this.Controls.Add(this.lblPassWarn);
            this.Controls.Add(this.lblUserWarn);
            this.Controls.Add(this.lblSubWelcome);
            this.Controls.Add(this.lblWelcome);
            this.Controls.Add(this.linklblForgotPass);
            this.Controls.Add(this.btnExit);
            this.Controls.Add(this.btnClear);
            this.Controls.Add(this.btnLogin);
            this.Controls.Add(this.txtPassword);
            this.Controls.Add(this.txtUsername);
            this.Controls.Add(this.lblPassword);
            this.Controls.Add(this.lblUsername);
            this.Name = "LoginForm";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Login Form";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lblUsername;
        private System.Windows.Forms.Label lblPassword;
        private System.Windows.Forms.TextBox txtUsername;
        private System.Windows.Forms.TextBox txtPassword;
        private System.Windows.Forms.Button btnLogin;
        private System.Windows.Forms.Button btnClear;
        private System.Windows.Forms.Button btnExit;
        private System.Windows.Forms.LinkLabel linklblForgotPass;
        private System.Windows.Forms.Label lblWelcome;
        private System.Windows.Forms.Label lblSubWelcome;
        private System.Windows.Forms.Label lblUserWarn;
        private System.Windows.Forms.Label lblPassWarn;
        private System.Windows.Forms.CheckBox checkShowPass;
    }
}

