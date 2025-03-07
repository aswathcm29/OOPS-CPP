#include <bits/stdc++.h>
using namespace std;


// One child inherits from multiple parents - Multiple Inheritance

class Camera{ 
    public:
        void takeCamera(){
            cout<<"Camera is taking a picture"<<endl;
        }
};

class Phone{
    public:
        void call(){
            cout<<"Phone is making a call"<<endl;
        } 
};

class SmartPhone : public Camera,public Phone {
    public:
       string name;

       SmartPhone(string name){
        this->name=name;
       }

       void getName(){
         cout<<name<<endl;
       }
};

int main(){
    SmartPhone s("iPhone");
    s.getName();
    s.takeCamera();
    s.call();
}