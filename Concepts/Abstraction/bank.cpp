#include <bits/stdc++.h>
using namespace std;

class ATM {
    protected:
       double balance;
       string name;
    public:
        virtual void withdrawMoney(double)=0;
        virtual void depositMoney(double)=0;
        virtual void getBalance()=0;
};

class BankATM : public ATM {
    public:

      BankATM(){
        balance=0.0;
        name="Guest";
      }

      BankATM(double balance,string name){
        this->balance=balance;
        this->name=name;
      }

      void withdrawMoney(double amount) override {
        if(balance - amount > 0 ){
               balance-=amount;
               cout<<name<<" your withdrawal of amount "<<amount<<" is successful"<<endl;
        }
        else{
            cout<<name<<" you have insufficient balance"<<endl;
        }
      }

      void depositMoney(double amount) override {
        balance+=amount;
        cout<<name<<" your deposit of amount "<<amount<<" is successful"<<endl;
    }

      void getBalance() override {
        cout<<name<<" your balance is "<<balance<<endl;
      }
};

int main(){
    //by static binding
    BankATM A(1000,"A");
    BankATM B(2000,"B");
    A.getBalance();
    B.getBalance();
    A.withdrawMoney(500.0);
    B.withdrawMoney(200.0);
    A.getBalance();
    B.getBalance();

    //By dynamic binding
    vector<ATM*>branches;
    branches.push_back(new BankATM(5000,"C"));
    branches.push_back(new BankATM(10000,"D"));

    for(auto x:branches){
        x->getBalance();
        x->depositMoney(2000);
        x->getBalance();
    }
}