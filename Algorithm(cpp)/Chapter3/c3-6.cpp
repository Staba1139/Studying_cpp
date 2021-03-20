//部分和問題に対するビットを用いる全探索解法

#include <iostream>
#include <vector>

int main(){
    // 入力受け取り
    int N, W;
    std::cin >> N >> W;
    std::vector<int> a(N);
    for(int i = 0; i < N; i++) std::cin >> a[i];

    //bitは2^N通りの部分集合全体を動く
    bool exist = false;
    for(int bit = 0; bit < (1 << N); bit++){
        int sum = 0;    //部分集合に含まれる要素の和
        for(int i = 0; i < N; i++){
            // i番目の要素a[i]が部分集合に含まれているかどうか
            if(bit & (1 << i)){
                sum += a[i];
            }
        }

        //sumがWに一致するかどうか
        if(sum == W) exist = true;
    }

    if(exist) std::cout << "Yes" << std::endl;
    else std::cout << "No" << std::endl;
}
