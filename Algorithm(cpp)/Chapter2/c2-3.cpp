#include <iostream>
#include <cstdio>
#include <ctime>

int main(){
    int N;
    std::cin >> N;
    long cpu_time;

    for(int i = 2; i <= N; i += 2){
        std::cout << i << std::endl;
    }
    cpu_time = clock();
    std::cout << "CPU Time: " << cpu_time / CLOCKS_PER_SEC << std::endl;

}
