using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data.SqlClient;
using System.Collections;
using System.Data;
using ceTe.DynamicPDF.Viewer;
using System.Configuration;

namespace HipHipWindowsForm
{
    public class Database
    {
        private string connectionString_;
        private string tableName_;
        SqlConnection connection_;
        Session frmSession_;
        public Database()
        {
            connectionString_ = @"Data Source=hiphip.database.windows.net;Initial Catalog=hiphip;User ID=hiphipgroup;Password=AleaDavisElizabethJack361";

            connection_ = new SqlConnection(connectionString_);
            connection_.Open();

        }


        public bool Query(string query, string type)
        {
            //string queryString = "SELECT username, password FROM " + tableName_ + " WHERE username = '" + username + "' AND password = '" + password + "';";
            if (type == "SELECT")
            {
                SqlCommand command = new SqlCommand(query, connection_);

                SqlDataReader result = command.ExecuteReader();

                if (result.HasRows)
                {
                    result.Close();
                    return true;
                }

                else
                {
                    result.Close();
                    return false;
                }
            }
            else {
                return false;
            }
        }

        public DataTable RetrieveRows(string query)
        {
            DataTable table = new DataTable();

            using (SqlCommand command = new SqlCommand(query, connection_))
            {
                using (SqlDataReader reader = command.ExecuteReader())
                {

                    table.Load(reader);
                }
            }

            return table;
        }

        public void dictLoad(string query, Session session)
        {
            using (SqlCommand command = new SqlCommand(query, connection_))
            {
                using (SqlDataReader reader = command.ExecuteReader())
                {
                    while (reader.Read())
                    {
                        string username = reader["Username"].ToString();
                        int userNumber = (int)reader["User_Number"];
                        session.userDict_[username] = userNumber;
                    }


                }
            }
        }


        public object scalarQuery(string query)
        {
            SqlCommand command = new SqlCommand(query, connection_);

            object result = command.ExecuteScalar();
            return result;

        }

        public object scarQuery(string query, params SqlParameter[] parameters)
        {
            using (SqlCommand command = new SqlCommand(query, connection_))
            {
                // Add parameters to the command
                command.Parameters.AddRange(parameters);

                // Execute the scalar query
                object result = command.ExecuteScalar();
                return result;
            }
        }

        public bool NonQuery(string query)
        {
            SqlCommand command = new SqlCommand(query, connection_);

            int result = command.ExecuteNonQuery();

            return true;
        }


        public void ExecuteNonQuery(string query, SqlParameter[] parameters)
        {
            using (SqlConnection connection = new SqlConnection(connectionString_))
            {
                using (SqlCommand command = new SqlCommand(query, connection))
                {
                    connection.Open();
                    command.Parameters.AddRange(parameters);
                    command.ExecuteNonQuery();
                }

            }
        }

        public void PDF(string query, PdfViewer pdfView1)
        {
            SqlCommand cmd = new SqlCommand(query, connection_);
            SqlDataAdapter adapter = new SqlDataAdapter(cmd);
            DataTable table = new DataTable();
            adapter.Fill(table);
            if(table.Rows.Count > 0) 
            {
                byte[] ap = (byte[])table.Rows[0]["Data"];
                PdfDocument pdfDocument = new PdfDocument(ap);
                pdfView1.Open(pdfDocument);
            }
        }
        
        


    }


}
