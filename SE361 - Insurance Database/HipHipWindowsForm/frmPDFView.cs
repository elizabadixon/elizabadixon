using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HipHipWindowsForm
{
    public partial class frmPDFView : Form
    {
        Session frmSession;
        Database myDatabase;
        frmAdminViewClaims admin;
        public frmPDFView(frmAdminViewClaims myAdminViewClaims, Session session, string query)
        {
            
            InitializeComponent();

            try
            {
                string queryString = query;
                frmSession = session;
                myDatabase = new Database();
                admin = myAdminViewClaims;
                myDatabase.PDF(query, pdfViewer1);
            }
            catch(Exception ex) 
            {
                MessageBox.Show("Error interacting with PDF view. Please try again later. " + ex.Message);
            }

        }

        private void btnBack_Click(object sender, EventArgs e)
        {
            try
            {
                this.Close();
                admin.Show();
            }
            catch(Exception ex) 
            {
                MessageBox.Show("Error interacting with PDF window. Please try again later. " + ex.Message);
            }
        }

        private void frmPDFView_Load(object sender, EventArgs e)
        {

        }
    }
}
