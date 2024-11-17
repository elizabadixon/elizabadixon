using System;
using System.Data;
using System.Windows.Forms;

namespace HipHipWindowsForm
{
    public partial class FrmViewProfile : Form
    {
        frmWelcome welcome;
        
        Session frmSession;
        LoginForm frmLogin;
        Database myDatabase;
        

        public FrmViewProfile(frmWelcome welcomeForm, Session session)
        {
            InitializeComponent();
            frmSession = session;
            myDatabase = new Database();
            welcome = welcomeForm;

            try
            {
                string queryString = "SELECT Person.* " +
                        "FROM Person " +
                        "WHERE Person.Username =\'" + frmSession.User.Id + "\';";

                DataTable dataTable = myDatabase.RetrieveRows(queryString);

                dataGridView1.DataSource = dataTable;

                dataGridView1.Hide();
                DataGridViewRow row = this.dataGridView1.Rows[0];
                txtEmail.Text = row.Cells["Email"].Value.ToString();
                txtUsername.Text = row.Cells["Username"].Value.ToString();
            }
            catch(Exception ex) 
            {
                MessageBox.Show("Error interacting with form. Please try again later.\n\n" + ex.Message);
            } 
        }
       
        private void FrmViewProfile_Load(object sender, EventArgs e)
        {

        }

        private void btnConfirm_Click(object sender, EventArgs e)
        {
            try
            {
                string profileUpdate = "UPDATE Person SET Email = \'" + txtEmail.Text + "\' WHERE Username = \'" + frmSession.User.Id + "\';";
                bool result = myDatabase.NonQuery(profileUpdate);
                if (result)
                {
                    MessageBox.Show("Profile updated!");

                }
                else if ((txtUsername.Text == string.Empty) || (txtEmail.Text == string.Empty))
                {
                    MessageBox.Show("Please enter your credentials in all fields.");
                    txtUsername.Text = string.Empty;

                    txtEmail.Text = string.Empty;

                }
            }
            catch(Exception ex)
            {
                MessageBox.Show("Error updating profile. Please check entry formatting or try again later. " + ex.Message);
            }
        }

        private void btnGoHome_Click(object sender, EventArgs e)
        {

            if (MessageBox.Show("If you have altered your credentials but not clicked update, your edits will not be saved.\n\nAre you sure you want to exit this page?", "\n\nAre you sure you want to exit this page?", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
                this.Hide();
                welcome.Show();
            }

        }

        private void btnExit_Click(object sender, EventArgs e)
        {
            
            if (MessageBox.Show("If you have altered your credentials but not clicked update, your edits will not be saved.\n\nAre you sure you want to exit this Application?", "\n\nAre you sure you want to exit this Application?", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
                Application.Exit();
            }

        }

        private void txtEmail_TextChanged(object sender, EventArgs e)
        {

        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {

        }

        private void btnUpdatePass_Click(object sender, EventArgs e)
        {

            if(txtOldPass.Text == frmSession.User.Password && txtNewPass.Text != "")
            {
                string profileUpdate = "UPDATE Person SET Password = \'" + txtNewPass.Text + "\' WHERE Username = \'" + frmSession.User.Id + "\';";
                try
                {
                    bool result = myDatabase.NonQuery(profileUpdate);
                    if (result)
                    {
                        MessageBox.Show("Profile updated!");
                    }
                    
                }
                catch(Exception ex)
                {
                    MessageBox.Show("There was an error updating your password" + ex.Message);
                }
            }
            else if(txtOldPass.Text == frmSession.User.Password && txtNewPass.Text == "")
            {
                MessageBox.Show("Please enter your new password and try again");
            }
            else if(txtOldPass.Text != frmSession.User.Password && txtNewPass.Text != "")
            {
                MessageBox.Show("Please ensure that your existing Password is entered correctly!");
            }
            else if(txtOldPass.Text != frmSession.User.Password && txtNewPass.Text == "")
            {
                MessageBox.Show("Please ensure that your existing Password is entered correctly and that you have entered a new Password!");
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
