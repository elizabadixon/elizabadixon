using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics.Eventing.Reader;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HipHipWindowsForm
{
    public partial class frmForgPass : Form
    {

        Email email;
        LoginForm frmLogin;


        public frmForgPass()
        {
            InitializeComponent();
            email = new Email();
        }

        private void ForgPass_Load(object sender, EventArgs e)
        {

        }

        private void btnExit_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void btnBack_Click(object sender, EventArgs e)
        {
            frmLogin = new LoginForm();
            this.Hide();
            frmLogin.Show();
        }

        private void btnClaimSubmit_Click(object sender, EventArgs e)
        {
            try
            {
                email.sendMail(txtEnterEmail.Text);
                MessageBox.Show("Email sent!");
            }
            catch (Exception ex)
            {
                MessageBox.Show("Unable to send confirmation email. Please ensure your entries are correct or try again later.\n\n" + ex.Message);
            }
                
            
            /*if ((txtEnterEmail.Text == string.Empty) || (txtOldPass.Text == string.Empty) || (txtConfOldPass.Text == string.Empty))
            {
                MessageBox.Show("Please enter your credentials in all fields.");
                txtEnterEmail.Text = string.Empty;
                txtOldPass.Text = string.Empty;
                txtConfOldPass.Text = string.Empty;

            }
            else if(txtOldPass.Text != txtConfOldPass.Text)
            {
                MessageBox.Show("Your password entries do not match - please try again.");
                txtOldPass.Text = string.Empty;
                txtConfOldPass.Text = string.Empty;
            }
            //else if() //how to check if not in correct email format to avoid the unhandled exception/automatic form exit?
            else
            {
                email.sendMail(txtEnterEmail.Text);
                MessageBox.Show("Email sent!");
                txtEnterEmail.Text = string.Empty;
                txtOldPass.Text = string.Empty;
                txtConfOldPass.Text = string.Empty;
            }*/

        }

        private void txtEnterEmail_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
