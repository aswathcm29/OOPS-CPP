#include <bits/stdc++.h>
using namespace std;


class Driver{
    public:
    string name;
    string vehicle;
    bool availability;
    double farePerKm;
    string location;

    Driver(string name,string vehicle,double farePerKm,bool availability,string location){
        this->name=name;
        this->vehicle=vehicle;
        this->farePerKm=farePerKm;
        this->availability=availability;
        this->location=location;
    }
    
    void acceptRide(){
        this->availability=false;
    }

};

class User{
    public:
    string name;
    string pickUpLocation;
    string dropLocation;
    string preferredVehicle;

    User(string name,string pickUpLocation,string dropLocation,string preferredVehicle){
        this->name=name;
        this->pickUpLocation=pickUpLocation;
        this->dropLocation=dropLocation;
        this->preferredVehicle=preferredVehicle;
    }

    void bookRide(vector<Driver*>drivers){
    cout<<"Searching for drivers from your given pickUpLocation "<<pickUpLocation<<" !"<<endl;
    for(auto x:drivers){
            if(x->availability==true && x->vehicle==preferredVehicle && x->location==pickUpLocation){
                cout<<"Driver "<<x->name<<" is available and will be assigned to you!"<<endl;
                x->acceptRide();
                cout<<"Ride booked successfully!"<<endl;
                int dist = rand()%50+1;
                cout<<"Distance between "<<pickUpLocation<<" and "<<dropLocation<<" is "<<dist<<" km"<<endl;
                cout<<"Fare for the ride is "<<dist*x->farePerKm<<" "<<endl;
                cout<<"-------------------------------------------------------------"<<endl;
                return;
            }
        }
        cout<<"No drivers available for your preferred vehicle "<<preferredVehicle<<" from "<<pickUpLocation<<endl;
       }
    };
        



int main(){
    srand(time(0));
    User John("John","Coimbatore","Pollachi","Car");
    User David("David","Erode","Coimbatore","Scooter");
    vector<Driver*>drivers = {
        new Driver("Rajesh","Scooter",7.0,true,"Erode"),
        new Driver("Rahul","Car",10.0,true,"Coimbatore"),
        new Driver("Ramesh","Bike",5.0,true,"Pollachi"),
    };
    John.bookRide(drivers);
    David.bookRide(drivers);
    for (auto d:drivers) {
        delete d; 
    }
    
}
