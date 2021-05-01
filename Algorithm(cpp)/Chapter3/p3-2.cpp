/*
3.2 N個の整数a0~a(N-1)のうち、整数値vが何個含まれるかを求めるO(N)のアルゴリズムを設計せよ。
*/

#include <iostream>
#include <vector>

int main(){
    int N, v;
    std::cin >> N >> v;
    std::vector<int> a(N);
    int i;
    for(i=0;i<N;i++) std::cin >> a[i];

    int i;
    int count = 0;
    for(i=0;i<N;i++){
        if(a[i] == v){
            count++;
        }
    }

    std::cout << count << std::endl;
}
