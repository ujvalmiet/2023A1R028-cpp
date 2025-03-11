// Program to demonstrate working of passing object as parameter to function using different methods 
#include <iostream>
using namespace std;
class Program{
    public:
    int a = 10;
    void Display(){
        cout << "\nValue of a is : " << a;

    }
};
void method1(Program &obj1){
    obj1.a = 20;
    cout << "\nValue of a in method1 : " << obj1.a;
}
void method2(Program &obj){
    obj.a = 30;
    cout << "\nValue of a in method1 : " << obj.a;
}
void method3(Program *obj){
    obj->a = 40;
    cout << "\nValue of a in method1 : " << obj->a;
}
void method4(Program obj2){
    //obj2.a = 20; // this will generate error
    cout << "\nValue of a in method1 : " << obj2.a;
}
int main(){
    Program obj;
    obj.Display();
    method1(obj);
    method2(obj);
    method3(&obj);
    method4(obj);
}