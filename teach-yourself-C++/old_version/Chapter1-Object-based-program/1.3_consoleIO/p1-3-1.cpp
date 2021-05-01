//従業員の労働時間と時給を入力し，
//その従業員の合計賃金を表示するプログラム

#include <iostream>
using namespace std;

int main(){
    int labor_time, hourly_wage;
    cout << "従業員の労働時間と時給を入力・・・\n";
    cin >> labor_time >> hourly_wage;
    cout << "合計賃金: ￥" << labor_time * hourly_wage;

    return 0;
}