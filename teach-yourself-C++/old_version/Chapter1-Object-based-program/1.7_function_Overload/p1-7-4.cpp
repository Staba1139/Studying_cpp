/*
引数として受け取った秒数だけコンピュータを停止するsleep()関数を作成．
sleep()関数をオーバーロード，整数と，整数の文字列表現のどちらを利用しても呼び出せるようにする．
動作確認でコンピュータを停止させるために遅延ループを使用してもOK．
*/

#include <iostream>
#include <cstdlib>
using namespace std;

//sleepをオーバーロードし，整数またはchar *を引数として受け取る
void sleep(int n);
void sleep(char *n);

//プロセッサの速度に合わせてこの値は変更する
#define DELAY 200000000

int main(){
    cout << '.';
    sleep(3);
    cout << '.';
    sleep('2');
    cout << ".\n";

    return 0;
}

//整数を受け取るsleep()
void sleep(int n){
    long i;
    for(; n; n--)
        for(i=0;i<DELAY; i++);
}

//char *引数を受け取るsleep()
void sleep(char *n){
    long i;
    int j;
    j = atoi(n);
    for(; j; j--)
        for(i=0;i<DELAY; i++);
}

