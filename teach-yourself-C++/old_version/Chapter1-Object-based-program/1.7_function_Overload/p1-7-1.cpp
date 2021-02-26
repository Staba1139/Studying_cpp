/*
引数の平方根を返す, sroot()という名前の関数を作成．
sroot()関数を3通りにオーバーロード，それぞれ整数・長整数・倍精度浮動小数点数の平方根を返すようにする．
平方根の計算にはsqrt()関数を用いる．
*/

#include <iostream>
#include <cmath>
using namespace std;

int sroot(int a);
long sroot(long a);
double sroot(double a);

int main(){
    int a = 4;
    long b = 4L;
    double c = 4.02;
    cout << "整数の平方根：　" << sroot(a) << "\n";
    cout << "長整数の平方根：　" << sroot(b) << "\n";
    cout << "倍精度浮動小数点数の平方根：　" << sroot(c) << "\n";
    return 0;

}

int sroot(int a){
    return sqrt(a);
}

long sroot(long a){
    return sqrt(a);
}

double sroot(double a){
    return sqrt(a);
}

