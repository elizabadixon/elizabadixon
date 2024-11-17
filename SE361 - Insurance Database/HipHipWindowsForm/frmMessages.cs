using Org.BouncyCastle.Utilities.Collections;
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
    public partial class frmMessages : Form
    {
        frmWelcome welcome;
   
        LoginForm frmLogin;
        Session frmSession;
        Database myDatabase;

        public frmMessages(frmWelcome welcomeForm, Session session)
        {
            InitializeComponent();
            welcome = welcomeForm;
            frmSession = session;
            myDatabase = new Database();

            try
            {
                string queryString = "SELECT Sender.Username AS Sender, Message.Message FROM Message JOIN Person AS Sender ON Message.Sender = Sender.User_Number JOIN Person AS Receiver ON Message.Receiver = Receiver.User_Number WHERE Receiver.Username = \'" + frmSession.User.Id + "\'";

                DataTable dataTable = myDatabase.RetrieveRows(queryString);

                dataGridView1.DataSource = dataTable;

                dataGridView1.Show();
            }
            catch(Exception ex) 
            {
                MessageBox.Show("Error interacting with form. Please try again later.\n\n" + ex.Message);
            }

        }
        private void btnHome_Click(object sender, EventArgs e)
        {

            if (MessageBox.Show("If you have started writing a message but not clicked send, your draft will not be saved.\n\nAre you sure you want to exit this page?", "\n\nAre you sure you want to exit this page?", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
                this.Hide();
                welcome.Show();
            }

        }

        private void btnExit_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("If you have started writing a message but not clicked send, your draft will not be saved.\n\nAre you sure you want to exit this Application?", "\n\nAre you sure you want to exit this Application?", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
                Application.Exit();
            }
        }

        private void btnBack_Click(object sender, EventArgs e)
        {

            if (MessageBox.Show("If you have started writing a message but not clicked send, your draft will not be saved.\n\nAre you sure you want to exit this page?", "\n\nAre you sure you want to exit this page?", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
                this.Hide();
                welcome.Show();
            }

        }

        private void frmMessages_Load(object sender, EventArgs e)
        {

        }

        //private void btnAdminMsgs_Click(object sender, EventArgs e)
        //{

        //}

        private void timer1_Tick(object sender, EventArgs e)
        {
            lblCharCount.Text = "" + txtMessage.Text.Length + "";
        }

        private void btnSend_Click(object sender, EventArgs e)
        {
            
            try
            {
                int recNum = frmSession[txtRecipient.Text];
                DateTime dateTime = DateTime.Now;
                string MessageID = $"{frmSession.User.UserNumber}{recNum}{dateTime:FFFFFFF}";
                //int MessageID = 1;
                string queryString = "INSERT INTO Message (Sender, Receiver, Message, MessageID) VALUES(\'" + frmSession.User.UserNumber + "\',\'" + recNum + "\',\'" + txtMessage.Text + "\',\'" + MessageID + "\');";
                myDatabase.NonQuery(queryString);
                MessageBox.Show("Message Successfully Sent");
                txtRecipient.Text = string.Empty;
                txtMessage.Text = string.Empty;
            }
            catch(Exception ex) 
            {
                MessageBox.Show("Error sending message. Please check formatting or try again later.\n\n" + ex.Message);
                txtRecipient.Text = string.Empty;
                txtMessage.Text = string.Empty;
            }

           
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            DataGridViewRow row = this.dataGridView1.Rows[e.RowIndex];
            txtMessageContent.Text = row.Cells["Message"].Value.ToString();
            txtSender.Text = row.Cells["Sender"].Value.ToString();
            /*txtClaimID.Text = row.Cells["ClaimID"].Value.ToString();
            txtOwner.Text = row.Cells["Owner"].Value.ToString();
            txtContent.Text = row.Cells["Content"].Value.ToString();
            txtValue.Text = row.Cells["Value"].Value.ToString();*/
        }
    }
}
