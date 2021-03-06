#include <iostream>

int main(){
    float f = -1234.5678f;  //負値の浮動小数点数
    std::cout << f << std::endl;

    int i = f;              //float から int への暗黙型変換
                            //符号は扱えるが小数部がすべて切り捨て
    std::cout << i << std::endl;

    unsigned int u = i;     //int から unsigned int への暗黙型変換
                            //負の数を扱えないので正数となる
    std::cout << u << std::endl;

    unsigned short s = u;         //unsigned int から unsigned shortへの暗黙型変換
                            //unsigned short で扱えない巨大な数になっているので
                            //unsigned short の範囲に収められる
    std::cout << s << std::endl;

    u = s;  //unsigned short からunsigned int への暗黙型変換
            //unsigned short にしたときに値が切り詰められているので，
            //前のunsigned int のときの値とは異なる
    std::cout << u << std::endl;

    f = u;  //unsigned int からfloatへの暗黙型変換
            //とても巨大な正数でなければおおよそ問題なし
    std::cout << f << std::endl;

}