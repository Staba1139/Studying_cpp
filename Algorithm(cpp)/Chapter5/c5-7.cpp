//ナップサック問題に対する動的計画法
#include <iostream>
#include <vector>

template<class T> void chmax(T& a, T b){
    if(a < b){
        a = b;
    }
}

int main(){
    //Input
    int N; long long W;
    std::cin >> N >> W;
    std::vector<long long> weight(N), value(N);
    for(int i = 0; i < N; ++i) std::cin >> weight[i] >> value[i];

    //DPテーブル定義
    std::vector<std::vector<long long>> dp(N + 1, std::vector<long long>(W + 1, 0));

    //DPループ
    for(int i = 0; i < N; ++i){
        for(int w = 0; w <= W; ++w){
            //i番目の品物を選ぶ場合
            if(w - weight[i] >= 0){
                chmax(dp[i + 1][w], dp[i][w - weight[i]] + value[i]);
            }

            //i番目の品物を選ばない場合
            chmax(dp[i + 1][w],dp[i][w]);
        }
    }

    //最適値の出力
    std::cout << dp[N][W] <<std::endl;
}
