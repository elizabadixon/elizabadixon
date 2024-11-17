using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IdentityModel.Claims;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HipHipWindowsForm
{
    public partial class frmFileClaim : Form
    {
        frmWelcome welcome;
        Database myDatabase;
        Session frmSession;
        LoginForm frmLogin;

        public frmFileClaim(frmWelcome welcomeForm, Session session)
        {
            InitializeComponent();
            myDatabase = new Database();
            welcome = welcomeForm;
            frmSession = session;
            //welcomeForm = welcomeForm;
        }

        private void Form4_Load(object sender, EventArgs e)
        {

        }

        private void monthCalendar1_DateChanged(object sender, DateRangeEventArgs e)
        {
            
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void btnHome_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("If you have entered information but not clicked submit, your entries will not be saved.\n\nAre you sure you want to exit this page?", "\n\nAre you sure you want to exit this page?", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
                this.Hide();
                welcome.Show();
            }
        }

        private void btnExit_Click(object sender, EventArgs e)
        {
            
            if (MessageBox.Show("If you have entered information but not clicked submit, your entries will not be saved.\n\nAre you sure you want to exit this Application?", "\n\nAre you sure you want to exit this Application?", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
                Application.Exit();
            }

        }

        private void lblInstructions_Click(object sender, EventArgs e)
        {

        }

        private void btnClaimSubmit_Click(object sender, EventArgs e)
        {
            try
            {
                DateTime dateTime = DateTime.Now;
                int cmnum = Convert.ToInt32(myDatabase.scalarQuery("SELECT TOP 1 AssignedCMNumber FROM Claim GROUP BY AssignedCMNumber ORDER BY COUNT(*) ASC;"));
                string claimNumber = $"{frmSession.User.Id}_{dateTime:FFFFFFF}";//this needs to be added into the string 
                string queryString = "INSERT INTO Claim (ClaimID, Owner, AssignedCMNumber, Claim_Status, Content, Value, Date_Filed, #_of_Additional_Files) VALUES(\'" + claimNumber + "\',\'" + frmSession.User.UserNumber + "\',\'" + cmnum + "\',\'PENDING\',\'" + txtClaim.Text + "\', \'0\', \'" + txtDate.Text + "\', \'0\');";
                bool result = myDatabase.NonQuery(queryString);

                if ((txtClaim.Text == string.Empty) || (txtDate.Text == string.Empty))
                {
                    MessageBox.Show("Please fill out all fields.");
                    txtClaim.Text = string.Empty;
                    txtDate.Text = string.Empty;

                }
                else if (result)
                {
                    MessageBox.Show("Claim Submitted. Your claim number is: " +claimNumber);
                    txtClaim.Text = string.Empty;
                    txtDate.Text = string.Empty;

                }
                else if (!result) //exception unhandled when date in incorrect format
                {
                    MessageBox.Show("Unable to Submit Claim at this time");
                    txtClaim.Text = string.Empty;
                    txtDate.Text = string.Empty;
                }
            }
            catch(Exception ex)
            {
                MessageBox.Show("Error submitting claim. Please refer to formatting directions or try again later.\n\n" + ex.Message);
                txtClaim.Text = string.Empty;
                txtDate.Text = string.Empty;
            }
        }

        private void txtClaim_TextChanged(object sender, EventArgs e)
        {

        }

        private void txtDate_TextChanged(object sender, EventArgs e)
        {

        }

        private void lblWhen_Click(object sender, EventArgs e)
        {

        }
    }
}
