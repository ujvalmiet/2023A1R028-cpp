/*
#include <iostream>
using namespace std;
class Program{
    public:
    Program()
{
    cout << "AYYYYYY CHICHAAAAAAA Constructor Bolteeeeeeee.....";
}
};
int main (){
    Program();
    return 0;
}
*/
#include <iostream>
using namespace std;
class Program {
    public:
    int a, b, c;
    public:
    Program(string Name, int PIN){
        cout << "My name is = " << Name;
        cout << "\nMy PIN is = " << PIN;
    }
    public:
    ~Program(){
        cout << "\nDestructor bhi bolteeee.... ";
    }
    public:
    void pro(){
        cout << "\nEnter the value of a : ";
        cin >> a;
        cout << "\nEnter the value of b : ";
        cin >> b;
        c = a+b;
        cout << "The sum is : " << c;
    }
};
int main(){
    Program obj("Ujval", 9988);
    obj.pro();
    return 0;
}