#include <iostream>
using namespace std;

class Employee {
    public:
        int number;
        char name[80];
        int salary;

        void showData() {
            cout << number << "\n";
            cout << name << "\n";
            cout << salary << "\n";

        }
};

