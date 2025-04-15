#include <bits/stdc++.h>
using namespace std;

int n=0;
mutex m;

void increment(){
    m.lock();
    ++n;
    m.unlock();
}
void decrement(){
    m.lock();
    --n;
    m.unlock();
}

int main(){
    thread t1(increment);
    thread t2(decrement);
    t1.join();
    t2.join();
    cout<<n<<endl;
}