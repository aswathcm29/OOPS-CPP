#include <iostream>
#include <thread>
#include <vector>
#include <chrono>

using namespace std;

const int MAX_SIZE = 5;
int buffer[MAX_SIZE];
int count = 0;

bool isProducing = true; 

void producer() {
    int value = 0;
    while (value<10) {
        if (isProducing && count<MAX_SIZE) {
            buffer[count++] = value;
            cout << "Produced: " << value << endl;
            value++;
            isProducing = false;
        }
        this_thread::sleep_for(chrono::milliseconds(100)); 
    }
}

void consumer() {
    int consumed=0;
    while (consumed<10) {
        if (!isProducing && count > 0) {
            int value = buffer[--count];
            cout << "Consumed: " << value << endl;
            consumed++;
            isProducing = true; 
        }
        this_thread::sleep_for(chrono::milliseconds(100));
    }
}

int main() {
    thread t1(producer);
    thread t2(consumer);

    t1.join();
    t2.join();

    return 0;
}
