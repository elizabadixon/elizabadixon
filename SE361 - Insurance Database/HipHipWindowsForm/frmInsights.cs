using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HipHipWindowsForm
{
    public partial class frmInsights : Form
    {
        Database myDatabase;
        frmWelcome welcome;
        LoginForm frmLogin;
        Session frmSession;
        public frmInsights(frmWelcome welcomeForm, Session Session)
        {
            welcome = welcomeForm;
            frmSession = Session;
            myDatabase = new Database();
            InitializeComponent();
            try
            {
                SqlParameter[] parameters = new SqlParameter[]
                    {
                        
                    };
                
                string totClaims = "SELECT COUNT(*) FROM Claim;";
                txtNumTotal.Text = "" + myDatabase.scarQuery(totClaims, parameters) + "";
                string apprClaim = "SELECT COUNT(*) FROM Claim WHERE Claim_Status = 'APPROVED';;";
                txtNumAppr.Text = "" + myDatabase.scarQuery(apprClaim, parameters) + "";
                string denClaims = "SELECT COUNT(*) FROM Claim WHERE Claim_Status = 'DENIED';;";
                txtNumDenied.Text = "" + myDatabase.scarQuery(denClaims, parameters) + "";
                string penClaims = "SELECT COUNT(*) FROM Claim WHERE Claim_Status = 'PENDING';;";
                txtNumPending.Text = "" + myDatabase.scarQuery(penClaims, parameters) + "";
                string paidClaims = "SELECT COUNT(*) FROM Claim WHERE Claim_Status = 'PAID';;";
                txtNumPaid.Text = "" + myDatabase.scarQuery(paidClaims, parameters) + "";
                string claimAvg = "SELECT AVG(Value) FROM Claim WHERE Claim_Status = 'PAID';";
                txtAvg.Text = "" + myDatabase.scarQuery(claimAvg, parameters) + "";
                string totPaid = "SELECT SUM(Value) FROM Claim WHERE Claim_Status = 'PAID';";
                txtTotal.Text = "" + myDatabase.scarQuery(totPaid, parameters) + "";
            }
            catch(Exception ex) 
            { MessageBox.Show(ex.Message); }
        }

        private void frmInsights_Load(object sender, EventArgs e)
        {

        }

        private void btnExit_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Are you sure you want to exit this Application?", "\n\nAre you sure you want to exit this Application?", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
                Application.Exit();
            }
        }

        private void btnBack_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Are you sure you want to exit this page?", "\n\nAre you sure you want to exit this page?", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
                this.Hide();
                welcome.Show();
            }
        }
    }
}
