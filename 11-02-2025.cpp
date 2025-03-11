//Program to demonstrate the working of function with no return type and no parameter
/*#include <iostream>
#include <string>
using namespace std;
 class Wish{
    public:
    void message(){
        cout << "Hi!";
    }

 };
 int main(){
    Wish obj;
    obj.message();
    return 0;
 }
 

 //Program to create a class with name product_info and with a function with name welcome_message(), this function//on execution, will display a message on screen, "Welcome to MyStore"

#include <iostream>
using namespace std;

class product_Info{

    public:
    void welcome_message(){
    cout << "Welcome to my Store......";
    }
};
int main(){
    product_Info obj;
    obj.welcome_message();
    return 0;
}
    

#include <iostream>
using namespace std;

class Program{
    private:
    string Name;
    private:
    int RegNo;

    public:
    void Accept(){
        cout << "Enter your Name : ";
        cin >> Name;

        cout << "\nEnter your registration Number : ";
        cin >> RegNo;

        cout << "\nInformation entered by the user is : ";
        cout << "\nName = " << Name << "\nRegistration Number is = "<<RegNo;
    }
};
int main(){
    Program obj;
    obj.Accept();
    return 0;
}
*/

//Write a program to create a class with name MyApp and with functions name, Accept() and display(), Accept() function will accept email and password from user and display() function will display the information entered  by the user on screen
#include <iostream>
using namespace std;
class MyApp{
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
int main (){
    MyApp obj;
    obj.Accept();
    obj.Display();
}