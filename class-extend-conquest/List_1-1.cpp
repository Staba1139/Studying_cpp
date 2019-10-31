#include <cstring>
#include <iostream>
using namespace std;

struct Employee {
    int number;
    char name[80];
    int salary;

};

int main(){
    struct Employee tanaka;

    tanaka.number = 1234;
    strcpy(tanaka.name, "田中一郎");
    tanaka.salary = 200000;

    printf("%c", tanaka.number);

    return 0;
}