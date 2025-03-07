#include <bits/stdc++.h>
using namespace std;

//Run time Polymorphism

class Animal{
    public:
    virtual void sound(){
        cout<<"Animal has a sound"<<endl;
    }
};

class Dog : public Animal{
    public:

    void sound () {
        cout<<"Dog has a sound"<<endl;
    }
};

int main(){
    Dog sonie;
    Animal* sdog= &sonie;
    sdog->sound();
}