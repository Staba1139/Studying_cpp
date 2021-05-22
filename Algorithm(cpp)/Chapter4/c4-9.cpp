//部分和問題を再帰関数を用いる全探索で解く
#include <iostream>
#include <vector>

bool func(int i, int w, const std::vector<int> &a){
    //Base Case
    if(i == 0){
        if(w == 0) return true;
        else return false;
    }

    //a[i - 1]を選ばない場合
    if(func(i-1, w, a)) return true;

    //a[i - 1]を選ぶ場合
    if(func(i-1, w-a[i-1], a)) return true;

    //どちらもfalse の場合は false
    return false;
}

int main(){
    //Input
    int N, W;
    std::cin >> N >> W;
    std::vector<int> a(N);
    for(int i = 0; i < W; ++i) std::cin >> a[i];

    //再帰的に解く
    if(func(N, W, a)) std::cout << "Yes" << std::endl;
    else std::cout << "No" << std::endl;
}
