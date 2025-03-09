#include <bits/stdc++.h>
using namespace std;

class Demo1{
   public:
   Demo1(){
    cout<<"Inside Demo1 constructor"<<endl;
   }
   ~Demo1(){
    cout<<"Inside Demo1 destructor"<<endl;
    }
};

class Demo2{
    public:
    Demo2(){
        cout<<"Inside Demo2 constructor"<<endl;
    }
    ~Demo2(){
        cout<<"Inside Demo2 destructor"<<endl;
        }
};

int main(){
    Demo1 obj1;
    Demo2 obj2;
    cout<<"Inside main function"<<endl;

}

// Output :  
// Inside Demo1 constructor
// Inside Demo2 constructor
// Inside main function
// Inside Demo2 destructor
// Inside Demo1 destructor