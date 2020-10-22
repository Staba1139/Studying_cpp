#include <cstring>
#include "Employee2.h"

int main(){

    Employee tanaka;

    tanaka.number = 1234;
    strcpy(tanaka.name, "“c’†ˆê˜Y");
    tanaka.salary = 200000;

    tanaka.showData();

    return 0;

}