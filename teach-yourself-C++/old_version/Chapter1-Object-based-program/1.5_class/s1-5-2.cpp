//公開メンバ変数も作成できることを確認
#include <iostream>
using namespace std;

class myclass{
    public:
        //aは公開変数
        int a;
        //したがって，set_a()関数とget_a()関数は必要ない

};

int main(){
    myclass ob1, ob2;

    //変数aは直接アクセスすることができる
    ob1.a = 10;
    ob2.a = 99;

    cout << ob1.a << "\n";
    cout << ob2.a << "\n";

    return 0;
}
