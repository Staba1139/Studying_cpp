/*
myclassクラスを作成，ob1オブジェクトとob2オブジェクトの変数aの値を設定して，各オブジェクトの変数aの値を表示する
*/

#include <iostream>
using namespace std;

class myclass{
    //myclassクラスの非公開メンバ
    int a;
public:
    void set_a(int num);
    int get_a();
};

void myclass::set_a(int num){
    a = num;
}

int myclass::get_a(){
    return a;
}

int main(){
    myclass ob1, ob2;

/*
    ob1.a = 10;
    ob2.a = 99;
    なんてことはできないヨ
    (メンバ関数意外からは非公開メンバにアクセスできないから)
*/

    ob1.set_a(10);
    ob2.set_a(99);

    cout << ob1.get_a() << "\n";
    cout << ob2.get_a() << "\n";

    return 0;

}
