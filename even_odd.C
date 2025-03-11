#include <iostream>
using namespace std;
class Even_odd{
    public:
    int num;
    Even_odd(){
        cout << "Enter the number = ";
        cin >> num;
        if(num % 2 == 0){
            cout << "\nGiven number is even....";
        }else{
            cout << "\nNumber is odd....";
        }
    }
};
int main (){
    Even_odd obj;
    return 0;
}