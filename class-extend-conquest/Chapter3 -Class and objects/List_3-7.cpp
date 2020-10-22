#include <iostream>
using namespace std;

class MyMath {
    public:
        int twice(int a);
        double twice(double a);
};

int MyMath::twice(int a){
    return a * 2;
}

double MyMath::twice(double a){
    return a * 2;
}

int main(){
    MyMath obj;
    int a;
    double b;

    a = obj.twice(123);
    cout << a << "\n";

    b = obj.twice(3.14);
    cout << b << "\n";

    return 0;
}