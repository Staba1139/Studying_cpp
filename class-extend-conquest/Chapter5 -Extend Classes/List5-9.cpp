#include <iostream>
using namespace std;

class MyClass {
    public:
        int my_data;
        MyClass();
        MyClass(int m);
        ~MyClass();

};

//基本クラスの引数のないコンストラクタの実装
MyClass::MyClass(){
    my_data = -1;
    cout << "基本クラスの引数のないコンストラクタが呼び出されました! \n";
}

//基本クラスの引数のないコンストラクタの実装
MyClass::MyClass(int m){
    my_data = m;
    cout << "基本クラスの引数を持つコンストラクタが呼び出されました！\n";
}

//基本クラスのデストラクタの実装
MyClass::~MyClass(){
    cout << "基本クラスのデストラクタが呼び出されました！\n";

}

//派生クラスの定義
class NewClass : public MyClass {
    public:
    int new_data;
    NewClass();
    NewClass(int n, int m);
    ~NewClass();
};

//派生クラスの引数のないコンストラクタの実装
NewClass::NewClass(){
    new_data = -1;
    cout << "派生クラスの引数のないコンストラクタが呼び出されました！\n";

}

//派生クラスの引数を持つコンストラクタの実装
NewClass::NewClass(int n, int m) : MyClass(m){
    new_data = n;
    cout << "派生クラスの引数を持つコンストラクタが呼び出されました！\n";

}

//派生クラスのデストラクタの実装
NewClass::~NewClass(){
    cout << "派生クラスのデストラクタが呼び出されました！\n";

}

//クラスを使う側のコード
int main(){
    NewClass obj1;

    cout << obj1.my_data << "\n";
    cout << obj1.new_data << "\n";
    cout << "Arrrrrrrrrrrrthrrrrrrrrrr........... \n";

    NewClass obj2(123, 456);

    cout << obj2.my_data << "\n";
    cout << obj2.new_data << "\n";

    return 0;
}




