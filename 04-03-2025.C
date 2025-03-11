// method 1 call by value (passing object as argument)
/*#include <iostream>
using namespace std;
class Program{
    public:
    int a;
    Program(int b){
        a=b;
    }
    void Display(){
        cout << "\nValue of a is " << a;
    }
};
void modify(Program obj2)//obj2 is used as parameter to modify function(any change inside this function will not 
                        //modify original object)
{
    obj2.a=20;
    obj2.Display();//Any change made by object2 will no affect the object 1 value

}
int main(){
    Program obj1(10);
    obj1.Display();
    modify(obj1);
    return 0;
}
*/
//Example to understand working of Passing Object as argument to function using call by value method.
//Write a program to create a class name BillingApp, with attributes like Product Name, Price, implement a function
//Discount() that calculate 10% discount on Price and display result.
//Discount Function will not modify original price of the product.
#include <iostream>
using namespace std;
class BillingName{
    public:
    string ProductName;
    float Price;
    BillingName(string a, float  b){
        ProductName = a;
        Price = b;

    }
    void Display(){
        cout << "\nName of the Product = " << ProductName << "\nPrice of the product = " << Price;
    }
   
};
void Discount(BillingName obj2){
    obj2.Price = obj2.Price-obj2.Price/10;
    cout << "\nAfter discount \n";
    obj2.Display();

}
int main(){
    string a;
    float b;
    cout << "Enter the name of the product = ";
    cin >> a;
    cout << "\nPrice of the product = ";
    cin >> b;
    BillingName obj1(a,b);
    obj1.Display();
    Discount(obj1);
    return 0;
}