//列挙体変数の宣言と初期化

#include <iostream>

enum class Cateogry{
    Value1,         // 先頭は明示的に指定しない限り暗黙的に0
    Value2,         // 値を省略した場合には1つ上の整数の次（この場合は1）
    Value3 = 100,   // ひとつ上の次の整数だと困る場合に明示的に指定できる
    Value4,         // サイド省略した場合にはひとつ上の整数の次（この場合は101）
};

int main(){

    //列挙体の変数を宣言してValue3で初期化
    Cateogry cat = Cateogry::Value3;


    //列挙体の値に対応した整数を得る
    std::cout << static_cast<int>(cat) << std::endl;
}
