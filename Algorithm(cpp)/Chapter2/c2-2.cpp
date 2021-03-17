#include <iostream>
#include <ctime>
#include <cstdio>

int main(){
    int N;
    std::cin >> N;
    long cpu_time;

    int count = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            ++count;
        }
    }
    cpu_time = clock(); 
    std::cout << "CPU Time: " << cpu_time / CLOCKS_PER_SEC << std::endl;

}
