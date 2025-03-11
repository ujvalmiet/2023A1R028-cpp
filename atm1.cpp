/*
//Program to demonstrate the working of all types of functions
#include <iostream>
using namespace std;
class ATM_App{
    public:void welcome(){
        cout << "Welcome to ATM.";
    }
    private:int pin;
    public:string validate(){
        cout << "\n Enter Your Pin : ";
        cin >> pin;
        if(pin == 123){
            return "True";
        }
        else{
            return "False";
        }

    }
    private:float wid_amt;
    public:float withdraw(float Bal_amt){
        cout << "\n Enter Amount you want to withdraw : ";
        cin >> wid_amt;
        if(wid_amt>Bal_amt){
            cout << "\n Insufficient Balance......";
        }
        else {
            return Bal_amt-wid_amt;
        }
    }
    public:void Display_Balance(float amt){
        cout << "\n Your Balance is : " << amt;
    }
};
int main(){
    ATM_App obj;
    string res;
    float res1;
    float amt1=10000.50;
    obj.welcome();
    res = obj.validate();
    if(res == "True"){
        cout << "\n Login Successful";
        res1 = obj.withdraw(amt1);
        obj.Display_Balance(res1);
    }
}
*/
#include <iostream>
using namespace std;
 class ATM{
    private:
    int PIN;
    public:
    float WITHDRAW_AMOUNT;

    public:
    float BALANCE;

    public:
    void welcome() {
        cout << "Welcome to the ATM ....";
    }
    public:
    bool validate(){
        cout << "\nEnter the PIN : ";
        cin >> PIN;
        return (PIN == 123);
    }
    float WITHDRAW(float BALANCE){
        cout << "\nEnter the withdraw amount : ";
        cin >> WITHDRAW_AMOUNT;

        if(WITHDRAW_AMOUNT > BALANCE){
            cout << "\nInsuffient Balance....";
            return BALANCE;
        }

        BALANCE -= WITHDRAW_AMOUNT;
        cout << "\nWithdrawal Successful... ";
        return BALANCE;
    }
    void display_balance(float amount){
        cout << "\nYour balance is : " << amount;
    }
 };
 int main(){
    ATM obj;
    float amount1 = 10000.50;

    obj.welcome();
    if(obj.validate()) {
        cout << "\nLogin Success...";
        amount1 = obj.WITHDRAW(amount1);
        obj.display_balance(amount1);
    }
    else{
        cout << "\nInvalid PIN....";
    }
    return 0;
 }
