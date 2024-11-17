namespace HipHipWindowsForm
{
    partial class frmViewClaims
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
            this.lblYourClaims = new System.Windows.Forms.Label();
            this.btnDwnloadReport = new System.Windows.Forms.Button();
            this.btnUploadDocs = new System.Windows.Forms.Button();
            this.btnExit = new System.Windows.Forms.Button();
            this.btnGoHome = new System.Windows.Forms.Button();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.lblClaimID = new System.Windows.Forms.Label();
            this.lblContent = new System.Windows.Forms.Label();
            this.txtClaimID = new System.Windows.Forms.TextBox();
            this.txtContent = new System.Windows.Forms.TextBox();
            this.openFileDialog1 = new System.Windows.Forms.OpenFileDialog();
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
            this.lblLogoClaim.TabIndex = 12;
            this.lblLogoClaim.Text = "[Hip,Hip]";
            // 
            // lblYourClaims
            // 
            this.lblYourClaims.AutoSize = true;
            this.lblYourClaims.Font = new System.Drawing.Font("Microsoft Sans Serif", 22F);
            this.lblYourClaims.ForeColor = System.Drawing.Color.DarkBlue;
            this.lblYourClaims.Location = new System.Drawing.Point(309, 30);
            this.lblYourClaims.Name = "lblYourClaims";
            this.lblYourClaims.Size = new System.Drawing.Size(152, 36);
            this.lblYourClaims.TabIndex = 14;
            this.lblYourClaims.Text = "My Claims";
            // 
            // btnDwnloadReport
            // 
            this.btnDwnloadReport.BackColor = System.Drawing.Color.DarkBlue;
            this.btnDwnloadReport.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnDwnloadReport.Font = new System.Drawing.Font("Calibri", 18F);
            this.btnDwnloadReport.ForeColor = System.Drawing.Color.White;
            this.btnDwnloadReport.Location = new System.Drawing.Point(12, 340);
            this.btnDwnloadReport.Name = "btnDwnloadReport";
            this.btnDwnloadReport.Size = new System.Drawing.Size(287, 89);
            this.btnDwnloadReport.TabIndex = 15;
            this.btnDwnloadReport.Text = "Download This Table";
            this.btnDwnloadReport.UseVisualStyleBackColor = false;
            this.btnDwnloadReport.Click += new System.EventHandler(this.btnDwnloadReport_Click);
            // 
            // btnUploadDocs
            // 
            this.btnUploadDocs.BackColor = System.Drawing.Color.DarkBlue;
            this.btnUploadDocs.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnUploadDocs.Font = new System.Drawing.Font("Calibri", 20F);
            this.btnUploadDocs.ForeColor = System.Drawing.Color.White;
            this.btnUploadDocs.Location = new System.Drawing.Point(440, 340);
            this.btnUploadDocs.Name = "btnUploadDocs";
            this.btnUploadDocs.Size = new System.Drawing.Size(348, 89);
            this.btnUploadDocs.TabIndex = 16;
            this.btnUploadDocs.Text = "Upload Supplemental Documents";
            this.btnUploadDocs.UseVisualStyleBackColor = false;
            this.btnUploadDocs.Click += new System.EventHandler(this.btnUploadDocs_Click);
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
            this.btnExit.TabIndex = 26;
            this.btnExit.Text = "Exit";
            this.btnExit.UseVisualStyleBackColor = false;
            this.btnExit.Click += new System.EventHandler(this.btnExit_Click);
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
            this.btnGoHome.TabIndex = 27;
            this.btnGoHome.Text = "Go Home";
            this.btnGoHome.UseVisualStyleBackColor = false;
            this.btnGoHome.Click += new System.EventHandler(this.btnGoHome_Click);
            // 
            // dataGridView1
            // 
            this.dataGridView1.AllowUserToAddRows = false;
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Location = new System.Drawing.Point(12, 103);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.ReadOnly = true;
            this.dataGridView1.Size = new System.Drawing.Size(562, 196);
            this.dataGridView1.TabIndex = 32;
            this.dataGridView1.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dataGridView1_CellContentClick);
            // 
            // lblClaimID
            // 
            this.lblClaimID.AutoSize = true;
            this.lblClaimID.Location = new System.Drawing.Point(583, 117);
            this.lblClaimID.Name = "lblClaimID";
            this.lblClaimID.Size = new System.Drawing.Size(49, 13);
            this.lblClaimID.TabIndex = 33;
            this.lblClaimID.Text = "Claim ID:";
            // 
            // lblContent
            // 
            this.lblContent.AutoSize = true;
            this.lblContent.Location = new System.Drawing.Point(585, 144);
            this.lblContent.Name = "lblContent";
            this.lblContent.Size = new System.Drawing.Size(47, 13);
            this.lblContent.TabIndex = 34;
            this.lblContent.Text = "Content:";
            // 
            // txtClaimID
            // 
            this.txtClaimID.Location = new System.Drawing.Point(638, 117);
            this.txtClaimID.Name = "txtClaimID";
            this.txtClaimID.Size = new System.Drawing.Size(150, 20);
            this.txtClaimID.TabIndex = 35;
            // 
            // txtContent
            // 
            this.txtContent.Location = new System.Drawing.Point(638, 144);
            this.txtContent.Multiline = true;
            this.txtContent.Name = "txtContent";
            this.txtContent.Size = new System.Drawing.Size(150, 109);
            this.txtContent.TabIndex = 36;
            // 
            // openFileDialog1
            // 
            this.openFileDialog1.FileName = "openFileDialog1";
            // 
            // frmViewClaims
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.txtContent);
            this.Controls.Add(this.txtClaimID);
            this.Controls.Add(this.lblContent);
            this.Controls.Add(this.lblClaimID);
            this.Controls.Add(this.dataGridView1);
            this.Controls.Add(this.btnGoHome);
            this.Controls.Add(this.btnExit);
            this.Controls.Add(this.btnUploadDocs);
            this.Controls.Add(this.btnDwnloadReport);
            this.Controls.Add(this.lblYourClaims);
            this.Controls.Add(this.lblLogoClaim);
            this.Name = "frmViewClaims";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "My Claims View";
            this.Load += new System.EventHandler(this.ViewMyClaims_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lblLogoClaim;
        private System.Windows.Forms.Label lblYourClaims;
        private System.Windows.Forms.Button btnDwnloadReport;
        private System.Windows.Forms.Button btnUploadDocs;
        private System.Windows.Forms.Button btnExit;
        private System.Windows.Forms.Button btnGoHome;
        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.Label lblClaimID;
        private System.Windows.Forms.Label lblContent;
        private System.Windows.Forms.TextBox txtClaimID;
        private System.Windows.Forms.TextBox txtContent;
        private System.Windows.Forms.OpenFileDialog openFileDialog1;
    }
}