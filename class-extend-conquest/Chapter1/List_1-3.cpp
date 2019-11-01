#include <cstring>
#include <iostream>
using namespace std;

struct Employee{
    int number;
    char name[80];
    int salary;

};

int main(){
    struct Employee tanaka, someone;

    tanaka.number = 1234;
    strcpy(tanaka.name, "田中一郎");
    tanaka.salary = 200000;

    someone = tanaka;

    cout << someone.number << "\n";
    cout << someone.name << "\n";
    cout << someone.salary << "\n";
}