/*Write a program to create two classes,
1. Class Login_Details,
with functions as:-
a. Validate() accept login password(default 1234) from user
b. Display(): Display message on screen "Welcome to MyApp"

2. Class User_Profile
with function as:
a. Accept () accept username, email id and name from user
b. Display() will display infromation enetered by the user on screen
*/

#include <iostream>
using namespace std;

class Login_Details{
    private:
        int pin;

    public:
        void Display() {
            cout << "Welcome to MyApp.";
        }

        bool Validate() {
            cout << "\nEnter Your Pin: ";
            cin >> pin;
            return (pin == 1234);
        }
};
class User_Profile{
    private:
    string Email;
    string Password;
    public:
    void Accept(){
        cout << "Enter the Email : ";
        cin >> Email;
        cout << "Enter your password :";
        cin >> Password;
    }
    
    void Display(){
        cout << "Your Email: " <<Email;
        cout <<"\nYour Password: "<< Password;
    }
};
int main(){
    User_Profile obj;
    Login_Details obj1;
    if(obj1.Validate()){
        obj.Accept();
        cout << "Login Success.....\n";
        obj.Display();
    } else{
        cout << "Invalid access...\n";
    }
    
    return 0;
}


