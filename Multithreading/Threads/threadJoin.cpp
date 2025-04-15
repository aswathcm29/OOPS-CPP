#include <bits/stdc++.h>
using namespace std;


void updateForeCast(unordered_map<string,int>temp,int count){
    while(count--){
    for(auto &[loc,tem]:temp){
          tem++;
          cout<<loc<<" : "<<tem<<endl;
          
    }
    this_thread::sleep_for(2000ms);
}
}

int main(){
    unordered_map<string,int>temp;
    temp["Coimbatore"]=36;
    temp["Chennai"]=37;
    temp["Bangalore"]=32;
    temp["Pune"]=35;
    cout<<"Begin thread()"<<endl;
    thread updateTemp(updateForeCast,temp,10);
    // this_thread::sleep_for(3000ms);
    updateTemp.join();
    cout<<"End thread()"<<endl;
    return 0 ;
}