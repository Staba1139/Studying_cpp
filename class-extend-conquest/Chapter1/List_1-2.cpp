#include <cstring>
#include <iostream>
using namespace std;

//構造体の定義
struct Employee{
    int number;
    char name[80];
    int salary;
};

//構造体の定義
struct Company{
    struct Employee tanaka;
    struct Employee sato;
    struct Employee suzuki;
    char companyName[80];
};

int main(){
    //構造体をデータ型とした変数を宣言
    struct Company sendai;

    sendai.tanaka.number = 1234;
    strcpy(sendai.tanaka.name, "田中一郎");
    sendai.tanaka.salary = 200000;
    sendai.sato.number = 1235;
    strcpy(sendai.sato.name, "佐藤次郎");
    sendai.sato.salary = 250000;
    sendai.suzuki.number = 1236;
    strcpy(sendai.suzuki.name, "鈴木三郎");
    sendai.suzuki.salary = 300000;
    strcpy(sendai.companyName,"仙台高専");

    cout << sendai.tanaka.number << "\n";
    cout << sendai.tanaka.name << "\n";
    cout << sendai.tanaka.salary << "\n";
    cout << sendai.sato.number << "\n";
    cout << sendai.sato.name << "\n";
    cout << sendai.sato.salary << "\n";
    cout << sendai.suzuki.number << "\n";
    cout << sendai.suzuki.name << "\n";
    cout << sendai.suzuki.salary << "\n";
    cout << sendai.companyName << "\n";

    return 0;

}