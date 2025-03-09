#include <bits/stdc++.h>
using namespace std;

class Dynamic{
    public:
    int *a;

    Dynamic(){
        a = new int;
        cout<<"Memory allocated"<<endl;
    }

    ~Dynamic(){
        delete a;
        cout<<"Memory deallocated"<<endl;
    }
};

int main(){
    Dynamic d1,d2;
}