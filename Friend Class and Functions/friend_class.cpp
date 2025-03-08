#include <bits/stdc++.h>
using namespace std;


class Bank{
    private:
    int balance;
    
    public:
    Bank(int bal):balance(bal){};

    friend class SubBank;
};

//private attribute is access outside the class using friend class
class SubBank{
    public:
        void getBalance(const Bank& acc){
            cout << acc.balance << endl;
        }
};

int main(){
    Bank acc(1000);
    SubBank sb;
    sb.getBalance(acc);
}