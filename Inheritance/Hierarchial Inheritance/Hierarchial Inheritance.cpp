#include <bits/stdc++.h>
using namespace std;

//One parent, multiple child - Hierarchial Inheritance

class Animal {
    public:
        void eat() { cout << "Eating..." << endl; }
};

class Dog : public Animal {
    public:
        void bark() { cout << "Dog barks!" << endl; }
};

class Cat : public Animal {
    public:
        void meow() { cout << "Cat meows!" << endl; }
};

    
int main() {
    Dog myDog;
    myDog.eat();  
    myDog.bark();

    Cat myCat;
    myCat.eat(); 
    myCat.meow();
}