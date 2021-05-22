//区間ごと二分割する方法を最適化する
#include <iostream>
#include <vector>

template<class T> void chmin(T& a, T b) { 
    if(a > b) {
        a = b;
    }
}

const long long INF = 1LL << 60;    //十分大きな値 (ここでは2^60)

int main(){
    //Input
    int N;
    std::cin >> N;
    std::vector<std::vector<long long>> c(N + 1, std::vector<long long>(N + 1));
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N + 1; ++j) {
            std::cin >> c[i][j];
        }
    }

    // DP テーブル定義
    std::vector<long long> dp(N + 1, INF);

    // DP 初期条件
    dp[0] = 0;

    // DP ループ
    for(int i = 0; i <= N; ++i) {
        for(int j = 0; j < i; ++j) {
            chmin(dp[i], dp[j] + c[j][i]);
        }
    }

    //Output
    std::cout << dp[N] << std::endl;

}
