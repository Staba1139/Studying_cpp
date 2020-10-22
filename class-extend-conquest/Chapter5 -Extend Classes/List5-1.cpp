#include <iostream>
#include <cstring>
using namespace std;

//Employeeクラスの定義
class Employee {
    public:
        int number;
        char name[80];
        int salary;

        void showData();    //メンバ変数の値を表示

};

//Employeeクラスのメンバ関数の実装
void Employee::showData(){
    cout << number << "\n";
    cout << name << "\n";
    cout << salary << "\n";
}

//Salesmanクラスの定義
class Salesman : public Employee {
    //メンバなし
};

//クラスを使う側のコード
int main(){
    //Salesmanクラスのオブジェクトを作成
    Salesman tanaka;

    //Salesmanクラスのメンバを利用する
    tanaka.number = 1234;
    strcpy(tanaka.name, "田中一郎");
    tanaka.salary = 200000;
    tanaka.showData();

    return 0;

}

