#include <bits/stdc++.h>
using namespace std;


class Bank{
    private:
    int balance;
    
    public:
    Bank(int bal):balance(bal){};

    friend void getBalance(const Bank&);
};


//private attribute is access outside the class using friend functions
void getBalance(const Bank& acc){
    cout << acc.balance << endl;
}

int main(){
    Bank acc(1000);
    getBalance(acc);
}