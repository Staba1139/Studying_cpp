#include <cstring>
#include <iostream>
using namespace std;

struct Employee {
    int number;
    char name[80];
    int salary;

};

void showEmployee(struct Employee *p);

int main(){
    struct Employee tanaka;

    tanaka.number = 1234;
    strcpy(tanaka.name, "田中一郎");
    tanaka.salary = 200000;

    showEmployee(&tanaka);

    return 0;
}

void showEmployee(struct Employee *p){
    cout << p->number << "\n";
    cout << p->name << "\n";
    cout << p->salary << "\n";
}