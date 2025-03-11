/*Program to demonstrate the concept of function overloading 
create a class with name shapes, create a function with name 
Area(), with Area function calculate Area of circle, rectangle, triangle, using function overloading
#include <iostream>
using namespace std;
class Shapes{
    public:
    float area_circle, area_rectangle, area_triangle, radius, length, breadth, height, base;
    float pi = 3.14;
    void Area(){
        cout << "Enter the radius of circle : ";
        cin >> radius;
        area_circle = pi * radius * radius;
        cout << "The area of the circle is = " << area_circle;

        cout << "\nEnter the length of rectangle : ";
        cin >> length;
        cout << "Enter the breadth of rectangle : ";
        cin >> breadth;
        area_rectangle = length * breadth;
        cout << "The area of the rectangle is = " << area_rectangle;

        cout << "\nEnter the height of triangle : ";
        cin >> height;
        cout << "Enter the base of the triangle : ";
        cin >> base;
        area_triangle = 0.5 * height * base;
        cout << "The area of the circle is = " << area_triangle;
    }
};
int main(){
    Shapes obj;
    obj.Area();
    return 0;
}
    */
#include <iostream>
using namespace std;
class Shapes{
    public:
    float pi = 3.14;
    float Area_circle(float radius){
        return pi * radius *radius;
    }
    float Area_rectangle(float length, float breadth){
        return length * breadth;
    }
    float Area_triangle(float height, float base){
        return 0.5 * base * height;
    }
};
int main(){
    Shapes obj;
    cout << "Area of the circle : " << obj.Area_circle(7);
    cout << "\nArea of the rectangle : " << obj.Area_rectangle(2,3);
    cout << "\nArea of the trianlge : " << obj.Area_triangle(2,2);

    return 0;
}