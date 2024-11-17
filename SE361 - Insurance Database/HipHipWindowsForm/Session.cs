using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HipHipWindowsForm
{
    public class Session
    {
        private User user_;
        public Dictionary<string, int> userDict_;

        public Session()
        {
            user_ = new User("", "", "", 0);
            userDict_ = new Dictionary<string, int>();
        }

        public User User
        {
            get { return user_; }
            set { user_ = value; }
        }
        
        //notes:
        //the user shouldn't be able to send a message to themselves
        //i think the message box doesn't allow apostrophes
        public int this[string key] 
        {
            get
            {
                if (userDict_.ContainsKey(key))
                    return userDict_[key];
                else
                    throw new KeyNotFoundException("Key not found in userDict");
            }
            set
            {
                if (userDict_.ContainsKey(key))
                    userDict_[key] = value;
                else
                    userDict_.Add(key, value);
            }
        }
    }
}
