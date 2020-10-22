//フィートをインチに変換するプログラム
#include <iostream>
using namespace std;

int main(){
    double feet;

    do{
        cout << "フィートを入力(0の入力で終了)\n";
        cin >> feet;
        cout << "インチ変換結果: " << feet * 12.0 << "inch" << "\n";
    }while (feet >0.0);

    return 0;
}