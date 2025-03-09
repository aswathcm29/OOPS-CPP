#include <bits/stdc++.h>
using namespace std;

class Person {
public:
    string* name;  

    Person(string n) {
        name = new string(n);
    }

    // Deep Copy Constructor (both objects are created on different memory)
    Person(const Person& p) {
        name = new string(*p.name);  // Creates a new memory block
    }

    void changeName(string n) {
        *name = n;
    }

    void getName() {
        cout << *name << endl;
    }

    ~Person() {
        delete name;
    }
};

int main() {
    Person p1("John");
    Person p2(p1);  

    p1.getName(); 
    p2.getName();

    cout << "After changing" << endl;
    p1.changeName("Peter"); 

    p1.getName();  
    p2.getName();
}
