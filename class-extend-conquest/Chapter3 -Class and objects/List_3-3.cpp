#include <cstring>
#include "List3-1_Employee.h"

int main(){

    //オブジェクト作成
    Employee tanaka;

    //メンバ関数にデータを設定
    tanaka.number = 1234;
    strcpy(tanaka.name, "田中一郎");
    tanaka.salary = 200000;

    //メンバ関数を呼び出す
    tanaka.showData();

    return 0;

}
