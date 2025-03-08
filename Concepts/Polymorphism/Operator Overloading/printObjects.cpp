#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
        string name;
        int age;

        Person(string name,int age){
            this->name=name;
            this->age=age;
        }

};

//modifying the << operator to print the object based on the paramaters passed inside

ostream& operator<<(ostream& COUT,const Person& p ){
    COUT<<"Name: "<<p.name<<endl;
    COUT<<"Age: "<<p.age<<endl;
    return COUT;
}

class Portal{
    public:
        vector<Person>members;
        //modifying += operator to push persons into the portal
        void operator+=(const Person &p){
            members.push_back(p);
        }
    
};


//modifying the << operator to print all the members in the portal by modifying with the argument passed

void operator<<(ostream& COUT,const Portal &p){
    for(auto x:p.members){
        COUT<<x<<endl;
    }
}

int main(){
    Person p1("John", 25);
    Person p2("Philip",30);
    cout<<p1;
    cout<<p2;
    Portal A;
    A+=p1;
    A+=p2;
    cout<<A;
}