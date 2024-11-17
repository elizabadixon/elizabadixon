using System;
using Microsoft.Data.SqlClient;
using System.Text;
using System.Reflection;
using System.Net.NetworkInformation;

namespace sqltest
{
    class DatabaseConnection
    {
        public static void Main()
        {
            SqlConnection connection;
          
            string connectionString = @"Data Source=hiphip.database.windows.net;Initial Catalog=hiphip;User ID=hiphipgroup;Password=AleaDavisElizabethJack361";
            
            connection = new SqlConnection(connectionString);
            Connect(connection);
        }

        private static void Connect(SqlConnection connection)
        {
            connection.Open();

            Console.WriteLine("Connection Open!");

            connection.Close();

            Console.WriteLine("Connection Closed!");
        }

        /* private static void Select(SqlConnection connection, string tableName)
         {


             string queryString = "SELECT * FROM " + tableName;

             SqlCommand command = new SqlCommand(queryString, connection);   

             connection.Open();
             SqlDataReader reader = command.ExecuteReader();

             try
             {
                 while (reader.Read()) 
                 {
                     Console.WriteLine("{0} {1}", reader.GetString(0), reader.GetString(1));
                 }
             }
             finally
             {
                 reader.Close(); 
             }

             connection.Close();
         }

         private static void Insert(SqlConnection connection, string tableName)
         {
             String query = "INSERT INTO " + tableName + "(username,password) VALUES(@username,@password)"; 

             using (SqlCommand command = new SqlCommand(query, connection))
             {
                 command.Parameters.AddWithValue("@username", "Chicken");
                 command.Parameters.AddWithValue("@passsword", "@egg");

                 connection.Open();

                 int result = 0;

                 try
                 {
                     result = command.ExecuteNonQuery(); //anything greater than zero means that a successful edit occured
                 }
                 catch(Exception ex)
                 {
                     Console.WriteLine(ex.ToString());
                 }

                 if(result <= 0)
                 {
                     Console.WriteLine("error inserting into database.");
                 }
                 else
                 {
                     Console.WriteLine(result + "row(s) inserted");
                 }
                 connection.Close();

             }
         }

         private static void Update(SqlConnection connection, string tableName)
         {
             String query = "UPDATE " + tableName + " SET username = 'Butler' password = 'Bulldogs' WHERE username = 'Chicken' AND password = 'egg'";

             using (SqlCommand command = new SqlCommand(query, connection))
             {
                 command.Parameters.AddWithValue("@username", "Chicken");
                 command.Parameters.AddWithValue("@passsword", "@egg");

                 connection.Open();

                 int result = 0;

                 try
                 {
                     result = command.ExecuteNonQuery(); //anything greater than zero means that a successful edit occured
                 }
                 catch (Exception ex)
                 {
                     Console.WriteLine(ex.ToString());
                 }

                 if (result <= 0)
                 {
                     Console.WriteLine("error updating data into database.");
                 }
                 else
                 {
                     Console.WriteLine(result + "row(s) updated");
                 }
                 connection.Close();

             }
         }
         private static void Delete(SqlConnection connection, string tableName)
         {
             String query = "DELETE FROM " + tableName + " WHERE username = 'Butler' AND password = 'Bulldogs' ";

             using (SqlCommand command = new SqlCommand(query, connection))
             {
                 command.Parameters.AddWithValue("@username", "Chicken");
                 command.Parameters.AddWithValue("@passsword", "@egg");

                 connection.Open();

                 int result = 0;

                 try
                 {
                     result = command.ExecuteNonQuery(); //anything greater than zero means that a successful edit occured
                 }
                 catch (Exception ex)
                 {
                     Console.WriteLine(ex.ToString());
                 }

                 if (result <= 0)
                 {
                     Console.WriteLine("error inserting into database.");
                 }
                 else
                 {
                     Console.WriteLine(result + "row(s) inserted");
                 }
                 connection.Close();

             }
         }
        */
    }




}