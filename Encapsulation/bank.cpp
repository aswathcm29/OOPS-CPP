#include <bits/stdc++.h>
using namespace std;

class Account{
    private:
     double balance;
    
    public:

    Account(){
        balance = 0;
    }

    Account(double balance){
        this->balance=balance;
    }

    void deposit(int amount){
        balance+=amount;
        cout<<"Deposited Successfully"<<endl;
    }

    void withdraw(int amount){
        if((balance-amount)<0)cout<<"Insufficient Balance";
        else{
            balance-=amount;
            cout<<"Amount withdrawn successfully"<<endl;
        }
    }

    void getBalance(){
        cout<<"Your balance : "<<balance<<endl;
    }
};


int main(){
    Account myAcc(1000);
    myAcc.getBalance();
    myAcc.deposit(2000);
    myAcc.getBalance();
    myAcc.withdraw(500);
    myAcc.getBalance();
}