/*#include <iostream>
using namespace std;

class Mail
{
public:
    void Accept(string email, string password)
    {
        cout << "Information entered by the user : ";
        cout << "\nEmail : " << email << "\nPassword : " << password;

        email = "abc@gmail.com";
        password = "123";
    }
};
int main()
{
    Mail obj;
    string email_1, password_1;
    cout << "\nEnter your email : ";
    cin >> email_1;
    cout << "Enter your password : ";
    cin >> password_1;
    obj.Accept(email_1, password_1);
    return 0;
}
*/

//Write a program to create a class with function name Login() and Display_Info, Login() function will accept Pin(Default value 123) from user as parameter and display_Info() function will accept Name, RegNo, Marks, percentage and Grade from user as Parameter and display all information eneterd by user on screen with welcome message.

#include <iostream>
using namespace std;

class Stud {
    private:
        int pin;

    public:
        void welcome() {
            cout << "Welcome to ATM.";
        }

        bool Accept() {
            cout << "\nEnter Your Pin: ";
            cin >> pin;
            return (pin == 123);
        }

        void Display_Info(string Name,string RegNo,int Marks,int percentage,string grade) {
        cout << "\nName : " << Name << "\nRegNo : " << RegNo << "\nMarks : " << Marks << "\nPercentage : " << percentage << "\nGrade : " << grade;
        }
};

int main() {
    Stud obj;
    obj.welcome();
    if (obj.Accept()) {
        cout << "\nLogin Successful";
        string Name;string RegNo;int Marks;int percentage;string grade;
        cout << "\nYour Name is: ";
            cin >> Name;
            cout << "\nYour RegNo is: ";
            cin >> RegNo;
            cout << "\nYour Marks is: ";
            cin >> Marks;
            cout << "\nYour Percentage is: ";
            cin >> percentage;
            cout << "\nYour Grade is: ";
            cin >> grade;
            obj.Display_Info(Name,RegNo,Marks,percentage,grade);
    } else {
        cout << "\nInvalid Pin. Access Denied!";
    }
    return 0;
}
