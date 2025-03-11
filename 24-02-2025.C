/*Write a program to print the rectangle by creating a class named 'Area' having one function. 
Length and Breadth of the rectangle using parameterized constructor 
#include <iostream>
using namespace std;
class Area{
    public:
    Area(float length, float breadth){
        float area = length * breadth;
        cout << "\nArea of the rectangle is = " << area;
    }
};
int main(){
    float l,b;
    cout << "Enter the length = "; 
    cin >> l;
    cout << "Enter the breadth = ";
    cin >> b;
    Area obj(l,b);
    return 0;

}

#include <iostream>
using namespace std;
class Calculation{
    public:
    int number1, number2;
    Calculation(int num1, int num2){
        number1 =num1;
        number2 =num2;
        int add = number1+number2;
        int sub = number1-number2;
        int product = number1*number2;
        int division = number1/number2;

        cout << "Addition = " << add << "\nSubtraction = " << sub << "\nProduct = " << product << "\nDivision = " << division;

    }
};
int main (){
    int num1,num2;
    cout << "Enter the value of num1 = ";
    cin >> num1;
    cout << "Enter the value of num2 = ";
    cin >> num2;
    Calculation obj(num1,num2);
}

#include <iostream>
using namespace std;
class Volume{
    public:
    Volume(int l){
        int volume = l*l*l;
        cout << "The volume of cube is = " << volume;
    }
};
int main (){
    int l;
    cout << "Enter the value of l = ";
    cin >> l;
    Volume obj(l);
    return 0;
}
// Total area of cuboid
#include <iostream>
using namespace std;
class Area_Cuboid{
    public:
    Area_Cuboid(int l, int b, int h){
        int area = 2*((l*b) + (b*h) + (h*l));
        cout << "The volume of cube is = " << area;
    }
};
int main (){
    int l,b,h;
    cout << "Enter the value of l = ";
    cin >> l;
    cout << "Enter the value of b = ";
    cin >> b;
    cout << "Enter the value of h = ";
    cin >> h;
    Area_Cuboid obj(l,b,h);
}
    */
   #include <iostream>
   using namespace std;
   class ATM_App
   {
    private: int AccNo;
    float Balance;
   public: void Deposit()
   {
    float prebalance = 15000.00,deposit,newbalance;
   cout<<"Previous Balance: 15000.95";
   cout<<"\nEnter amount to deposit: ";
   cin>>deposit;
   newbalance = prebalance + deposit;
   cout<<"\nNew balance is: "<<newbalance;
}
   };
   int main()
   {
    int AccNo,c;
   cout<<"Enter account number: ";
   cin>>AccNo;
   if(AccNo == 4293)
   {
    cout<<"Welcome to my ATM";
   cout<<"\nSelect one from choice: \n1.Deposit \n2.Withdraw \n3.Balance \n4.Exit\n" ;
   cin>>c;
}
   else
   {
    cout<<"Invalid account number";
}
   if(c==1)
   {
    ATM_App obj;
   obj.Deposit();
}
   }