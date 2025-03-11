/*To update the details of a student using member function of student class.
Create class student with parameterized constructor, add details of student with attributes like NAme, Roll No, 
Marks, Credits. 
Create a display fucntion to display records on sccreen.
Create three functions 
-Semester1()
-Semester2()
-Semester3()
All three semester functions stores copy of Marks attribute with the, and retrieve value of NAme, Roll No, Credits 
from student class.
Create delete function() to delete student record.*/
#include <iostream>
using namespace std;
class Student{
    public:
    string Name;
    int RollNo;
    float Marks;
    float Credits;
    public:
    Student(string Name1, int RollNo1, float Marks1, float Credits1){
    Name = Name1;
    RollNo = RollNo1;
    Marks = Marks1;
    Credits = Credits1;
}
void Display(){
    cout << "\nName is = " << Name << "\nRoll Number is = " << RollNo;
    cout << "\nMArks are = " << Marks << "\nCredits are = " << Credits;
}
};
void Semester1(Student sem1){ // Object by pass by value
    sem1.Marks = 400; 
    cout << "\n\nSemester 1 Results are given below : ";
    cout << "\nName is "<< sem1.Name << "\nRoll No is = " << sem1.RollNo;
    cout << "\nMarks are = " << sem1.Marks << "\nCredits are = " << sem1.Credits;
}
void Semester2(Student sem2){
    sem2.Marks = 450;
    cout << "\nSemester 2 Results are given below : ";
    cout << "\nName is "<< sem2.Name << "\nRoll No is = " << sem2.RollNo;
    cout << "\nMarks are = " << sem2.Marks << "\nCredits are = " << sem2.Credits;
}
void Semester3(Student sem3){
    sem3.Marks = 350;
    cout << "\nSemester 3 Results are given below : ";
    cout << "\nName is "<< sem3.Name << "\nRoll No is = " << sem3.RollNo;
    cout << "\nMarks are = " << sem3.Marks << "\nCredits are = " << sem3.Credits;
}
void update(Student & obj){ // Object as pass by reference
    obj.Marks = 200;
    obj.Name = "ABC";
    obj.Display();
}
void Delete (Student *pobj){ //Object by pointer
    pobj->Marks = 0.0;
    pobj->Name = " ";
    pobj->Credits = 0.0;
    pobj->RollNo = 0;
}
int main(){
    Student obj("XYZ",101,0,5);
    obj.Display();
    Semester1(obj);
    Semester2(obj);
    Semester3(obj);
    update(obj);
    Delete(&obj);
    obj.Display();
    return 0;

}