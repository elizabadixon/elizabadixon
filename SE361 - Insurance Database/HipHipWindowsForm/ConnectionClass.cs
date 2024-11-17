using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace HipHipWindowsForm
{
    static class ConnectionClass
    {
        [STAThread]
        public static void Main()
        {
            //SqlConnection connection;
            //string connectionString = @"Data Source=<<hiphip>>;Initial Catalog=<<hiphip>>;User ID=<<hiphipgroup>>;Password=<<AleaDavisElizabethJack361>>";
            //connection = new SqlConnection(connectionString);

            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new LoginForm());
        }

        private static void Connect(SqlConnection connection)
        {
            connection.Open();
            Console.WriteLine("Connection Open!");
        }



    }
}
