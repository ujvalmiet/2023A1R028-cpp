/*#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    cout << "Prime numbers from 1 to 100 are: ";
    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
*/
#include <iostream>
using namespace std;
bool number(int num){
        if (num < 2) return false;
        for (int i = 2; i * i <= num; i++){
            if (num % i == 0) return false;
        }
        return 1;
    }
int main(){
    cout << "Prime numbers from 0 to 100 are = ";
    for(int i = 0;i < 100;i++){
        if (number(i)){
            cout <<  i << " ";
        }
    }
    return 0;
}
