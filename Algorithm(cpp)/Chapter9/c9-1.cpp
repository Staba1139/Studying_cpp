// スタックの実装
#include <iostream>
#include <vector>
const int MAX = 100000; // スタックの最大サイズ

int st[MAX];    // スタックを表す配列
int top = 0;    // スタックの先頭を表す添字

// スタックの初期化
void init(){
    top = 0;    // スタックの添字を初期位置に
}

// スタックが空かどうか判定する
bool isEmpty(){
    return (top == 0);  // スタックサイズが0かどうか
}

// スタックが満杯かどうかを判定する
bool isFull() {
    return (top == MAX);    //スタックサイズがMAXかどうか
}

// push
void push(int x) {
    if (isFull()) {
        std::cout << "error: stack is full." << std::endl;
        return;
    }
    st[top] = x;    //　x を格納して
    ++top;          // topをすすめる
}

// pop
int pop(){
    if(isEmpty()) {
        std::cout << "error: stack is empty." << std::endl;
        return -1;
    }
    --top;  // topをデクリメントして
    return st[top]; // top の位置にある要素を返す

}

int main() {
    init();     // スタックの初期化

    push(3);    // スタックに3を挿入する    {} -> {3}

    push(5);    // スタックに5を挿入する    {3} -> {3, 5}

    push(7);    // スタックに7を挿入する    {3, 5} -> {3, 5, 7}

    std::cout << pop() << std::endl;    // 7の出力
    std::cout << pop() << std::endl;    // 5の出力

    push(9);    // 新たに9を挿入する {3} -> {3, 9}
}
