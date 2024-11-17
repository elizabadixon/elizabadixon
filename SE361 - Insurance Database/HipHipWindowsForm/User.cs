using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HipHipWindowsForm
{
    public class User
    {
        private string id_;
        private string password_;
        private string userType_;
        private int userNumber_;

        public User(string id_, string password_, string userType_, int userNumber_)
        {
            this.id_ = id_;
            this.password_ = password_;
            this.userType_ = userType_;
            this.userNumber_ = userNumber_;
        }

        public string Id { get { return id_; } set { id_ = value; } }
        public string Password { get { return password_; } set { password_ = value; } }

        public string UserType { get {  return userType_; } set { userType_ = value; } }

        public int UserNumber { get {  return userNumber_; } set { userNumber_ = value; } }

    }
}
