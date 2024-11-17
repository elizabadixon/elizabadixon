namespace HipHipWindowsForm
{
    partial class frmFileClaim
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
            this.lblClaimForm = new System.Windows.Forms.Label();
            this.btnClaimSubmit = new System.Windows.Forms.Button();
            this.btnHome = new System.Windows.Forms.Button();
            this.btnBack = new System.Windows.Forms.Button();
            this.btnExit = new System.Windows.Forms.Button();
            this.lblInstructions = new System.Windows.Forms.Label();
            this.txtClaim = new System.Windows.Forms.TextBox();
            this.lblWhen = new System.Windows.Forms.Label();
            this.txtDate = new System.Windows.Forms.TextBox();
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
            this.lblLogoClaim.TabIndex = 11;
            this.lblLogoClaim.Text = "[Hip,Hip]";
            // 
            // lblClaimForm
            // 
            this.lblClaimForm.AutoSize = true;
            this.lblClaimForm.Font = new System.Drawing.Font("Microsoft Sans Serif", 22F);
            this.lblClaimForm.ForeColor = System.Drawing.Color.DarkBlue;
            this.lblClaimForm.Location = new System.Drawing.Point(279, 30);
            this.lblClaimForm.Name = "lblClaimForm";
            this.lblClaimForm.Size = new System.Drawing.Size(165, 36);
            this.lblClaimForm.TabIndex = 12;
            this.lblClaimForm.Text = "Claim Form";
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
            this.btnClaimSubmit.TabIndex = 18;
            this.btnClaimSubmit.Text = "Submit";
            this.btnClaimSubmit.UseVisualStyleBackColor = false;
            this.btnClaimSubmit.Click += new System.EventHandler(this.btnClaimSubmit_Click);
            // 
            // btnHome
            // 
            this.btnHome.BackColor = System.Drawing.Color.DarkBlue;
            this.btnHome.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnHome.Font = new System.Drawing.Font("Calibri", 12F);
            this.btnHome.ForeColor = System.Drawing.Color.White;
            this.btnHome.Location = new System.Drawing.Point(688, 12);
            this.btnHome.Name = "btnHome";
            this.btnHome.Size = new System.Drawing.Size(100, 34);
            this.btnHome.TabIndex = 21;
            this.btnHome.Text = "Go Home";
            this.btnHome.UseVisualStyleBackColor = false;
            this.btnHome.Click += new System.EventHandler(this.btnHome_Click);
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
            this.btnBack.TabIndex = 22;
            this.btnBack.Text = "Back";
            this.btnBack.UseVisualStyleBackColor = false;
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
            this.btnExit.TabIndex = 23;
            this.btnExit.Text = "Exit";
            this.btnExit.UseVisualStyleBackColor = false;
            this.btnExit.Click += new System.EventHandler(this.btnExit_Click);
            // 
            // lblInstructions
            // 
            this.lblInstructions.AutoSize = true;
            this.lblInstructions.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.lblInstructions.Location = new System.Drawing.Point(24, 115);
            this.lblInstructions.Name = "lblInstructions";
            this.lblInstructions.Size = new System.Drawing.Size(264, 17);
            this.lblInstructions.TabIndex = 24;
            this.lblInstructions.Text = "Please explain why you are filing a claim:";
            this.lblInstructions.Click += new System.EventHandler(this.lblInstructions_Click);
            // 
            // txtClaim
            // 
            this.txtClaim.AcceptsReturn = true;
            this.txtClaim.AcceptsTab = true;
            this.txtClaim.Location = new System.Drawing.Point(27, 137);
            this.txtClaim.MaxLength = 32;
            this.txtClaim.Multiline = true;
            this.txtClaim.Name = "txtClaim";
            this.txtClaim.Size = new System.Drawing.Size(409, 84);
            this.txtClaim.TabIndex = 25;
            this.txtClaim.TextChanged += new System.EventHandler(this.txtClaim_TextChanged);
            // 
            // lblWhen
            // 
            this.lblWhen.AutoSize = true;
            this.lblWhen.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.lblWhen.Location = new System.Drawing.Point(27, 245);
            this.lblWhen.Name = "lblWhen";
            this.lblWhen.Size = new System.Drawing.Size(405, 17);
            this.lblWhen.TabIndex = 28;
            this.lblWhen.Text = "When did the incident occur? (YYYY-MM-DD) Ex: (2020-10-25)\r\n";
            this.lblWhen.Click += new System.EventHandler(this.lblWhen_Click);
            // 
            // txtDate
            // 
            this.txtDate.Location = new System.Drawing.Point(30, 267);
            this.txtDate.Name = "txtDate";
            this.txtDate.Size = new System.Drawing.Size(184, 20);
            this.txtDate.TabIndex = 29;
            this.txtDate.TextChanged += new System.EventHandler(this.txtDate_TextChanged);
            // 
            // frmFileClaim
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.txtDate);
            this.Controls.Add(this.lblWhen);
            this.Controls.Add(this.txtClaim);
            this.Controls.Add(this.lblInstructions);
            this.Controls.Add(this.btnExit);
            this.Controls.Add(this.btnBack);
            this.Controls.Add(this.btnHome);
            this.Controls.Add(this.btnClaimSubmit);
            this.Controls.Add(this.lblClaimForm);
            this.Controls.Add(this.lblLogoClaim);
            this.Name = "frmFileClaim";
            this.RightToLeftLayout = true;
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "File a Claim";
            this.Load += new System.EventHandler(this.Form4_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lblLogoClaim;
        private System.Windows.Forms.Label lblClaimForm;
        private System.Windows.Forms.Button btnClaimSubmit;
        private System.Windows.Forms.Button btnHome;
        private System.Windows.Forms.Button btnBack;
        private System.Windows.Forms.Button btnExit;
        private System.Windows.Forms.Label lblInstructions;
        private System.Windows.Forms.TextBox txtClaim;
        private System.Windows.Forms.Label lblWhen;
        private System.Windows.Forms.TextBox txtDate;
    }
}