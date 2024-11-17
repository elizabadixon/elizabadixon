using iTextSharp.text;
using iTextSharp.text.pdf;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Collections.Specialized.BitVector32;
using System.Data.SqlClient;
using System.Configuration;


namespace HipHipWindowsForm
{
    public partial class frmViewClaims : Form
    {
        frmWelcome welcome;
        LoginForm frmLogin;
        Session frmSession;
        Database myDatabase;

        public frmViewClaims(frmWelcome welcomeForm, Session session)
        {
            InitializeComponent();
            welcome = welcomeForm;
            frmSession = session;
            myDatabase = new Database();

            try
            {
                string queryString = "SELECT Claim.ClaimID, Claim.Claim_Status, Claim.Content, Claim.Value, Claim.Date_Filed " +
                         "FROM Claim " +
                         "JOIN Person ON Claim.Owner = Person.User_Number " +
                         "WHERE Person.Username = '" + frmSession.User.Id + "'";


                DataTable dataTable = myDatabase.RetrieveRows(queryString);

                dataGridView1.DataSource = dataTable;

                dataGridView1.Show();
                btnUploadDocs.Hide();
            }
            catch (Exception ex) 
            {
                MessageBox.Show("Error showing contents of form. Please try again. " + ex.Message);
            }
        }

        private void ViewMyClaims_Load(object sender, EventArgs e)
        {

        }

        private void btnExit_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Items that have not finished uploading will not be uploaded.\n\nAre you sure you want to exit this Application?", "\n\nAre you sure you want to exit this Application?", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
                Application.Exit();
            }
        }

        private void btnGoHome_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Items that have not finished uploading will not be uploaded.\n\nAre you sure you want to exit this page?", "\n\nAre you sure you want to exit this page?", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
                this.Hide();

                welcome.Show();
            }

        }

        private void btnDwnloadReport_Click(object sender, EventArgs e)
        {
            if (dataGridView1.Rows.Count > 0)
            {
                SaveFileDialog save = new SaveFileDialog();
                save.Filter = "PDF (*pdf|*.pdf)";
                save.FileName = "Hip_Hip_Claim_File";
                bool ErrorMessage = false;
                if (save.ShowDialog() == DialogResult.OK)
                {
                    if (File.Exists(save.FileName))
                    {
                        try
                        {
                            File.Delete(save.FileName);
                        }
                        catch (Exception ex)
                        {
                            ErrorMessage = true;
                            MessageBox.Show("Unable to write data to disk" + ex.Message);
                        }
                    }
                    if (!ErrorMessage)
                    {
                        try
                        {
                            PdfPTable pdfTable = new PdfPTable(dataGridView1.Columns.Count);
                            pdfTable.DefaultCell.Padding = 3;
                            pdfTable.WidthPercentage = 100;
                            pdfTable.HorizontalAlignment = Element.ALIGN_LEFT;

                            foreach (DataGridViewColumn column in dataGridView1.Columns)
                            {
                                PdfPCell cell = new PdfPCell(new Phrase(column.HeaderText));
                                pdfTable.AddCell(cell);
                            }

                            foreach (DataGridViewRow row in dataGridView1.Rows)
                            {
                                foreach (DataGridViewCell cell in row.Cells)
                                {
                                    pdfTable.AddCell(cell.Value.ToString());
                                }
                            }

                            using (FileStream stream = new FileStream(save.FileName, FileMode.Create))
                            {
                                Document pdfDoc = new Document(PageSize.A4, 10f, 20f, 20f, 10f);
                                PdfWriter.GetInstance(pdfDoc, stream);
                                pdfDoc.Open();
                                pdfDoc.Add(pdfTable);
                                pdfDoc.Close();
                                stream.Close();
                            }
                            MessageBox.Show("Data Exported Successfully", "info");
                        }
                        catch(Exception ex)
                        {
                            MessageBox.Show("Error while exporting Data. " + ex.Message);
                        }
                    }
                }
            }
            else
            {
                MessageBox.Show("No Record Found", "Info");
            }
        }


        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            try
            {
                DataGridViewRow row = this.dataGridView1.Rows[e.RowIndex];
                txtClaimID.Text = row.Cells["ClaimID"].Value.ToString();
                txtContent.Text = row.Cells["Content"].Value.ToString();
                btnUploadDocs.Show();
            }
            catch(Exception ex)
            {
                MessageBox.Show("Error loading data grid - please try again later. " + ex.Message);
            }
        }

        /*private void btnUploadDocs_Click(object sender, EventArgs e)
        {
            DialogResult result = openFileDialog1.ShowDialog();
            if(result == DialogResult.OK) 
            {
                string file = openFileDialog1.FileName;
                byte[] buffer = File.ReadAllBytes(file);
                string convertString = "SELECT CONVERT(VARBINARY(MAX), \'" + buffer + "\',1);";
                myDatabase.NonQuery(convertString);

                //int number = Convert.ToInt32(myDatabase.scalarQuery("SELECT MAX(FileID) FROM Supplemental_File")) + 1;
                int number = 1;
                string queryString = "INSERT INTO Supplemental_File (FileID, FileName, Data, Associated_Claim) VALUES (\'" + number + "\', \'" + file + "\', \'" + buffer + "\', \'" + txtClaimID.Text + "\');";
                try
                {
                    myDatabase.NonQuery(queryString);
                }
                catch(Exception ex ) 
                {
                    MessageBox.Show("Error uploading file. Please try again." + ex.Message);
                }
                
            }
        }*/
        private void btnUploadDocs_Click(object sender, EventArgs e)
        {
            DialogResult result = openFileDialog1.ShowDialog();

            btnUploadDocs.Show();

            if (result == DialogResult.OK)
            {

                try
                {
                    string file = @openFileDialog1.FileName;
                    byte[] buffer = File.ReadAllBytes(file);
                    int number = Convert.ToInt32(myDatabase.scalarQuery("SELECT MAX(FileID) FROM Supplemental_File")) + 1;
                    //int number = 2;

                    string insertQuery = "INSERT INTO Supplemental_File (FileID, FileName, Data, Associated_Claim) VALUES (@FileID, @FileName, @Data, @AssociatedClaim)";

                    SqlParameter[] parameters = new SqlParameter[]
                    {
                        new SqlParameter("@FileID", number),
                        new SqlParameter("@FileName", file),
                        new SqlParameter("@Data", buffer),
                        new SqlParameter("@AssociatedClaim", txtClaimID.Text)
                    };

                    myDatabase.ExecuteNonQuery(insertQuery, parameters);
                    MessageBox.Show("File Successfully Uploaded!");
                }
                catch (Exception ex)
                {
                    MessageBox.Show("Error uploading file. Please try again." + ex.Message);
                }
            }
        }

        private void btnBack_Click(object sender, EventArgs e)
        {

        }
    }
}

