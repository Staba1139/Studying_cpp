//配列の長さ

#include <iostream>

int main(){
    int array[10] = {};
    std::cout << "sizeof(array): " << sizeof(array) << std::endl;

    //配列のサイズを要素の型で割ると配列の長さがわかる
    std::size_t length = sizeof(array) / sizeof(int);

    std::cout << "array[" << length << "]" << std::endl;

    //配列の要素を使用すると，型が変更されても要素の型も同様に変更されるので，
    //正しく長さがわかる
    length = sizeof(array) / sizeof(array[0]);
    std::cout << "array[" << length << "]" << std::endl;
}
