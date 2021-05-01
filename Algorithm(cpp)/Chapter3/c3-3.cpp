//最小値を求める

#include <iostream>
#include <vector>

const int INF = 20000000;       // 十分大きな値にする

int main(){
    //入力を受け取る
    int N;
    std::cin >> N;
    std::vector<int> a(N);
    for(int i = 0; i < N; i++) std::cin >> a[i];

    //線形探索
    int min_value = INF;
    for(int i = 0; i < N; i++){
        min_value = a[i];
    } 

    //結果出力
    std::cout << min_value << std::endl;
}
