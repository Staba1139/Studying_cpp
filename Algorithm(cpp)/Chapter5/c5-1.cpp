//Frog問題を動的計画法で解く
#include <iostream>
#include <vector>

const long long INF = 1LL << 60;    //十分大きな値とする(ここでは2^60)

int main(){
    //Input
    int N;
    std::cin >> N;
    std::vector<long long> h(N);
    for(int i = 0; i < N; ++i) std::cin >> h[i];

    //配列 dp を定義 (配列全体を無限大を表す値に初期化)
    std::vector<long long> dp(N, INF);

    //初期条件
    dp[0] = 0;

    //ループ
    for(int i = 1; i < N; ++i){
        if(i == 1) dp[i] = abs(h[i] - h[i - 1]);
        else dp[i] = std::min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
    }

    //答え
    std::cout << dp[N - 1] << std::endl;
}
