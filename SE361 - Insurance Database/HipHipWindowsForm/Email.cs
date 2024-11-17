using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Net;
using System.Net.Mail;
using System.Windows.Forms;
using System.Runtime.CompilerServices;

namespace HipHipWindowsForm
{
    public class Email
    {
        Database myDatabase;
            public void sendMail(string receiver)
        {
            myDatabase = new Database();
            Random rand = new Random();

            int randomNumber = rand.Next(10000000, 99999999);
            string queryString = "UPDATE Person SET Password = '" + randomNumber + "' WHERE Email = '" + receiver + "';";

            myDatabase.NonQuery(queryString);

            string message = "Our records show that you recently indicated that you have forgotten your login credentials. Your new password is" + randomNumber +". If you did not request this, please contact your administrator at once." ;

            string subject = "Forgotten Login Credentials for Hip, Hip Insurance";

            string sender = "hiphipinsurance@gmail.com";

            string password = "xffk jtue bemb odzp";



            SmtpClient emailClient = new SmtpClient("smtp.gmail.com");

            emailClient.Credentials = new NetworkCredential(sender, password);
            emailClient.Port = 587;
            emailClient.EnableSsl = true;

            emailClient.Send(sender, receiver, subject, message);

        }
    }
}
