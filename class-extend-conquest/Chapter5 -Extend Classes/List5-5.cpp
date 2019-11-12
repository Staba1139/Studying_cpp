#include <iostream>
#include <cstring>
using namespace std;

//Employeeクラスの定義
class Employee {
    public:
        int number;
        char name[80];
        int salary;
    protected:
        void showData();

};

//Employeeクラスのメンバ関数の実装
void Employee::showData(){
    cout << number << "\n";
    cout << name << "\n";
    cout << salary << "\n";
}

//Salesmanクラスの定義
class Salesman : public Employee {
    public:
        int sales;
        void showAllData();
};

//Salesmanクラスのメンバ関数の実装
void Salesman::showAllData(){
    //3つのメンバ変数の値を表示する
    showData();

    //追加されたメンバ変数の値を表示する
    cout << sales << "\n";

}

//クラスを使う側のコード
int main(){
    //Salesmanクラスのオブジェクトを作成する
    Salesman tanaka;

    //Salesmanクラスのメンバを利用する
    tanaka.number = 1234;
    strcpy(tanaka.name, "田中一郎");
    tanaka.salary = 200000;
    tanaka.sales = 9999;
    tanaka.showAllData();

    return 0;
}
