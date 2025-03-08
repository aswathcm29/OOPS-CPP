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

    void sound () override{
        cout<<"Dog barks"<<endl;
    }
};

class Cat : public Animal{
    public:

    void sound() override {
         cout<<"Cat meows"<<endl;
    }
};

int main(){
    Dog sonie;    //Calls dound of dog directly
    sonie.sound();

    Cat kitty;
    kitty.sound();

    vector<Animal>animals;   // gives output as the sound() of base class
    animals.push_back(Dog());
    animals.push_back(Cat());
    for (auto x:animals){
        x.sound();
    }


    vector<Animal*>animals2;   // gives output as the sound() of the derived class using base class pointer
    animals2.push_back(new Dog());
    animals2.push_back(new Cat());
    for (auto x:animals2){
        x->sound();
    }

    
}