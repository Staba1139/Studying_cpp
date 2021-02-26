/*
コンストラクタとデストラクタの両方を利用
strtypeという簡単な文字列クラスを作成，このクラスに文字列とその長さを格納．
strtypeのオブジェクト作成時に文字列を保存するためのメモリを割り当て，その初期の長さを0に設定
strtypeオブジェクトを破棄する際にそのメモリを解放する
Create Date:2021/1/13
Author     :Takaaki Mano
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

#define SIZE 255

class strtype {
    char *p;
    int len;
    public:
        strtype();  //コンストラクタ
        ~strtype(); //デストラクタ
        void set(char *ptr);
        void show();
};

//文字列オブジェクトを初期化する
strtype::strtype(){
    p = (char *) malloc(SIZE);  //malloc関数は引数の数分だけメモリを割り当てる
    if(!p){
        cout << "メモリ割り当てエラー\n";
        exit(1);
    }
    *p = '\0';
    len = 0;
}

//文字列オブジェクトを破棄する際にメモリを解放する
strtype::~strtype(){
    cout << "pを開放する\n";
    free(p);
}

void strtype::set(char *ptr){
    if(strlen(ptr) >= SIZE){
        cout << "文字列が大きすぎる\n";
        return;
    }
    strcpy(p, ptr);
    len = strlen(p);
}

void strtype::show(){
    cout << p << " - 長さ: " << len;
    cout << "\n";
}

int main(){
    strtype s1, s2;

    s1.set("This is a test.");
    s2.set("I like C++.");
    s1.show();
    s2.show();

    return 0;
}
