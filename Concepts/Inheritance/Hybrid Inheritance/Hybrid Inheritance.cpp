#include <bits/stdc++.h>
using namespace std;


//Mix of multilevel and multiple inheritance - Hybrid Inheritance

class Student {
    public:
        void study() { cout << "Studying..." << endl; }
    };
    
class Teacher {
    public:
        void teach() { cout << "Teaching..." << endl; }
};
    
class TeachingAssistant : public Student, public Teacher {};

int main() {
    TeachingAssistant TA;
    TA.study();
    TA.teach(); 
}
    