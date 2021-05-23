//一般化した二分探索法の基本形
#include <iostream>

// x が条件を満たすかどうか
bool P(int x) {

}

//P(x) = true となる最小の整数 x を返す
int binary_search() {
    int left, right; //P(left) = false, P(right) = trueとなるように

    while (right - left > 1) {
        int mid = left + (right - left) / 2;
        if (P(mid)) right = mid;
        else left = mid;
    }

    return right;
}

int main(){

}
