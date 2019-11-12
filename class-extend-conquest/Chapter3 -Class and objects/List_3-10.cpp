#include <iostream>
#include <cstring>
using namespace std;

class Employee{
    public:
        int number;
        char name[80];
        int salary;
        void showData();
};

void Employee::showData(){
    cout << number << "\n";
    cout << name << "\n";
    cout << salary << "\n";
}

int main(){
    Employee tanaka;
    Employee *someone;

    someone = &tanaka;

    someone->number = 1234;
    strcpy(someone->name,"田中一郎");
    someone->salary = 200000;

    someone->showData();

    return 0;
}
