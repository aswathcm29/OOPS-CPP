#include <bits/stdc++.h>
using namespace std;


//Compile Time Polymorphism

class Math{
    public:
        void add(int a,int b){
            cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
        }

        void add(int a,int b,int c){
            cout<<"Sum of "<<a<<" "<<b<<" and "<<c<<" is "<<a+b+c<<endl;
        }
};

int main(){
    Math m;
    m.add(10,20);
    m.add(10,20,30);
}