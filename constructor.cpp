#include <iostream>
#include <string>
using namespace std;

class Teacher
{
    private:
    double salary;

    public:
    //non-parameterized 
    Teacher() {
        deptt = "Computer Science";
    }
    //parameterized 
    Teacher(string n, string d, string s, double sal){
        name = n;
        deptt = d;
        subject = s;
        salary = sal;

    }

    public:
    string name;
    string deptt;
    string subject;


    void change_deptt(string NewDeptt){
        deptt = NewDeptt;
    }

    //setter
    void setSalary(double s) {
        salary = s;

    }
    //getter
    double getSalary() {
        return salary;
    }
    void getInfo(){
        cout << "name :" << name << endl;
        cout << "Subject :" << subject << endl;
    }

};
int main(){
    Teacher t1("Ujval", "CSE", "Oops", 10000);

    t1.getInfo();
    return 0;
}