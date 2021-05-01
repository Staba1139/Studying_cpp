/*
図書館の図書目録の項目を管理するためのcardという名前のクラスを作成．
このクラスには本のタイトル，著者，在庫冊数を格納．
タイトルと著者を文字列，在庫冊数を整数として保存．
store()という公開メンバ関数を使用して本の情報を保存，
show()という公開メンバ関数を使用して情報を表示．
動作確認に簡単なmain()関数を用いよ．
*/
#include <iostream>
#include <cstring>
using namespace std;

class card{
    char title[80];
    char author[40];
    int stock;
public:
    void store(char *a, char *b, int num);
    void show();

};
void card::store(char *a, char *b, int num){
    strcpy(title, a);
    strcpy(author, b);
    stock = num;
}

void card::show(){
    cout << "タイトル：　" << title << "\n";
    cout << "著者：　" << author << "\n";
    cout << "在庫冊数：　" << stock << "\n";

}

int main(){
    char *a, *b;
    int num;


    cout << "本のタイトルを入力\n";
    cin >> a;
    cout << "著者を入力\n";
    cin >> b;
    cout << "在庫冊数を入力\n";
    cin >> num;
    card ob1;
    ob1.store(a, b, num);
    ob1.show();

    return 0;
}

