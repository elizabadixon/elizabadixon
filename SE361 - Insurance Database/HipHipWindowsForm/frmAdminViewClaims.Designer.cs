namespace HipHipWindowsForm
{
    partial class frmAdminViewClaims
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
            this.btnBack = new System.Windows.Forms.Button();
            this.btnGoHome = new System.Windows.Forms.Button();
            this.btnExit = new System.Windows.Forms.Button();
            this.lblYourClaims = new System.Windows.Forms.Label();
            this.lblLogoClaim = new System.Windows.Forms.Label();
            this.txtUsername = new System.Windows.Forms.TextBox();
            this.lblSearchInstructions = new System.Windows.Forms.Label();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.txtClaimID = new System.Windows.Forms.TextBox();
            this.txtOwner = new System.Windows.Forms.TextBox();
            this.txtValue = new System.Windows.Forms.TextBox();
            this.lstStatusOptions = new System.Windows.Forms.ListBox();
            this.btnSearch = new System.Windows.Forms.Button();
            this.btnUpdate = new System.Windows.Forms.Button();
            this.txtContent = new System.Windows.Forms.TextBox();
            this.lblViewApproved = new System.Windows.Forms.Label();
            this.btnPay = new System.Windows.Forms.Button();
            this.btnViewFiles = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.txtDateSearch = new System.Windows.Forms.TextBox();
            this.btnDateSearch = new System.Windows.Forms.Button();
            this.lblPending = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            this.SuspendLayout();
            // 
            // btnBack
            // 
            this.btnBack.BackColor = System.Drawing.Color.DarkBlue;
            this.btnBack.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnBack.Font = new System.Drawing.Font("Calibri", 12F);
            this.btnBack.ForeColor = System.Drawing.Color.White;
            this.btnBack.Location = new System.Drawing.Point(972, 31);
            this.btnBack.Name = "btnBack";
            this.btnBack.Size = new System.Drawing.Size(100, 34);
            this.btnBack.TabIndex = 36;
            this.btnBack.Text = "Back";
            this.btnBack.UseVisualStyleBackColor = false;
            // 
            // btnGoHome
            // 
            this.btnGoHome.BackColor = System.Drawing.Color.DarkBlue;
            this.btnGoHome.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnGoHome.Font = new System.Drawing.Font("Calibri", 12F);
            this.btnGoHome.ForeColor = System.Drawing.Color.White;
            this.btnGoHome.Location = new System.Drawing.Point(1078, 12);
            this.btnGoHome.Name = "btnGoHome";
            this.btnGoHome.Size = new System.Drawing.Size(100, 34);
            this.btnGoHome.TabIndex = 35;
            this.btnGoHome.Text = "Go Home";
            this.btnGoHome.UseVisualStyleBackColor = false;
            this.btnGoHome.Click += new System.EventHandler(this.btnGoHome_Click_1);
            // 
            // btnExit
            // 
            this.btnExit.BackColor = System.Drawing.Color.DarkBlue;
            this.btnExit.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnExit.Font = new System.Drawing.Font("Calibri", 12F);
            this.btnExit.ForeColor = System.Drawing.Color.White;
            this.btnExit.Location = new System.Drawing.Point(1078, 49);
            this.btnExit.Name = "btnExit";
            this.btnExit.Size = new System.Drawing.Size(100, 34);
            this.btnExit.TabIndex = 34;
            this.btnExit.Text = "Exit";
            this.btnExit.UseVisualStyleBackColor = false;
            this.btnExit.Click += new System.EventHandler(this.btnExit_Click);
            // 
            // lblYourClaims
            // 
            this.lblYourClaims.AutoSize = true;
            this.lblYourClaims.Font = new System.Drawing.Font("Microsoft Sans Serif", 22F);
            this.lblYourClaims.ForeColor = System.Drawing.Color.DarkBlue;
            this.lblYourClaims.Location = new System.Drawing.Point(307, 27);
            this.lblYourClaims.Name = "lblYourClaims";
            this.lblYourClaims.Size = new System.Drawing.Size(104, 36);
            this.lblYourClaims.TabIndex = 33;
            this.lblYourClaims.Text = "Claims";
            // 
            // lblLogoClaim
            // 
            this.lblLogoClaim.AutoSize = true;
            this.lblLogoClaim.Font = new System.Drawing.Font("Gabriola", 36F, System.Drawing.FontStyle.Italic);
            this.lblLogoClaim.ForeColor = System.Drawing.Color.DarkBlue;
            this.lblLogoClaim.Location = new System.Drawing.Point(1, -1);
            this.lblLogoClaim.Name = "lblLogoClaim";
            this.lblLogoClaim.Size = new System.Drawing.Size(182, 88);
            this.lblLogoClaim.TabIndex = 32;
            this.lblLogoClaim.Text = "[Hip,Hip]";
            // 
            // txtUsername
            // 
            this.txtUsername.Location = new System.Drawing.Point(175, 89);
            this.txtUsername.Name = "txtUsername";
            this.txtUsername.Size = new System.Drawing.Size(210, 20);
            this.txtUsername.TabIndex = 37;
            // 
            // lblSearchInstructions
            // 
            this.lblSearchInstructions.AutoSize = true;
            this.lblSearchInstructions.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.25F);
            this.lblSearchInstructions.Location = new System.Drawing.Point(24, 89);
            this.lblSearchInstructions.Name = "lblSearchInstructions";
            this.lblSearchInstructions.Size = new System.Drawing.Size(145, 17);
            this.lblSearchInstructions.TabIndex = 38;
            this.lblSearchInstructions.Text = "Search by Username:";
            // 
            // dataGridView1
            // 
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Location = new System.Drawing.Point(27, 194);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.ReadOnly = true;
            this.dataGridView1.SelectionMode = System.Windows.Forms.DataGridViewSelectionMode.FullRowSelect;
            this.dataGridView1.Size = new System.Drawing.Size(647, 171);
            this.dataGridView1.TabIndex = 39;
            this.dataGridView1.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dataGridView1_CellContentClick);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Calibri", 10.25F);
            this.label2.Location = new System.Drawing.Point(707, 114);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(59, 17);
            this.label2.TabIndex = 41;
            this.label2.Text = "Claim ID:";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Calibri", 10.25F);
            this.label3.Location = new System.Drawing.Point(716, 144);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(50, 17);
            this.label3.TabIndex = 42;
            this.label3.Text = "Owner:";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Calibri", 10.25F);
            this.label4.Location = new System.Drawing.Point(709, 174);
            this.label4.Name = "label4";
            this.label4.RightToLeft = System.Windows.Forms.RightToLeft.No;
            this.label4.Size = new System.Drawing.Size(57, 17);
            this.label4.TabIndex = 43;
            this.label4.Text = "Content:";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Calibri", 10.25F);
            this.label5.Location = new System.Drawing.Point(719, 337);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(47, 17);
            this.label5.TabIndex = 44;
            this.label5.Text = "Status:";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("Calibri", 10.25F);
            this.label6.Location = new System.Drawing.Point(723, 307);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(43, 17);
            this.label6.TabIndex = 45;
            this.label6.Text = "Value:";
            // 
            // txtClaimID
            // 
            this.txtClaimID.BackColor = System.Drawing.SystemColors.Window;
            this.txtClaimID.Location = new System.Drawing.Point(772, 114);
            this.txtClaimID.Name = "txtClaimID";
            this.txtClaimID.Size = new System.Drawing.Size(210, 20);
            this.txtClaimID.TabIndex = 46;
            // 
            // txtOwner
            // 
            this.txtOwner.BackColor = System.Drawing.SystemColors.Window;
            this.txtOwner.Location = new System.Drawing.Point(772, 144);
            this.txtOwner.Name = "txtOwner";
            this.txtOwner.Size = new System.Drawing.Size(210, 20);
            this.txtOwner.TabIndex = 47;
            // 
            // txtValue
            // 
            this.txtValue.Location = new System.Drawing.Point(772, 307);
            this.txtValue.Name = "txtValue";
            this.txtValue.Size = new System.Drawing.Size(210, 20);
            this.txtValue.TabIndex = 49;
            // 
            // lstStatusOptions
            // 
            this.lstStatusOptions.FormattingEnabled = true;
            this.lstStatusOptions.Items.AddRange(new object[] {
            "APPROVED",
            "DENIED\t"});
            this.lstStatusOptions.Location = new System.Drawing.Point(772, 337);
            this.lstStatusOptions.Name = "lstStatusOptions";
            this.lstStatusOptions.Size = new System.Drawing.Size(133, 30);
            this.lstStatusOptions.TabIndex = 50;
            // 
            // btnSearch
            // 
            this.btnSearch.BackColor = System.Drawing.Color.YellowGreen;
            this.btnSearch.Font = new System.Drawing.Font("Calibri", 16F);
            this.btnSearch.ForeColor = System.Drawing.Color.MidnightBlue;
            this.btnSearch.Location = new System.Drawing.Point(391, 76);
            this.btnSearch.Name = "btnSearch";
            this.btnSearch.Size = new System.Drawing.Size(108, 41);
            this.btnSearch.TabIndex = 51;
            this.btnSearch.Text = "Search";
            this.btnSearch.UseVisualStyleBackColor = false;
            this.btnSearch.Click += new System.EventHandler(this.btnSearch_Click_1);
            // 
            // btnUpdate
            // 
            this.btnUpdate.BackColor = System.Drawing.Color.YellowGreen;
            this.btnUpdate.Font = new System.Drawing.Font("Calibri", 16F);
            this.btnUpdate.ForeColor = System.Drawing.Color.MidnightBlue;
            this.btnUpdate.Location = new System.Drawing.Point(813, 375);
            this.btnUpdate.Name = "btnUpdate";
            this.btnUpdate.Size = new System.Drawing.Size(108, 41);
            this.btnUpdate.TabIndex = 52;
            this.btnUpdate.Text = "Update";
            this.btnUpdate.UseVisualStyleBackColor = false;
            this.btnUpdate.Click += new System.EventHandler(this.btnUpdate_Click_1);
            // 
            // txtContent
            // 
            this.txtContent.Location = new System.Drawing.Point(772, 174);
            this.txtContent.Multiline = true;
            this.txtContent.Name = "txtContent";
            this.txtContent.Size = new System.Drawing.Size(210, 127);
            this.txtContent.TabIndex = 54;
            // 
            // lblViewApproved
            // 
            this.lblViewApproved.AutoSize = true;
            this.lblViewApproved.Location = new System.Drawing.Point(24, 164);
            this.lblViewApproved.Name = "lblViewApproved";
            this.lblViewApproved.Size = new System.Drawing.Size(166, 13);
            this.lblViewApproved.TabIndex = 55;
            this.lblViewApproved.Text = "View approved but unpaid claims ";
            this.lblViewApproved.Click += new System.EventHandler(this.lblViewApproved_Click);
            // 
            // btnPay
            // 
            this.btnPay.BackColor = System.Drawing.Color.YellowGreen;
            this.btnPay.Font = new System.Drawing.Font("Calibri", 16F);
            this.btnPay.ForeColor = System.Drawing.Color.MidnightBlue;
            this.btnPay.Location = new System.Drawing.Point(647, 375);
            this.btnPay.Name = "btnPay";
            this.btnPay.Size = new System.Drawing.Size(160, 41);
            this.btnPay.TabIndex = 56;
            this.btnPay.Text = "Pay This Claim";
            this.btnPay.UseVisualStyleBackColor = false;
            this.btnPay.Click += new System.EventHandler(this.btnPay_Click);
            // 
            // btnViewFiles
            // 
            this.btnViewFiles.BackColor = System.Drawing.Color.YellowGreen;
            this.btnViewFiles.Font = new System.Drawing.Font("Calibri", 16F);
            this.btnViewFiles.ForeColor = System.Drawing.Color.MidnightBlue;
            this.btnViewFiles.Location = new System.Drawing.Point(927, 375);
            this.btnViewFiles.Name = "btnViewFiles";
            this.btnViewFiles.Size = new System.Drawing.Size(226, 41);
            this.btnViewFiles.TabIndex = 57;
            this.btnViewFiles.Text = "View Associated Files";
            this.btnViewFiles.UseVisualStyleBackColor = false;
            this.btnViewFiles.Click += new System.EventHandler(this.btnViewFiles_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.25F);
            this.label1.Location = new System.Drawing.Point(24, 130);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(212, 17);
            this.label1.TabIndex = 58;
            this.label1.Text = "Search by Date: (YYYY-MM-DD)";
            // 
            // txtDateSearch
            // 
            this.txtDateSearch.Location = new System.Drawing.Point(242, 130);
            this.txtDateSearch.Name = "txtDateSearch";
            this.txtDateSearch.Size = new System.Drawing.Size(210, 20);
            this.txtDateSearch.TabIndex = 59;
            // 
            // btnDateSearch
            // 
            this.btnDateSearch.BackColor = System.Drawing.Color.YellowGreen;
            this.btnDateSearch.Font = new System.Drawing.Font("Calibri", 16F);
            this.btnDateSearch.ForeColor = System.Drawing.Color.MidnightBlue;
            this.btnDateSearch.Location = new System.Drawing.Point(458, 120);
            this.btnDateSearch.Name = "btnDateSearch";
            this.btnDateSearch.Size = new System.Drawing.Size(108, 41);
            this.btnDateSearch.TabIndex = 60;
            this.btnDateSearch.Text = "Search";
            this.btnDateSearch.UseVisualStyleBackColor = false;
            this.btnDateSearch.Click += new System.EventHandler(this.btnDateSearch_Click);
            // 
            // lblPending
            // 
            this.lblPending.AutoSize = true;
            this.lblPending.Location = new System.Drawing.Point(24, 164);
            this.lblPending.Name = "lblPending";
            this.lblPending.Size = new System.Drawing.Size(181, 13);
            this.lblPending.TabIndex = 61;
            this.lblPending.Text = "View Pending Claims Assigned to Me";
            this.lblPending.Click += new System.EventHandler(this.lblPending_Click);
            // 
            // frmAdminViewClaims
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.AutoSize = true;
            this.ClientSize = new System.Drawing.Size(1190, 450);
            this.Controls.Add(this.lblPending);
            this.Controls.Add(this.btnDateSearch);
            this.Controls.Add(this.txtDateSearch);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.btnViewFiles);
            this.Controls.Add(this.btnPay);
            this.Controls.Add(this.lblViewApproved);
            this.Controls.Add(this.txtContent);
            this.Controls.Add(this.btnUpdate);
            this.Controls.Add(this.btnSearch);
            this.Controls.Add(this.lstStatusOptions);
            this.Controls.Add(this.txtValue);
            this.Controls.Add(this.txtOwner);
            this.Controls.Add(this.txtClaimID);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.dataGridView1);
            this.Controls.Add(this.lblSearchInstructions);
            this.Controls.Add(this.txtUsername);
            this.Controls.Add(this.btnBack);
            this.Controls.Add(this.btnGoHome);
            this.Controls.Add(this.btnExit);
            this.Controls.Add(this.lblYourClaims);
            this.Controls.Add(this.lblLogoClaim);
            this.Name = "frmAdminViewClaims";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Claim View";
            this.WindowState = System.Windows.Forms.FormWindowState.Maximized;
            this.Load += new System.EventHandler(this.frmAdminViewClaims_Load_1);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btnBack;
        private System.Windows.Forms.Button btnGoHome;
        private System.Windows.Forms.Button btnExit;
        private System.Windows.Forms.Label lblYourClaims;
        private System.Windows.Forms.Label lblLogoClaim;
        private System.Windows.Forms.TextBox txtUsername;
        private System.Windows.Forms.Label lblSearchInstructions;
        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox txtClaimID;
        private System.Windows.Forms.TextBox txtOwner;
        private System.Windows.Forms.TextBox txtValue;
        private System.Windows.Forms.ListBox lstStatusOptions;
        private System.Windows.Forms.Button btnSearch;
        private System.Windows.Forms.Button btnUpdate;
        private System.Windows.Forms.TextBox txtContent;
        private System.Windows.Forms.Label lblViewApproved;
        private System.Windows.Forms.Button btnPay;
        private System.Windows.Forms.Button btnViewFiles;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox txtDateSearch;
        private System.Windows.Forms.Button btnDateSearch;
        private System.Windows.Forms.Label lblPending;
    }
}