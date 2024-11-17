namespace HipHipWindowsForm
{
    partial class frmInsights
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
            this.txtTotal = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.lblApproved = new System.Windows.Forms.Label();
            this.lblTotalClaims = new System.Windows.Forms.Label();
            this.txtAvg = new System.Windows.Forms.TextBox();
            this.txtNumPaid = new System.Windows.Forms.TextBox();
            this.txtNumPending = new System.Windows.Forms.TextBox();
            this.txtNumDenied = new System.Windows.Forms.TextBox();
            this.txtNumAppr = new System.Windows.Forms.TextBox();
            this.txtNumTotal = new System.Windows.Forms.TextBox();
            this.btnExit = new System.Windows.Forms.Button();
            this.btnBack = new System.Windows.Forms.Button();
            this.lblWelcome = new System.Windows.Forms.Label();
            this.lblInsights = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // txtTotal
            // 
            this.txtTotal.Location = new System.Drawing.Point(376, 294);
            this.txtTotal.Name = "txtTotal";
            this.txtTotal.Size = new System.Drawing.Size(100, 20);
            this.txtTotal.TabIndex = 27;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(288, 298);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(87, 13);
            this.label1.TabIndex = 26;
            this.label1.Text = "Total Paid Out: $";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(271, 270);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(102, 13);
            this.label5.TabIndex = 25;
            this.label5.Text = "Average Claim Cost:";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(299, 244);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(74, 13);
            this.label4.TabIndex = 24;
            this.label4.Text = "# Paid Claims:";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(281, 218);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(92, 13);
            this.label3.TabIndex = 23;
            this.label3.Text = "# Pending Claims:";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(286, 192);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(87, 13);
            this.label2.TabIndex = 22;
            this.label2.Text = "# Denied Claims:";
            // 
            // lblApproved
            // 
            this.lblApproved.AutoSize = true;
            this.lblApproved.Location = new System.Drawing.Point(274, 166);
            this.lblApproved.Name = "lblApproved";
            this.lblApproved.Size = new System.Drawing.Size(99, 13);
            this.lblApproved.TabIndex = 21;
            this.lblApproved.Text = "# Approved Claims:\r\n";
            // 
            // lblTotalClaims
            // 
            this.lblTotalClaims.AutoSize = true;
            this.lblTotalClaims.Location = new System.Drawing.Point(296, 140);
            this.lblTotalClaims.Name = "lblTotalClaims";
            this.lblTotalClaims.Size = new System.Drawing.Size(77, 13);
            this.lblTotalClaims.TabIndex = 20;
            this.lblTotalClaims.Text = "# Total Claims:";
            // 
            // txtAvg
            // 
            this.txtAvg.Location = new System.Drawing.Point(376, 267);
            this.txtAvg.Name = "txtAvg";
            this.txtAvg.Size = new System.Drawing.Size(100, 20);
            this.txtAvg.TabIndex = 19;
            // 
            // txtNumPaid
            // 
            this.txtNumPaid.Location = new System.Drawing.Point(376, 241);
            this.txtNumPaid.Name = "txtNumPaid";
            this.txtNumPaid.Size = new System.Drawing.Size(100, 20);
            this.txtNumPaid.TabIndex = 18;
            // 
            // txtNumPending
            // 
            this.txtNumPending.Location = new System.Drawing.Point(376, 215);
            this.txtNumPending.Name = "txtNumPending";
            this.txtNumPending.Size = new System.Drawing.Size(100, 20);
            this.txtNumPending.TabIndex = 17;
            // 
            // txtNumDenied
            // 
            this.txtNumDenied.Location = new System.Drawing.Point(376, 189);
            this.txtNumDenied.Name = "txtNumDenied";
            this.txtNumDenied.Size = new System.Drawing.Size(100, 20);
            this.txtNumDenied.TabIndex = 16;
            // 
            // txtNumAppr
            // 
            this.txtNumAppr.Location = new System.Drawing.Point(376, 163);
            this.txtNumAppr.Name = "txtNumAppr";
            this.txtNumAppr.Size = new System.Drawing.Size(100, 20);
            this.txtNumAppr.TabIndex = 15;
            // 
            // txtNumTotal
            // 
            this.txtNumTotal.Location = new System.Drawing.Point(376, 137);
            this.txtNumTotal.Name = "txtNumTotal";
            this.txtNumTotal.Size = new System.Drawing.Size(100, 20);
            this.txtNumTotal.TabIndex = 14;
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
            this.btnExit.TabIndex = 31;
            this.btnExit.Tag = "All";
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
            this.btnBack.TabIndex = 30;
            this.btnBack.Tag = "All";
            this.btnBack.Text = "Back";
            this.btnBack.UseVisualStyleBackColor = false;
            this.btnBack.Click += new System.EventHandler(this.btnBack_Click);
            // 
            // lblWelcome
            // 
            this.lblWelcome.AutoSize = true;
            this.lblWelcome.Font = new System.Drawing.Font("Gabriola", 36F, System.Drawing.FontStyle.Italic);
            this.lblWelcome.ForeColor = System.Drawing.Color.DarkBlue;
            this.lblWelcome.Location = new System.Drawing.Point(1, -1);
            this.lblWelcome.Name = "lblWelcome";
            this.lblWelcome.Size = new System.Drawing.Size(182, 88);
            this.lblWelcome.TabIndex = 32;
            this.lblWelcome.Text = "[Hip,Hip]";
            // 
            // lblInsights
            // 
            this.lblInsights.AutoSize = true;
            this.lblInsights.Font = new System.Drawing.Font("Microsoft Sans Serif", 22F);
            this.lblInsights.ForeColor = System.Drawing.Color.DarkBlue;
            this.lblInsights.Location = new System.Drawing.Point(290, 30);
            this.lblInsights.Name = "lblInsights";
            this.lblInsights.Size = new System.Drawing.Size(201, 36);
            this.lblInsights.TabIndex = 33;
            this.lblInsights.Text = "Claim Insights";
            // 
            // frmInsights
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.lblInsights);
            this.Controls.Add(this.lblWelcome);
            this.Controls.Add(this.btnExit);
            this.Controls.Add(this.btnBack);
            this.Controls.Add(this.txtTotal);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.lblApproved);
            this.Controls.Add(this.lblTotalClaims);
            this.Controls.Add(this.txtAvg);
            this.Controls.Add(this.txtNumPaid);
            this.Controls.Add(this.txtNumPending);
            this.Controls.Add(this.txtNumDenied);
            this.Controls.Add(this.txtNumAppr);
            this.Controls.Add(this.txtNumTotal);
            this.Name = "frmInsights";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Claim Overview";
            this.Load += new System.EventHandler(this.frmInsights_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox txtTotal;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label lblApproved;
        private System.Windows.Forms.Label lblTotalClaims;
        private System.Windows.Forms.TextBox txtAvg;
        private System.Windows.Forms.TextBox txtNumPaid;
        private System.Windows.Forms.TextBox txtNumPending;
        private System.Windows.Forms.TextBox txtNumDenied;
        private System.Windows.Forms.TextBox txtNumAppr;
        private System.Windows.Forms.TextBox txtNumTotal;
        private System.Windows.Forms.Button btnExit;
        private System.Windows.Forms.Button btnBack;
        private System.Windows.Forms.Label lblWelcome;
        private System.Windows.Forms.Label lblInsights;
    }
}