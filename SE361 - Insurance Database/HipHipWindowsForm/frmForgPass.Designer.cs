namespace HipHipWindowsForm
{
    partial class frmForgPass
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
            this.lblLogoClaim = new System.Windows.Forms.Label();
            this.lblRecoverPass = new System.Windows.Forms.Label();
            this.btnExit = new System.Windows.Forms.Button();
            this.btnBack = new System.Windows.Forms.Button();
            this.lblEnterEmail = new System.Windows.Forms.Label();
            this.txtEnterEmail = new System.Windows.Forms.TextBox();
            this.btnClaimSubmit = new System.Windows.Forms.Button();
            this.lblForgPassDesc = new System.Windows.Forms.Label();
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
            // lblRecoverPass
            // 
            this.lblRecoverPass.AutoSize = true;
            this.lblRecoverPass.Font = new System.Drawing.Font("Microsoft Sans Serif", 22F);
            this.lblRecoverPass.ForeColor = System.Drawing.Color.DarkBlue;
            this.lblRecoverPass.Location = new System.Drawing.Point(208, 31);
            this.lblRecoverPass.Name = "lblRecoverPass";
            this.lblRecoverPass.Size = new System.Drawing.Size(402, 36);
            this.lblRecoverPass.TabIndex = 14;
            this.lblRecoverPass.Text = "Recover Forgotten Password";
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
            this.btnBack.Location = new System.Drawing.Point(688, 12);
            this.btnBack.Name = "btnBack";
            this.btnBack.Size = new System.Drawing.Size(100, 34);
            this.btnBack.TabIndex = 27;
            this.btnBack.Text = "Back";
            this.btnBack.UseVisualStyleBackColor = false;
            this.btnBack.Click += new System.EventHandler(this.btnBack_Click);
            // 
            // lblEnterEmail
            // 
            this.lblEnterEmail.AutoSize = true;
            this.lblEnterEmail.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F);
            this.lblEnterEmail.Location = new System.Drawing.Point(69, 230);
            this.lblEnterEmail.Name = "lblEnterEmail";
            this.lblEnterEmail.Size = new System.Drawing.Size(133, 20);
            this.lblEnterEmail.TabIndex = 29;
            this.lblEnterEmail.Text = "Enter Your Email:";
            // 
            // txtEnterEmail
            // 
            this.txtEnterEmail.Location = new System.Drawing.Point(208, 230);
            this.txtEnterEmail.Name = "txtEnterEmail";
            this.txtEnterEmail.Size = new System.Drawing.Size(228, 20);
            this.txtEnterEmail.TabIndex = 30;
            this.txtEnterEmail.TextChanged += new System.EventHandler(this.txtEnterEmail_TextChanged);
            // 
            // btnClaimSubmit
            // 
            this.btnClaimSubmit.BackColor = System.Drawing.Color.DarkBlue;
            this.btnClaimSubmit.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnClaimSubmit.Font = new System.Drawing.Font("Calibri", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnClaimSubmit.ForeColor = System.Drawing.Color.White;
            this.btnClaimSubmit.Location = new System.Drawing.Point(604, 366);
            this.btnClaimSubmit.Name = "btnClaimSubmit";
            this.btnClaimSubmit.Size = new System.Drawing.Size(131, 54);
            this.btnClaimSubmit.TabIndex = 35;
            this.btnClaimSubmit.Text = "Submit";
            this.btnClaimSubmit.UseVisualStyleBackColor = false;
            this.btnClaimSubmit.Click += new System.EventHandler(this.btnClaimSubmit_Click);
            // 
            // lblForgPassDesc
            // 
            this.lblForgPassDesc.BackColor = System.Drawing.SystemColors.GradientInactiveCaption;
            this.lblForgPassDesc.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.lblForgPassDesc.Font = new System.Drawing.Font("Microsoft Sans Serif", 12.5F);
            this.lblForgPassDesc.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(0)))), ((int)(((byte)(0)))), ((int)(((byte)(64)))));
            this.lblForgPassDesc.ImageAlign = System.Drawing.ContentAlignment.TopRight;
            this.lblForgPassDesc.Location = new System.Drawing.Point(75, 121);
            this.lblForgPassDesc.Name = "lblForgPassDesc";
            this.lblForgPassDesc.Size = new System.Drawing.Size(602, 79);
            this.lblForgPassDesc.TabIndex = 36;
            this.lblForgPassDesc.Text = "Once you enter your credentials, you will receive a reply email giving you your n" +
    "ext steps. If you do not see the reply within 15 minutes, please try again.";
            this.lblForgPassDesc.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // frmForgPass
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.lblForgPassDesc);
            this.Controls.Add(this.btnClaimSubmit);
            this.Controls.Add(this.txtEnterEmail);
            this.Controls.Add(this.lblEnterEmail);
            this.Controls.Add(this.btnExit);
            this.Controls.Add(this.btnBack);
            this.Controls.Add(this.lblRecoverPass);
            this.Controls.Add(this.lblLogoClaim);
            this.Name = "frmForgPass";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "ForgPass";
            this.Load += new System.EventHandler(this.ForgPass_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lblLogoClaim;
        private System.Windows.Forms.Label lblRecoverPass;
        private System.Windows.Forms.Button btnExit;
        private System.Windows.Forms.Button btnBack;
        private System.Windows.Forms.Label lblEnterEmail;
        private System.Windows.Forms.TextBox txtEnterEmail;
        private System.Windows.Forms.Button btnClaimSubmit;
        private System.Windows.Forms.Label lblForgPassDesc;
    }
}