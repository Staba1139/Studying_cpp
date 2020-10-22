#include <iostream>
#include <cstring>
using namespace std;

class Employee {
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
    tanaka.number = 1234;
    strcpy(tanaka.name, "“c’†ˆê˜Y");
    tanaka.salary = 200000;

    tanaka.showData();

    return 0;

}
