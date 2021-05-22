// 1からNをまでの総和を計算する再帰関数

#include <iostream>

int func(int N){
    //再帰関数を呼び出したことを報告する
    std::cout << "func(" << N << ")を呼び出しました" << std::endl;

    if(N==0) return 0;

    //再帰的に答えを求めて出力する
    int result = N + func(N-1);
    std::cout << N << " までの和 = " << result << std::endl;

    return result;
}

int main(){
    func(5);
}
