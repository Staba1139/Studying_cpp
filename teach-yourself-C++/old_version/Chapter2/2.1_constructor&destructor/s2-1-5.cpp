/*
timerクラスのオブジェクトを利用して，timer型オブジェクトの作成から破棄までの時間を計測
オブジェクトのデストラクタが呼び出されると，経過時間が表示される
プログラムの実行時間，ブロック内の関数の実行にかかった時間を計測可能
Create Date:2021/1/13
Author     :Takaaki Mano
*/


#include <iostream>
#include <ctime>
using namespace std;

class timer {
    clock_t start;
    public:
        timer();    //コンストラクタ
        ~timer();   //デストラクタ
};

timer::timer(){
    start = clock();
}

timer::~timer(){
    clock_t end;
    end = clock();
    cout << "経過時間: "
         << (end-start) / CLOCKS_PER_SEC << "\n";
}

int main(){
    timer ob;
    char c;

    //遅延
    cout << "最後が[ENTER]になるようにキーを入力: ";
    cin >> c;
    return 0;
}
