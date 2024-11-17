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
    public partial class LoginForm : Form
    {
        frmWelcome welcomeForm;
        Database myDatabase;
        frmForgPass forgPass;
        Session loginSession;
        public LoginForm()
        {
            InitializeComponent();
            lblUserWarn.Hide();
            lblPassWarn.Hide();
            myDatabase = new Database();
            loginSession = new Session();
        }

        private void lblPassword_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Enter Password");
        }

        private void lblUsername_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Enter Username");
        }

        private void txtUsername_TextChanged(object sender, EventArgs e)
        {

        }

        private void btnClear_Click(object sender, EventArgs e)
        {
            txtUsername.Clear();
            txtPassword.Clear();
            lblUserWarn.Hide();
            lblPassWarn.Hide();
        }

        private void btnLogin_Click(object sender, EventArgs e)
        {
            try
            {
                lblUserWarn.Hide();
                lblPassWarn.Hide();

                string queryString = "SELECT * FROM Person WHERE username = \'" + txtUsername.Text + "\' AND password = \'" + txtPassword.Text + "\';";
                string userString = "SELECT * FROM Person WHERE username = \'" + txtUsername.Text + "\'";
                string passString = "SELECT * FROM Person WHERE password = \'" + txtPassword.Text + "\'";
                bool result = myDatabase.Query(queryString, "SELECT");
                bool passresult = myDatabase.Query(passString, "SELECT");
                bool userresult = myDatabase.Query(userString, "SELECT");

                if (result && (txtUsername.Text != string.Empty) && (txtPassword.Text != string.Empty))
                {

                    loginSession.User.Id = txtUsername.Text;
                    loginSession.User.Password = txtPassword.Text;
                    loginSession.User.UserNumber = Convert.ToInt32(myDatabase.scalarQuery("SELECT User_Number FROM Person WHERE Username = \'" + txtUsername.Text + "\';"));
                    loginSession.User.UserType = Convert.ToString(myDatabase.scalarQuery("SELECT User_Type FROM Person WHERE Username = \'" + txtUsername.Text + "\';"));
                    myDatabase.dictLoad("SELECT Username, User_Number FROM Person", loginSession);
                    txtUsername.Clear();
                    txtPassword.Clear();
                    welcomeForm = new frmWelcome(this, loginSession);
                    this.Hide();
                    welcomeForm.Show();

                    txtPassword.Text = string.Empty;
                    txtUsername.Text = string.Empty;
                    // txtPassword.UseSystemPasswordChar = false;
                    checkShowPass.Checked = false;
                    lblUserWarn.Hide();
                    lblPassWarn.Hide();

                }
                else
                {
                    if ((txtUsername.Text == string.Empty) || (txtPassword.Text == string.Empty))
                    {
                        MessageBox.Show("Please enter your credentials in all fields.");
                        txtUsername.Text = string.Empty;
                        txtPassword.Text = string.Empty;
                        checkShowPass.Checked = false;
                        lblUserWarn.Show();
                        lblPassWarn.Show();
                    }
                    else if (!userresult && !passresult)
                    {
                        MessageBox.Show("Your entries do not exist in our database.");
                        checkShowPass.Checked = false;
                        txtUsername.Text = string.Empty;
                        txtPassword.Text = string.Empty;
                    }
                    else if (!userresult)
                    {
                        MessageBox.Show("Invalid Username");
                        lblUserWarn.Show();
                        checkShowPass.Checked = false;
                        txtUsername.Text = string.Empty;
                        txtPassword.Text = string.Empty;
                    }
                    else if (!passresult)
                    {
                        MessageBox.Show("Invalid Password");
                        lblPassWarn.Show();
                        checkShowPass.Checked = false;
                        txtUsername.Text = string.Empty;
                        txtPassword.Text = string.Empty;
                    }
                    else if (!result) //if user/pass combo isn't right
                    {
                        MessageBox.Show("Invalid username or password entered.");
                        checkShowPass.Checked = false;
                        txtUsername.Text = string.Empty;
                        txtPassword.Text = string.Empty;
                    }
                }
            }
            catch(Exception ex)
            {
                MessageBox.Show("Error logging in. Please try again later.\n\n" + ex.Message);
            }
        }

        private void btnExit_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void txtPassword_TextChanged(object sender, EventArgs e)
        {

        }

        private void linklblForgotUser_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            
        }

        private void linklblForgotPass_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            forgPass = new frmForgPass();

            this.Hide();

            forgPass.Show();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void lblPassWarn_Click(object sender, EventArgs e)
        {

        }

        private void lblUserWarn_Click(object sender, EventArgs e)
        {

        }

        private void checkShowPass_CheckedChanged(object sender, EventArgs e)
        {   
            txtPassword.UseSystemPasswordChar = false;
            txtPassword.PasswordChar = checkShowPass.Checked ? '\0' : '*';
        }
    }
}
