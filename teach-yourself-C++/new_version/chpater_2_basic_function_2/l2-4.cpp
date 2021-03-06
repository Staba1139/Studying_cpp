//共用体のメンバ変数のアドレス

#include <iostream>

union U{
    int a;
    int b;
    int c;
};

int main(){
    U u;

    std::cout << "u.aのアドレスは: " << u.a << std::endl;
    std::cout << "u.bのアドレスは: " << u.b << std::endl;
    std::cout << "u.cのアドレスは: " << u.c << std::endl;
}
