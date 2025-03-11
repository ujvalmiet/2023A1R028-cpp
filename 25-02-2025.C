/*Program to demonstrate implementation of array using direct initilization method
#include <iostream>
using namespace std;
class Program{
    private:
    int adv[5] = {1,2,3,4,5}; //Declaration and Direct Initlization
    int weak[5] = {7,6,55,88,9};
    int i;
    public:
    void Display()
    {
        cout << "List of Advance Learners : ";
        for(i=0; i<5; i++){
            cout << adv[i] << " " ;
        }
        cout << "\nList of weak Learners : ";
        for(i=0; i<5; i++){
            cout << weak[i] << " " ;
        }
    }

};
int main(){
    Program obj;
    obj.Display();
    return 0;
}

// Program to demonstrate workng of array of object
#include <iostream>
using namespace std;
class Book_Record{
    private:
    int Book_no;
    string Book_Name;
    public:
    Book_Record(int B, string N) //Parameterized class
    {
        Book_no =B;
        Book_Name =N;
    }
    public:
    void Display(){
        cout << "\nBook Number is = " << Book_no << "\tBook name is = " << Book_Name;
    }
};
int main(){

Book_Record obj[5] = {{1,"CPP"},{2,"Java"},{3,"C"},{4,"C#"},{5,"PHP"}};
int i;
for(i=0;i<5;i++){
    obj[i].Display();

}
return 0;
}
*/
// Program to create a class Student_Management_System, stores students information(Name,Registration Number,Mobile Number) 
// of 10 students display records using Array of objects 
#include <iostream>
using namespace std;
class Student_Management_System {
    private:
    string Stu_Name;
    int RegNo;
    long long int M_no;
    public:
    Student_Management_System(string a, int  b, long long int c){
        Stu_Name = a;
        RegNo = b;
        M_no = c;
    }
    public:
    void Display(){
        cout << "\nStudent name = " << Stu_Name << "\nRegistration number = " << RegNo << "\nMobile number = " << M_no << "\n";
    }
};
int main (){
    Student_Management_System obj[5] = {{"Ujval",101,8899748793},{"Simriti",102,9775697177},{"Ridhi",103,8845322573},{"Nipun",104,9561433466},{"Harman",105,9861249057}};
    int i;
    for (i=0;i<5;i++){
        obj[i].Display();
    } 
    return 0;
}