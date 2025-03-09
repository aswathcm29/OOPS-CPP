#include <iostream>
using namespace std;

class Base {
public:
    ~Base() { cout << "Base Destructor Called" << endl; }
};

class Derived : public Base {
public:
    ~Derived() { cout << "Derived Destructor Called" << endl; }
};

int main(){
    Derived obj;
}
