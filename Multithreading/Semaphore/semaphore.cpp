
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int flag = 1;  // acts as binary semaphore: 1 = free, 0 = locked

void wait() {
    while (flag == 0) {
        // busy wait
    }
    flag = 0; // acquire the lock
}

void signal() {
    flag = 1; // release the lock
}

void criticalSection(string name) {
    cout << name << " is waiting to enter critical section.\n";
    wait();
    cout << name << " has entered the critical section.\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << name << " is leaving the critical section.\n";
    signal();
}

int main() {
    thread t1(criticalSection, "Thread 1");
    thread t2(criticalSection, "Thread 2");

    t1.join();
    t2.join();

    return 0;
}
