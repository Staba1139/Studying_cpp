#include <cstring>
#include <iostream>
using namespace std;

struct Employee {
    int number;
    char name[80];
    int salary;

};

struct Employee *getEmployee();

int main(){
    struct Employee *p;

    p = getEmployee();

    cout << p->number << "\n";
    cout << p->name << "\n";
    cout << p->salary << "\n";

    return 0;
}

struct Employee *getEmployee(){
    static struct Employee tanaka;

    tanaka.number = 1234;
    strcpy(tanaka.name, "田中一郎");
    tanaka.salary = 200000;

    return &tanaka;
}
