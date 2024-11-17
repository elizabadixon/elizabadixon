namespace HipHipWindowsForm
{
    partial class frmPDFView
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
            this.pdfViewer1 = new ceTe.DynamicPDF.Viewer.PdfViewer();
            this.btnBack = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // pdfViewer1
            // 
            this.pdfViewer1.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(86)))), ((int)(((byte)(86)))), ((int)(((byte)(86)))));
            this.pdfViewer1.FocusBorderColor = System.Drawing.SystemColors.Highlight;
            this.pdfViewer1.FocusBorderWidth = 3;
            this.pdfViewer1.InitialOrientation = null;
            this.pdfViewer1.InitialPage = null;
            this.pdfViewer1.InitialPageMode = null;
            this.pdfViewer1.InitialVisibleNavigationPane = null;
            this.pdfViewer1.InitialZoomMode = null;
            this.pdfViewer1.InitialZoomPercent = null;
            this.pdfViewer1.Location = new System.Drawing.Point(0, 52);
            this.pdfViewer1.MinimumSize = new System.Drawing.Size(200, 150);
            this.pdfViewer1.Name = "pdfViewer1";
            this.pdfViewer1.NavigationPanelWidth = 245;
            this.pdfViewer1.PageColor = System.Drawing.Color.White;
            this.pdfViewer1.RightToLeftText = null;
            this.pdfViewer1.ShowBookmarkIcon = true;
            this.pdfViewer1.ShowHorizontalScrollbar = true;
            this.pdfViewer1.ShowNavigationPanel = true;
            this.pdfViewer1.ShowThumbnailIcon = true;
            this.pdfViewer1.ShowToolbar = true;
            this.pdfViewer1.ShowToolStrip = true;
            this.pdfViewer1.ShowVerticalScrollbar = true;
            this.pdfViewer1.Size = new System.Drawing.Size(800, 765);
            this.pdfViewer1.TabIndex = 0;
            this.pdfViewer1.TextSelectionColor = System.Drawing.Color.Empty;
            this.pdfViewer1.VisibleNavigationPane = ceTe.DynamicPDF.Viewer.NavigationPane.None;
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
            this.btnBack.TabIndex = 37;
            this.btnBack.Text = "Back";
            this.btnBack.UseVisualStyleBackColor = false;
            this.btnBack.Click += new System.EventHandler(this.btnBack_Click);
            // 
            // frmPDFView
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.AutoSize = true;
            this.ClientSize = new System.Drawing.Size(800, 661);
            this.Controls.Add(this.btnBack);
            this.Controls.Add(this.pdfViewer1);
            this.Name = "frmPDFView";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "PDF Viewer";
            this.Load += new System.EventHandler(this.frmPDFView_Load);
            this.ResumeLayout(false);

        }

        #endregion

        private ceTe.DynamicPDF.Viewer.PdfViewer pdfViewer1;
        private System.Windows.Forms.Button btnBack;
    }
}