#include <iostream>

int main(){
    int a = 2;
    switch (a + 1){
        case 1:
            std::cout << "a + 1 は1です" << std::endl;
            break;

        case 2:
            std::cout << "a + 1は2です" << std::endl;
            break;

        default:
            std::cout << "a + 1は1でも2でもありません" << std::endl;
            break;

        case 3:
            std::cout << "a + 1は3です" << std::endl;
            break;

    }
}
