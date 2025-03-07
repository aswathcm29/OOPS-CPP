#include <bits/stdc++.h>
using namespace std;

//A child inherits from another child - Multilevel Inheritance 

class Vehicle {
    public:
        void start() { cout << "Vehicle started!" << endl; }
    };
    
    class Car : public Vehicle {
    public:
        void honk() { cout << "Car honks!" << endl; }
    };
    
    class ElectricCar : public Car {
    public:
        void charge() { cout << "Charging..." << endl; }
    };
    
int main() {
    ElectricCar myEV;
    myEV.start();  
    myEV.honk();  
    myEV.charge();
}
    