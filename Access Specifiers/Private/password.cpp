#include <bits/stdc++.h>
using namespace std;

class User{
   private:
        string password;
    
    public:
        User(string s){
            password=s;
        }

        bool login(string entered){
            return password==entered;
        }
};

int main(){
    User u1("check123");
    cout<<"Enter Password : "<<endl;
    string s;
    cin>>s;
    if(u1.login(s))cout<<"Login Successful"<<endl;
    //u1.password - not allowed
    else cout<<"Login Failed"<<endl;
}