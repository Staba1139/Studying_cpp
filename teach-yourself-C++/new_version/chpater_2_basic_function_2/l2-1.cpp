//リスト2.1 構造体を使った商品の管理

#include <iostream>

struct product{
    int id;     //商品ID
    int price;  //単価
    int stock;  //在庫数
};              //(ここのセミコロンに注意する．)

int main(){
    product pen;    //ペンに関するデータを持つ変数

    //ドット演算子を用いてペンに関する情報をメンバ関数に格納する
    pen.id = 0;
    pen.price = 100;
    pen.stock = 200;

    product* ptr = &pen;    //構造体変数へのポインター

    //アロー演算子を用いてメンバ関数を取得する
    std::cout << "商品ID: " << ptr->id << std::endl;
    std::cout << "単価: " << ptr->price << std::endl;
    std::cout << "在庫数: " << ptr->stock << std::endl;
}
