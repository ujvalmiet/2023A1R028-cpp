#include <iostream>
using namespace std;

class ATM_App {
    private:
        int pin;
        float wid_amt;

    public:
        void welcome() {
            cout << "Welcome to ATM.";
        }

        bool Validate() {
            cout << "\nEnter Your Pin: ";
            cin >> pin;
            return (pin == 123);
        }

        float withdraw(float Bal_amt) {
            cout << "\nEnter Amount you want to withdraw: ";
            cin >> wid_amt;

            if (wid_amt > Bal_amt) {
                cout << "\nInsufficient Balance......";
                return Bal_amt;  // Return unchanged balance
            }

            Bal_amt -= wid_amt;  // Deduct withdrawal amount
            cout << "\nWithdrawal Successful!";
            return Bal_amt;  // Return updated balance
        }

        void Display_Balance(float amt) {
            cout << "\nYour Balance is: " << amt;
        }
};

int main() {
    ATM_App obj;
    float amt1 = 10000.50;
    
    obj.welcome();
    if (obj.Validate()) {
        cout << "\nLogin Successful";
        amt1 = obj.withdraw(amt1);
        obj.Display_Balance(amt1);
    } else {
        cout << "\nInvalid Pin. Access Denied!";
    }
    
    return 0;
}
