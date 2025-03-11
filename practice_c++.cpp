/*#include <iostream>
#include <string>
using namespace std;

    class School{
        public:
        string name;
        int std;

        
    };
    int main(){
        School s1,s2,s3,s4,s5;
        s1.name = "dps";
        s1.std = 10;
        s2.name = "kv";
        s3.name ="aps";
        s4.name ="abc";
        s5.name ="xyz";

        cout << (s1.name),s2.name,s3.name,s4.name,(s5.name) ;
        cout << s2.name,s3.name,s4.name,(s5.name) ;
        cout << s3.name,s4.name,(s5.name) ;
        cout << s4.name,(s5.name) ;
        cout << (s5.name) ;
        return 0;
        
    }
*/
#include <iostream>
using namespace std;
class Login{
    private:
    string pin;
    public:
        bool Validate() {
        cout << "Enter your pin : ";  
        cin >> pin;
        return(pin == "1234");
}
};
class User{
    private:
    string email, password;
    public:
    void user_detail(){
        cout << "Enter your email : ";
        cin >> email;
        cout << "Enter your password : ";
        cin >> password;
    }
    void display(){
        cout << "\nEmail :" << email;
        cout << "\nPassword :" << password;
    }
};
int main(){
    Login obj;
    User obj1;
    if(obj.Validate()){
        cout << "Welcome to MyApp....";
        cout << "\nLogin successful....\n";
        obj1.user_detail();
        obj1.display();
    }else{
        cout << "Invalid access....";
    }
    
    return 0;
}

