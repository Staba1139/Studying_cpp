//フィボナッチ数列を求める再帰関数をメモ化
#include <iostream>
#include <vector>

//fibo(N)の答えをメモ化する配列
std::vector<long long> memo;

long long fibo(int N){
    //Base Case
    if(N == 0) return 0;
    else if(N == 1) return 1;

    //メモをチェック(すでに計算済みの場合答えをリターン)
    if (memo[N]!= -1) return memo[N];

    //答えをメモ化しながら、再帰呼び出し
    return memo[N] = fibo(N - 1) + fibo(N - 2);

}

int main(){
    //メモ化配列を-1で初期化する
    memo.assign(50, -1);

    //fibo(49)を呼び出す
    fibo(49);

    //memo[0], ..., memo[49]に答えが格納されている
    for(int N = 2; N < 50; ++N){
        std::cout << N << " 項目： " << memo[N] << std::endl;
    }
}
