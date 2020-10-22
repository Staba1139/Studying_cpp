#include <iostream>
using namespace std;

//基本クラスの定義
class MyClass {
    public:
        void func1(int a);
        virtual void func2(const char *s);
};

//基本クラスのメンバ関数の実装
void MyClass::func1(int a){
    cout << a << "\n";

}

void MyClass::func2(const char *s){
    cout << s << "\n";

}

//派生クラスの定義
class NewClass : public MyClass {
    public:
        void func2(const char *s);
};

//派生クラスのメンバ関数の実装
void NewClass::func2(const char *s){
    cout << "文字列データ：";
    cout << s << "\n";
}

//クラスを使う側のコード
int main(){
    NewClass obj;
    obj.func1(2019);
    obj.func2("仙台高専　広瀬キャンパス");

    return 0;

}
