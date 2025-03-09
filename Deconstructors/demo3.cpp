#include <iostream>
using namespace std;


//if virtual not given only base class constructor will be called
class Base {
public:
   virtual ~Base() { cout << "Base Destructor Called" << endl; }
};

class Derived : public Base {
public:
    ~Derived() { cout << "Derived Destructor Called" << endl; }
};

int main(){
    Base* obj = new Derived();
    delete obj;
}


