#include <iostream>
#include <cstring>
using namespace std;

//クラスの定義
class Employee {
    public:
        int number;
        char name[80];
        int salary;
        void showData();
};


//メンバ関数の実装
void Employee::showData(){
    cout << number << "\n";
    cout << name << "\n";
    cout << salary << "\n";
}

//クラスの定義
class MySample {
    public:
        //オブジェクトのポインタを引数とするメンバ関数
        void useObject(Employee *obj);
        //オブジェクトのポインタを戻り値とするメンバ関数
        Employee* retObject();
};


//メンバ関数の実装
void MySample::useObject(Employee *obj){
    obj->showData();
}

Employee* MySample::retObject(){
    static Employee obj;
    obj.number = 1234;
    strcpy(obj.name,"田中一郎");
    obj.salary = 200000;

    return &obj;
}


//クラスを使う側のコード
int main(){
    Employee *someone;
    MySample ms;

    //オブジェクトのポインタを取得
    someone = ms.retObject();

    //オブジェクトのポインタを関数に渡す
    ms.useObject(someone);

    return 0;
}