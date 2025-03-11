//To add the details of of a student using a parameterized constructer of student class
#include <iostream>
using namespace std;
class Student{
    public:
    string StudentName;
    int StudentId;
    float Marks;
    public:
    Student(string Name, int Id, float Mark){
        StudentName = Name;
        StudentId = Id;
        Marks = Mark;
    }
void Display(){
    cout << "\nName = " << StudentName << "\tMarks are : ";
    cout << Marks;
    }
};
int main(){
    Student obj[5] = {{"Ram",101,405},{"Sham",102,480},{"Sita",103,350},{"Gita",104,250},{"Seema",105,450}};
    int i;
    for(i=0;i<5;i++){
        cout << "\nInformation of student with id = " << obj[1].StudentId;
        obj[i].Display();
    }
    return 0;
}