#include <iostream>
using namespace std;

class myclass{
    int a;
public:
    myclass();
    void show();
};

myclass::myclass(){
    cout << "コンストラクタ呼び出し\n";
    a = 10;

}

void myclass::show(){
    cout << a << "\n";
}

int main(){
    myclass ob;

    ob.show();

    return 0;
}
