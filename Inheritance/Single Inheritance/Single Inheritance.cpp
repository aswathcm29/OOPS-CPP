#include <bits/stdc++.h>
using namespace std;

class Vehicle{
    public:
      string name;

      Vehicle(string name){
        this->name=name;
      }

      void startEngine(){
        cout<<"Engine Started !"<<endl;
      }
};

class Car : public Vehicle{
    public:
    int speed;
    Car(string name):Vehicle(name){
        speed=0;    
    };
    
    Car(string name,int speed):Vehicle(name){
        this->speed=speed;
    };

    void honk(){
        cout<<name<<" honks!"<<endl;
    }

    void getSpeed(){
        cout<<"Speed of "<<name<<" : "<<speed<<endl;
    }
    
};

int main(){
    Car myCar("Toyota",120);
    myCar.startEngine();
    myCar.honk();
    myCar.getSpeed();
}