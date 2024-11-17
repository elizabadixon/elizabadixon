namespace HipHipWindowsForm
{
    partial class frmWelcome
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
            this.lblWelcome = new System.Windows.Forms.Label();
            this.btnFileAClaim = new System.Windows.Forms.Button();
            this.btnViewClaims = new System.Windows.Forms.Button();
            this.btnMessages = new System.Windows.Forms.Button();
            this.btnProfile = new System.Windows.Forms.Button();
            this.lblIWantTo = new System.Windows.Forms.Label();
            this.btnLogOut = new System.Windows.Forms.Button();
            this.btnAddUser = new System.Windows.Forms.Button();
            this.btnExit = new System.Windows.Forms.Button();
            this.btnEmployeeViewClaims = new System.Windows.Forms.Button();
            this.btnViewDatabase = new System.Windows.Forms.Button();
            this.btnInsights = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // lblWelcome
            // 
            this.lblWelcome.AutoSize = true;
            this.lblWelcome.Font = new System.Drawing.Font("Gabriola", 36F, System.Drawing.FontStyle.Italic);
            this.lblWelcome.ForeColor = System.Drawing.Color.DarkBlue;
            this.lblWelcome.Location = new System.Drawing.Point(12, 12);
            this.lblWelcome.Name = "lblWelcome";
            this.lblWelcome.Size = new System.Drawing.Size(182, 88);
            this.lblWelcome.TabIndex = 10;
            this.lblWelcome.Text = "[Hip,Hip]";
            this.lblWelcome.Click += new System.EventHandler(this.lblWelcome_Click);
            // 
            // btnFileAClaim
            // 
            this.btnFileAClaim.BackColor = System.Drawing.Color.DarkBlue;
            this.btnFileAClaim.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnFileAClaim.Font = new System.Drawing.Font("Calibri", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnFileAClaim.ForeColor = System.Drawing.Color.White;
            this.btnFileAClaim.Location = new System.Drawing.Point(274, 265);
            this.btnFileAClaim.Name = "btnFileAClaim";
            this.btnFileAClaim.Size = new System.Drawing.Size(248, 90);
            this.btnFileAClaim.TabIndex = 11;
            this.btnFileAClaim.Tag = "Client";
            this.btnFileAClaim.Text = "File A Claim";
            this.btnFileAClaim.UseVisualStyleBackColor = false;
            this.btnFileAClaim.Click += new System.EventHandler(this.btnFileAClaim_Click);
            // 
            // btnViewClaims
            // 
            this.btnViewClaims.BackColor = System.Drawing.Color.DarkBlue;
            this.btnViewClaims.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnViewClaims.Font = new System.Drawing.Font("Calibri", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnViewClaims.ForeColor = System.Drawing.Color.White;
            this.btnViewClaims.Location = new System.Drawing.Point(274, 160);
            this.btnViewClaims.Name = "btnViewClaims";
            this.btnViewClaims.Size = new System.Drawing.Size(248, 90);
            this.btnViewClaims.TabIndex = 12;
            this.btnViewClaims.Tag = "Client";
            this.btnViewClaims.Text = "View My Claims";
            this.btnViewClaims.UseVisualStyleBackColor = false;
            this.btnViewClaims.Click += new System.EventHandler(this.btnViewClaims_Click);
            // 
            // btnMessages
            // 
            this.btnMessages.BackColor = System.Drawing.Color.DarkBlue;
            this.btnMessages.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnMessages.Font = new System.Drawing.Font("Calibri", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnMessages.ForeColor = System.Drawing.Color.White;
            this.btnMessages.Location = new System.Drawing.Point(12, 160);
            this.btnMessages.Name = "btnMessages";
            this.btnMessages.Size = new System.Drawing.Size(248, 90);
            this.btnMessages.TabIndex = 13;
            this.btnMessages.Tag = "All";
            this.btnMessages.Text = "View My Messages";
            this.btnMessages.UseVisualStyleBackColor = false;
            this.btnMessages.Click += new System.EventHandler(this.btnMessages_Click);
            // 
            // btnProfile
            // 
            this.btnProfile.BackColor = System.Drawing.Color.DarkBlue;
            this.btnProfile.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnProfile.Font = new System.Drawing.Font("Calibri", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnProfile.ForeColor = System.Drawing.Color.White;
            this.btnProfile.Location = new System.Drawing.Point(540, 160);
            this.btnProfile.Name = "btnProfile";
            this.btnProfile.Size = new System.Drawing.Size(248, 90);
            this.btnProfile.TabIndex = 14;
            this.btnProfile.Tag = "All";
            this.btnProfile.Text = "Edit My Profile";
            this.btnProfile.UseVisualStyleBackColor = false;
            this.btnProfile.Click += new System.EventHandler(this.btnProfile_Click);
            // 
            // lblIWantTo
            // 
            this.lblIWantTo.AutoSize = true;
            this.lblIWantTo.Font = new System.Drawing.Font("Calibri", 27.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblIWantTo.ForeColor = System.Drawing.Color.DarkBlue;
            this.lblIWantTo.Location = new System.Drawing.Point(303, 74);
            this.lblIWantTo.Name = "lblIWantTo";
            this.lblIWantTo.Size = new System.Drawing.Size(188, 45);
            this.lblIWantTo.TabIndex = 15;
            this.lblIWantTo.Text = "I Want To...";
            // 
            // btnLogOut
            // 
            this.btnLogOut.BackColor = System.Drawing.Color.DarkBlue;
            this.btnLogOut.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnLogOut.Font = new System.Drawing.Font("Calibri", 12F);
            this.btnLogOut.ForeColor = System.Drawing.Color.White;
            this.btnLogOut.Location = new System.Drawing.Point(688, 12);
            this.btnLogOut.Name = "btnLogOut";
            this.btnLogOut.Size = new System.Drawing.Size(100, 34);
            this.btnLogOut.TabIndex = 27;
            this.btnLogOut.Tag = "All";
            this.btnLogOut.Text = "Log Out";
            this.btnLogOut.UseVisualStyleBackColor = false;
            this.btnLogOut.Click += new System.EventHandler(this.btnLogOut_Click);
            // 
            // btnAddUser
            // 
            this.btnAddUser.BackColor = System.Drawing.Color.DarkBlue;
            this.btnAddUser.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnAddUser.Font = new System.Drawing.Font("Calibri", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnAddUser.ForeColor = System.Drawing.Color.White;
            this.btnAddUser.Location = new System.Drawing.Point(274, 265);
            this.btnAddUser.Name = "btnAddUser";
            this.btnAddUser.Size = new System.Drawing.Size(248, 90);
            this.btnAddUser.TabIndex = 28;
            this.btnAddUser.Tag = "Employee";
            this.btnAddUser.Text = "User Management";
            this.btnAddUser.UseVisualStyleBackColor = false;
            this.btnAddUser.Click += new System.EventHandler(this.btnAddUser_Click);
            // 
            // btnExit
            // 
            this.btnExit.BackColor = System.Drawing.Color.DarkBlue;
            this.btnExit.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnExit.Font = new System.Drawing.Font("Calibri", 12F);
            this.btnExit.ForeColor = System.Drawing.Color.White;
            this.btnExit.Location = new System.Drawing.Point(582, 12);
            this.btnExit.Name = "btnExit";
            this.btnExit.Size = new System.Drawing.Size(100, 34);
            this.btnExit.TabIndex = 29;
            this.btnExit.Tag = "All";
            this.btnExit.Text = "Exit";
            this.btnExit.UseVisualStyleBackColor = false;
            this.btnExit.Click += new System.EventHandler(this.btnExit_Click_1);
            // 
            // btnEmployeeViewClaims
            // 
            this.btnEmployeeViewClaims.BackColor = System.Drawing.Color.DarkBlue;
            this.btnEmployeeViewClaims.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnEmployeeViewClaims.Font = new System.Drawing.Font("Calibri", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnEmployeeViewClaims.ForeColor = System.Drawing.Color.White;
            this.btnEmployeeViewClaims.Location = new System.Drawing.Point(274, 160);
            this.btnEmployeeViewClaims.Name = "btnEmployeeViewClaims";
            this.btnEmployeeViewClaims.Size = new System.Drawing.Size(248, 90);
            this.btnEmployeeViewClaims.TabIndex = 31;
            this.btnEmployeeViewClaims.Tag = "Employee";
            this.btnEmployeeViewClaims.Text = "View Claims";
            this.btnEmployeeViewClaims.UseVisualStyleBackColor = false;
            this.btnEmployeeViewClaims.Click += new System.EventHandler(this.btnEmployeeViewClaims_Click);
            // 
            // btnViewDatabase
            // 
            this.btnViewDatabase.BackColor = System.Drawing.Color.DarkBlue;
            this.btnViewDatabase.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnViewDatabase.Font = new System.Drawing.Font("Calibri", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnViewDatabase.ForeColor = System.Drawing.Color.White;
            this.btnViewDatabase.Location = new System.Drawing.Point(540, 265);
            this.btnViewDatabase.Name = "btnViewDatabase";
            this.btnViewDatabase.Size = new System.Drawing.Size(248, 90);
            this.btnViewDatabase.TabIndex = 32;
            this.btnViewDatabase.Tag = "Admin";
            this.btnViewDatabase.Text = "View Database";
            this.btnViewDatabase.UseVisualStyleBackColor = false;
            this.btnViewDatabase.Click += new System.EventHandler(this.btnViewDatabase_Click);
            // 
            // btnInsights
            // 
            this.btnInsights.BackColor = System.Drawing.Color.DarkBlue;
            this.btnInsights.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnInsights.Font = new System.Drawing.Font("Calibri", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnInsights.ForeColor = System.Drawing.Color.White;
            this.btnInsights.Location = new System.Drawing.Point(12, 265);
            this.btnInsights.Name = "btnInsights";
            this.btnInsights.Size = new System.Drawing.Size(248, 90);
            this.btnInsights.TabIndex = 33;
            this.btnInsights.Tag = "Admin";
            this.btnInsights.Text = "Insights";
            this.btnInsights.UseVisualStyleBackColor = false;
            this.btnInsights.Click += new System.EventHandler(this.btnInsights_Click);
            // 
            // frmWelcome
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btnInsights);
            this.Controls.Add(this.btnViewDatabase);
            this.Controls.Add(this.btnExit);
            this.Controls.Add(this.btnAddUser);
            this.Controls.Add(this.btnLogOut);
            this.Controls.Add(this.lblIWantTo);
            this.Controls.Add(this.btnProfile);
            this.Controls.Add(this.btnMessages);
            this.Controls.Add(this.btnViewClaims);
            this.Controls.Add(this.btnFileAClaim);
            this.Controls.Add(this.lblWelcome);
            this.Controls.Add(this.btnEmployeeViewClaims);
            this.Name = "frmWelcome";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Welcome to [Hip, Hip] Insurance!";
            this.Load += new System.EventHandler(this.WelcomeForm_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Label lblWelcome;
        private System.Windows.Forms.Button btnFileAClaim;
        private System.Windows.Forms.Button btnViewClaims;
        private System.Windows.Forms.Button btnMessages;
        private System.Windows.Forms.Button btnProfile;
        private System.Windows.Forms.Label lblIWantTo;
        private System.Windows.Forms.Button btnLogOut;
        private System.Windows.Forms.Button btnAddUser;
        private System.Windows.Forms.Button btnExit;
        private System.Windows.Forms.Button btnEmployeeViewClaims;
        private System.Windows.Forms.Button btnViewDatabase;
        private System.Windows.Forms.Button btnInsights;
    }
}