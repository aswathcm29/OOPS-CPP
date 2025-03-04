#include <bits/stdc++.h>
using namespace std;

class Employee{
    protected:
        int salary;

    public:
        Employee(int s){
            salary=s;
        }
};

class Manager : public Employee{
    public:
        Manager(int sal):Employee(sal){}

        void IncrementSalary(int newSalary){
            salary+=newSalary;
        }
        
        void getSalary(){
            cout<<"Salary : "<<salary<<endl;
        }
};

int main(){
    Manager mg(20000);
    mg.IncrementSalary(5000);
    mg.getSalary();
   // mg.salary not possible 
}