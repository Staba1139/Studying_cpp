//ペア和の最小値を求める (K以上の範囲)

#include <iostream>
#include <vector>

const int INF = 20000000;       // 十分大きな値にする

int main(){
    //入力を受け取る
    int N, K;
    std::cin >> N >> K;
    std::vector<int> a(N), b(N);
    for(int i = 0; i < N; i++) std::cin >> a[i];
    for(int i = 0; i < N; i++) std::cin >> b[i];

    //線形探索
    int min_value = INF;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            //和がK未満の場合は捨てる
            if(a[i] + b[j] < K) continue;

            //最小値を更新
            if(a[i] + b[j] < min_value){
                min_value = a[i] + b[j];
            }
        }
    }

    //結果出力
    std::cout << min_value << std::endl;

}
