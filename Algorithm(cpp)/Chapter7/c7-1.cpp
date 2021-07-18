// コイン問題を解く貪欲法
#include <iostream>
#include <vector>

const std::vector<int> value = {500, 100, 50, 10, 5, 1};

int main() {
    //Input
    int X;
    std::vector<int> a(6);
    std::cin >> X;
    for(int i = 0; i < 6; ++i) std::cin >> a[i];

    //貪欲法
    int result = 0;
    for (int i = 0; i < 6; ++i ) {
        //枚数制限がない場合の枚数
        int add = X / value[i];

        //枚数制限を考慮する
        if (add > a[i]) add = a[i];

        //残り金額を求めて，答えに枚数を加算する
        X -= value[i] * add;
        result += add;
    }

    std::cout << result << std::endl;
}
