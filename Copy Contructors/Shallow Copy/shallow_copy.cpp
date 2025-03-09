#include <bits/stdc++.h>
using namespace std;

class Person {
public:
    string* name;  

    Person(string n) {
        name = new string(n);
    }

    // Shallow Copy Constructor (both objects share the same memory)
    Person(const Person& p) {
        name = p.name;  // Copy the pointer, not the value
    }

    void changeName(string n) {
        *name = n;
    }

    void getName() {
        cout << *name << endl;
    }

    // Destructor (to prevent memory leaks)
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
