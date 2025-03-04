#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int rollno;

    Student(){
        cout<<"Object is being created"<<endl;
    }

    Student(string name,int rollno){
        this->name=name;
        this->rollno=rollno;
    }

    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"RollNo:"<<rollno<<endl;
    }

    ~Student(){          //Deconstructors to free up memory
        cout<<name<<"'s"<<" object is being destroyed"<<endl;
    }
};

int main(){
   Student check;
   check.name="Check";
   check.rollno=16;
   Student s1("Aswath",26);
   check.display();
   s1.display();
   return 0;
}