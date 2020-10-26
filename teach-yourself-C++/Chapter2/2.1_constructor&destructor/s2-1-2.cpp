#include <iostream>
using namespace std;

class myclass{
    int a;
public:
    myclass();  //コンストラクタ
    ~myclass(); //デストラクタ
    void show();
};

myclass::myclass(){
    cout << "コンストラクタ呼び出し\n";
    a = 10;
}

myclass::~myclass(){
    cout << "デストラクタ呼び出し\n";
}

void myclass::show(){
    cout << a << "\n";
}

int main(){
    myclass ob;

    ob.show();

    return 0;

}
