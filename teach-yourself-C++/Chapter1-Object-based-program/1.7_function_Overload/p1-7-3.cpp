/*
引数として受け取った2つの値のうち，小さい方を返すmin()関数を作成．
min()関数をオーバーロードし，文字・整数・倍精度浮動小数点数を引数として受け取れるようにする．
*/

#include <iostream>
#include <cctype>
using namespace std;

char min(char a, char b);
int min(int a, int b);
double min(double a, double b);

int main(){

    cout << "最小値は：　" << min('x', 'a') << "\n";
    cout << "最小値は：　" << min(10, 20) << "\n";
    cout << "最小値は：　" << min(0.2234, 99.2) << "\n";

    return 0;
}

char min(char a, char b){
    return tolower(a)<tolower(b) ? a : b;
}

int min(int a, int b){
    return a < b ? a : b;
}

double min(double a, double b){
    return a < b ? a : b;
}
