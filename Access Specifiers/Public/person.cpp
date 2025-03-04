#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name="Unknown";

    void display(){
        cout<<"Name of the Person : "<<name<<endl;
    }
};

int main(){
    Person p1;
    Person p2;
    p2.name="Sonie";
    p1.display();
    p2.display();
}