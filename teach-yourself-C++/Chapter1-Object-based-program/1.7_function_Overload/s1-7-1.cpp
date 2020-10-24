#include <iostream>
using namespace std;

// myabs()関数を3通りにオーバーロードする
int myabs(int n);
long myabs(long n);
double myabs(double n);

int main(){
    cout << "-10の絶対値" << myabs(-10) << "\n\n";
    cout << "-10Lの絶対値" << myabs(-10L) << "\n\n";
    cout << "-10.01の絶対値" << myabs(-10.01) << "\n\n";
    return 0;

}

//整数用のmyabs()関数
int myabs(int n){
    cout << "整数用のmyabs()\n";
    return n<0 ? -n : n;
}

//長整数用のmyabs()関数
long myabs(long n){
    cout << "長整数用のmyabs()\n";
    return n<0 ? -n : n;
}

//倍精度浮動小数点数用のmyabs()関数
double myabs(double n){
    cout << "倍精度浮動小数点数用のmyabs()\n";
    return n<0 ? -n : n;
}



