using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.ListView;

namespace HipHipWindowsForm
{
    public partial class frmAddUser : Form
    {
        Database myDatabase;
        frmWelcome welcome;
        LoginForm frmLogin;
        Session frmSession;

        public frmAddUser(frmWelcome welcomeForm, Session session)
        {
            InitializeComponent(); 
            myDatabase = new Database();
            welcome = welcomeForm;
            frmSession = session;
            try
            {
                string queryString = "";
                if (session.User.UserType == "Administrator")
                {
                    queryString = "SELECT Person.Username, Person.Email, Person.User_Type " +
                      "FROM Person";
                    btnCreateUser.Show();
                }
                else
                {
                    queryString = "SELECT Person.Username, Person.Email " +
                      "FROM Person " +
                      "WHERE Person.User_Type = 'Client'";
                    btnCreateUser.Hide();
                }


                DataTable dataTable = myDatabase.RetrieveRows(queryString);

                dataGridView1.DataSource = dataTable;


                //DataGridViewRow row = this.dataGridView1.Rows[0];
                //txtEmail.Text = row.Cells["Email"].Value.ToString();
                //txtUsername.Text = row.Cells["Username"].Value.ToString();
            }
            catch(Exception ex)
            {
                MessageBox.Show("Error interacting with form. Please try again.\n\n" + ex.Message);
            }
        }

        private void txtUsername_TextChanged(object sender, EventArgs e)
        {

        }

        private void AddUser_Load(object sender, EventArgs e)
        {

        }

        private void txtPassword_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void txtEmail_TextChanged(object sender, EventArgs e)
        {

        }

        private void lstUserType_SelectedIndexChanged(object sender, EventArgs e)
        {
            
        }

        private void lblUserType_Click(object sender, EventArgs e)
        {

        }

        private void lblEmail_Click(object sender, EventArgs e)
        {

        }

        private void lblPassword_Click(object sender, EventArgs e)
        {

        }

        private void lblUsername_Click(object sender, EventArgs e)
        {

        }

        private void btnCreateUser_Click(object sender, EventArgs e)
        {
            //if()
            
            try
            {
                string selection = lstUserType.GetItemText(lstUserType.SelectedItem);
                int number = Convert.ToInt32(myDatabase.scalarQuery("SELECT MAX(User_Number) FROM Person")) + 1;
                string queryString = "INSERT INTO Person (User_Number, Username, Password, User_Type, Email) VALUES (\'" + number + "\', \'" + txtUsername.Text + "\', \'" + txtPassword.Text + "\', \'" + selection + "\', \'" + txtEmail.Text + "\');";
                bool result = myDatabase.NonQuery(queryString);
                if (result)
                {
                    MessageBox.Show("User Added Successfully! Exit this page then open again to see new user on the grid.");
                }
                else if ((txtUsername.Text == string.Empty) || (txtPassword.Text == string.Empty) || (txtEmail.Text == string.Empty))
                {
                    MessageBox.Show("Please enter your credentials in all fields.");
                }
                MessageBox.Show("User Added Successfully! Exit this page then open again to see new user on the grid.");
            }
            catch(Exception ex)
            {
                MessageBox.Show("Unable to create user. Please try again. \n\n" + ex.Message);
            }

        }

        private void btnBack_Click(object sender, EventArgs e)
        {
            
            if (MessageBox.Show("If you have entered information but not clicked submit, your entries will not be saved.\n\nAre you sure you want to exit this page?", "\n\nAre you sure you want to exit this page?", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
                this.Hide();
                welcome.Show();
            }

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

        private void listView1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            try
            {
                DataGridViewRow row = this.dataGridView1.Rows[e.RowIndex];
                txtUsername.Text = row.Cells["Username"].Value.ToString();
                txtEmail.Text = row.Cells["Email"].Value.ToString();
                lstUserType.Text = row.Cells["User_Type"].Value.ToString();
            }
            catch(Exception ex) 
            {
                MessageBox.Show("Action denied.\n\n" + ex.Message);
            }
        }
    }
    
}
