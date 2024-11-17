using Azure.Core;
using Azure;
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
    public partial class frmWelcome : Form
    {
        frmFileClaim claimForm;
        FrmViewProfile viewProfile;
        frmViewClaims viewMyClaims;
        frmMessages viewMessages;
        frmAddUser AddUser;
        frmAdminViewClaims adminViewClaims;
        Session frmSession;
        LoginForm frmLogin;
        frmInsights insights;

        private LoginForm loginForm;
        public frmWelcome(LoginForm frmLogin, Session session)
        { 
            InitializeComponent();
            frmSession = session;
            loginForm = frmLogin;
            
            foreach(Control control in this.Controls)
            {
                if(control is Button)
                {
                    if((string)control.Tag != "All")
                    {
                        control.Hide();
                    }
                    if((string)control.Tag == "Client" && frmSession.User.UserType == "Client")
                    {
                        control.Show();
                    }
                    if((string)control.Tag == "Employee")
                    {
                        if(frmSession.User.UserType == "Claim Manager" || frmSession.User.UserType == "Finance Manager" || frmSession.User.UserType == "Administrator")
                        {
                            control.Show();
                        }
                    }
                    if((string)control.Tag == "Admin" && frmSession.User.UserType == "Administrator")
                    {
                        control.Show();
                    }
                }
            }
        }

        private void WelcomeForm_Load(object sender, EventArgs e)
        {

        }

        private void btnFileAClaim_Click(object sender, EventArgs e)
        {
            claimForm = new frmFileClaim(this, frmSession);

            this.Hide();

            claimForm.Show();
        }

        private void btnViewClaims_Click(object sender, EventArgs e)
        {
            viewMyClaims = new frmViewClaims(this, frmSession);

            this.Hide();

            viewMyClaims.Show();
        }

        private void btnMessages_Click(object sender, EventArgs e)
        {
            viewMessages = new frmMessages(this, frmSession);

            this.Hide();

            viewMessages.Show();
        }

        private void btnProfile_Click(object sender, EventArgs e)
        {
            viewProfile = new FrmViewProfile(this, frmSession);

            this.Hide();

            viewProfile.Show();
        }

        private void lblWelcome_Click(object sender, EventArgs e)
        {
            //could act as a home page button
        }

        private void btnAddUser_Click(object sender, EventArgs e)
        {
            AddUser = new frmAddUser(this, frmSession);
            this.Hide();
            AddUser.Show();
        }
        
        private void btnExit_Click_1(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void btnLogOut_Click(object sender, EventArgs e)
        {
            frmLogin = new LoginForm();
            
            this.Hide();

            frmLogin.Show();
        }

        private void btnViewDatabase_Click(object sender, EventArgs e)
        {
            //a link to the hip hip website
            MessageBox.Show("Directing you to the [Hip, Hip] Insurance Database web page...");
            System.Diagnostics.Process.Start("https://portal.azure.com/#home");
        }

        private void btnEmployeeViewClaims_Click(object sender, EventArgs e)
        {
            adminViewClaims = new frmAdminViewClaims(this, frmSession);
            this.Hide();
            adminViewClaims.Show();
        }

        private void btnInsights_Click(object sender, EventArgs e)
        {
            insights = new frmInsights(this, frmSession);
            this.Hide();
            insights.Show();
        }
    }
}
