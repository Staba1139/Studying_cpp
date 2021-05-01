#include <iostream>
using namespace std;

void f1(int a);
void f1(int a, int b);

int main(){
    f1(10);
    f1(10, 20);
    return 0;
}

void f1(int a){
    cout << "f1(int a)内\n";
}

void f1(int a, int b){
    cout << "f1(int a, int b)内\n";
}

