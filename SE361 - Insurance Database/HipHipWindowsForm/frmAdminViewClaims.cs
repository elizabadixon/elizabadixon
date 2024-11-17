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
    public partial class frmAdminViewClaims : Form
    {
        frmWelcome welcome;
        Session frmSession;
        Database myDatabase;
        frmPDFView PDFView;

        public frmAdminViewClaims(frmWelcome welcomeForm, Session Session)
        {
            InitializeComponent();
            welcome = welcomeForm;
            frmSession = Session;
            myDatabase = new Database();
            dataGridView1.Hide();
            btnPay.Hide();
            lblPending.Hide();
            lblViewApproved.Hide();
            if(Session.User.UserType == "Finance Manager")
            {
                btnPay.Show();
                lblViewApproved.Show();
            }
            if(Session.User.UserType == "Claim Manager")
            {
                pendingclaimload();
                lblPending.Show();
            }
        }

        private void monthCalendar1_DateChanged(object sender, DateRangeEventArgs e)
        {

        }


        private void btnBack_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("If you have entered information to be updated but not clicked update, your entries will not be saved.\n\nAre you sure you want to exit this page?", "\n\nAre you sure you want to exit this page?", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
                this.Hide();
                welcome.Show();
            }
        }

        private void txtUsername_TextChanged(object sender, EventArgs e)
        {


            /*int.TryParse(txtUsername.Text, out int seritem);
            BindingSource bs = new BindingSource();
            bs.DataSource = dataGridView1.DataSource;
            bs.Filter = "Owner = " + seritem;
            dataGridView1.DataSource = bs.DataSource;
            dataGridView1.Show();*/
        }

        private void Cal1_DateChanged(object sender, DateRangeEventArgs e)
        {

        }

        private void frmAdminViewClaims_Load(object sender, EventArgs e) 
        {
            
        }

        private void btnGoHome_Click(object sender, EventArgs e)
        {
            
            if (MessageBox.Show("If you have entered information to be updated but not clicked update, your entries will not be saved.\n\nAre you sure you want to exit this page?", "\n\nAre you sure you want to exit this page?", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
                this.Hide();
                welcome.Show();
            }

        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            txtOwner.Text = dataGridView1.CurrentRow.Cells[1].Value.ToString();
            txtClaimID.Text = dataGridView1.CurrentRow.Cells[0].Value.ToString();
            txtContent.Text = dataGridView1.CurrentRow.Cells[4].Value.ToString();
            txtValue.Text = dataGridView1.CurrentRow.Cells[5].Value.ToString();
        }

        private void dataGridView1_CellContentClick_1(object sender, DataGridViewCellEventArgs e)
        {
            DataGridViewRow row = this.dataGridView1.Rows[e.RowIndex];
            txtClaimID.Text = row.Cells["ClaimID"].Value.ToString();
            txtOwner.Text = row.Cells["Owner"].Value.ToString();
            txtContent.Text = row.Cells["Content"].Value.ToString();
            txtValue.Text = row.Cells["Value"].Value.ToString();
        }

  

        private void btnSearch_Click_1(object sender, EventArgs e)
        {
            try
            {
                string queryString = "SELECT Claim.* " +
                    "FROM Claim " +
                    "JOIN Person ON Claim.Owner = Person.User_Number " +
                    "WHERE Person.Username =\'" + txtUsername.Text + "\';";

                DataTable dataTable = myDatabase.RetrieveRows(queryString);

                dataGridView1.DataSource = dataTable;

                dataGridView1.Show();
            }
            catch(Exception ex) 
            {
                MessageBox.Show("Error searching for data. Please try again later. " + ex.Message);
            }
           
        }

        private void btnUpdate_Click_1(object sender, EventArgs e)
        {
            
            
            try
            {
                string newSelection = lstStatusOptions.GetItemText(lstStatusOptions.SelectedItem);
                int value;
                bool parsingSuccessful = int.TryParse(txtValue.Text, out value);
                //string queryString = "UPDATE Claim SET Claim_Status = \'" + newSelection + "\' Value = \'" + value + "\' WHERE ClaimID = \'" + lblClaimID.Text +  "\';";
                string queryString = "UPDATE Claim SET Claim_Status = '" + newSelection + "', Value = " + value + " WHERE ClaimID = '" + txtClaimID.Text + "'";

                myDatabase.NonQuery(queryString);
                DateTime dateTime = DateTime.Now;
                string MessageID = $"{frmSession.User.UserNumber}{txtOwner.Text}{dateTime:FFFFFFF}";
                string message = "Your claim " + txtClaimID.Text + "has been " +newSelection;
                string MessageString = "INSERT INTO Message (Sender, Receiver, Message, MessageID) VALUES(\'" + frmSession.User.UserNumber + "\',\'" + txtOwner.Text + "\',\'" + message + "\',\'" + MessageID + "\');";
                myDatabase.NonQuery(MessageString);
                MessageBox.Show("Successfully Updated Claim");
            }
            catch (Exception ex)
            {
                MessageBox.Show("Error updating claim" + ex.Message);
            }

        }

        private void frmAdminViewClaims_Load_1(object sender, EventArgs e)
        {

        }

        private void btnGoHome_Click_1(object sender, EventArgs e)
        {
            if (MessageBox.Show("If you have entered information to be updated but not clicked update, your entries will not be saved.\n\nAre you sure you want to exit this page?", "\n\nAre you sure you want to exit this page?", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
                this.Hide();
                welcome.Show();
            }
        }

        private void btnExit_Click(object sender, EventArgs e)
        {

            if (MessageBox.Show("If you have entered information to be updated but not clicked update, your entries will not be saved.\n\nAre you sure you want to exit this Application?", "\n\nAre you sure you want to exit this Application?", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
               Application.Exit();
            }

        }

        private void lblViewApproved_Click(object sender, EventArgs e)
        {
            try
            {
                string queryString = "SELECT * FROM Claim WHERE Claim.Claim_Status = 'APPROVED';";


                DataTable dataTable = myDatabase.RetrieveRows(queryString);

                dataGridView1.DataSource = dataTable;

                dataGridView1.Show();
            }
            catch(Exception ex) 
            {
                MessageBox.Show("Error retrieving approved data. Please try again later. " + ex.Message);
            }
        }

        private void btnPay_Click(object sender, EventArgs e)
        {
            string queryString = "UPDATE Claim SET Claim_Status = 'PAID' WHERE ClaimID = '" + txtClaimID.Text + "'";
            try
            {
                myDatabase.NonQuery(queryString);
                MessageBox.Show("Successfully Paid Claim");
                DateTime dateTime = DateTime.Now;
                string MessageID = $"{frmSession.User.UserNumber}{txtOwner.Text}{dateTime:FFFFFFF}";
                string message = "Your claim " + txtClaimID.Text + "has been paid";
                string MessageString = "INSERT INTO Message (Sender, Receiver, Message, MessageID) VALUES(\'" + frmSession.User.UserNumber + "\',\'" + txtOwner.Text + "\',\'" + message + "\',\'" + MessageID + "\');";
                myDatabase.NonQuery(MessageString);
            }
            catch (Exception ex)
            {
                MessageBox.Show("Error updating claim" + ex.Message);
            }
        }

        private void btnViewFiles_Click(object sender, EventArgs e)
        {
            try
            {
                string query = "SELECT * FROM Supplemental_File WHERE Associated_Claim = '" + txtClaimID.Text + "'";
                PDFView = new frmPDFView(this, frmSession, query);
                this.Hide();
                PDFView.Show();
            }
            catch(Exception ex)
            {
                MessageBox.Show("Error interacting with associated files. Please try again later. " + ex.Message);
            }

        }

        private void btnDateSearch_Click(object sender, EventArgs e)
        {
            try
            {
                string queryString = "SELECT Claim.* " +
                    "FROM Claim " +
                    "WHERE Claim.Date_Filed =\'" + txtDateSearch.Text + "\';";

                DataTable dataTable = myDatabase.RetrieveRows(queryString);

                dataGridView1.DataSource = dataTable;

                dataGridView1.Show();
            }
            catch (Exception ex)
            {
                MessageBox.Show("Error searching for data. Please try again later. " + ex.Message);
            }
        }
        private void pendingclaimload()
        {
            try
            {
                string queryString = "SELECT Claim.* " +
                    "FROM Claim " +
                    "JOIN Person ON Claim.Owner = Person.User_Number " +
                    "WHERE Claim.AssignedCMNumber =\'" + frmSession.User.UserNumber + "\' AND Claim.Claim_Status = 'PENDING';";

                DataTable dataTable = myDatabase.RetrieveRows(queryString);

                dataGridView1.DataSource = dataTable;

                dataGridView1.Show();
            }
            catch (Exception ex)
            {
                MessageBox.Show("Error searching for data. Please try again later. " + ex.Message);
            }
        }

        private void lblPending_Click(object sender, EventArgs e)
        {
            pendingclaimload();
        }
    }
}
