#include <cstring>
#include <iostream>
using namespace std;

struct Employee {
    int number;
    char name[80];
    int salary;

};

int main(){
    struct Employee person[10];

    person[0].number = 1234;
    strcpy(person[0].name, "田中一郎");
    person[0].salary = 200000;

    person[1].number = 1235;
    strcpy(person[1].name, "佐藤次郎");
    person[1].salary = 250000;

    person[2].number = 1236;
    strcpy(person[2].name, "鈴木三郎");
    person[2].salary = 300000;

    for(int i = 0; i < 3; i++){
        cout << person[i].number <<"\n";
        cout << person[i].name <<"\n";
        cout << person[i].salary <<"\n";

    }

    return 0;
}