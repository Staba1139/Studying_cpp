#include <iostream>

int main(){
    int N;
    std::cin >> N;

    int count = 0;
    for(int i = 0; i < N; i++){
        ++count;
    }
    std::cout << "finished\n" << std::endl;
}