// 配列 (std::vector)の使い方
#include <iostream>
#include <vector>

int main() {
    std::vector<int> a = {4, 3, 12, 7, 11, 9, 8, 14, 6};

    // 0 番目の要素を出力 (4)
    std::cout << a[0] << std::endl;

    // 2 番目の要素を出力 (12)
    std::cout << a[2] << std::endl;

    // 2 番目の要素を5に書き換える
    a[2] = 5;

    // 2 番目の要素を出力 (5)
    std::cout << a[2] << std::endl;
}