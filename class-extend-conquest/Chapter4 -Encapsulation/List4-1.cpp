#include <iostream>
using namespace std;

class Book {
    private:
        int page;

    public:
        int getPage();
        void setPage(int p);

};

//メンバ関数の実装
int Book::getPage(){
    return page;
}

void Book::setPage(int p){
    if((p >= 1) && (p <= 1000)){
        page = p;
    }
    else {
        cout << "1~1000を指定してください!" << "\n";
    }
}

int main(){
    Book bk;
    
    //メンバ変数に適切な値を代入
    bk.setPage(123);

    //メンバ変数の値を表示
    cout << bk.getPage() << "\n";

    //メンバ変数に不適切な値を代入
    bk.setPage(114514);

    //メンバ変数の値を表示
    cout << bk.getPage() << "\n";

    return 0;
}