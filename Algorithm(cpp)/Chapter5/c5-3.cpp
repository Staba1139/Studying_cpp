//Frog問題を「緩和」を意識した動的計画法で解く
#include <iostream>
#include <vector>

template<class T> void chmin(T& a, T b){
    if(a > b){
        a = b;
    }
}

const long long INF = 1LL << 60; //十分大きい値とする (ここでは2^60)

int main(){
    //Input
    int N;
    std::cin >> N;
    std::vector<long long> h(N);
    for(int i = 0; i < N; ++i) std::cin >> h[i];

    //初期化 (最小化問題なので、INFに初期化)
    std::vector<long long> dp(N, INF);

    //初期条件
    dp[0] = 0;

    //ループ
    for (int i = 1; i < N; ++i){
        chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
        if(i > 1){
            chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
        }
    }

    //答え
    std::cout << dp[N - 1] << std::endl;
}
