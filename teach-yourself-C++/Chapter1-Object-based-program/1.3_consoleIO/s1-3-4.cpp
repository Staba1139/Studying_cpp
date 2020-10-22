#include <iostream>
using namespace std;

int main(){
    int i;
    float f;
    char s[80];
    
    cout << "整数値、浮動小数点数値、文字列を入力";
    cin >> i >> f >> s;
    cout << "入力した値: ";
    cout << i << ' ' << f << ' ' << s;

    return 0;
    
}