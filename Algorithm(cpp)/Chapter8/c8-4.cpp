// 連結リストを，挿入操作を用いて構築する
#include <iostream>
#include <string>
#include <vector>

// 連結リストの各ノードを表す構造体
struct Node {
    Node* next; // 次がどのノードを指すか
    std::string name;    // ノードに付随している値

    Node(std::string name_ = "") : next(NULL), name(name_) {}
};

// 番兵を表すノードをグローバル領域においておく
Node* nil;

//Initialization
void init() {
    nil = new Node();
    nil->next = nil;    // 初期状態では nil が nil を指すようになる
}

// 連結リストを出力する
void printList() {
    Node* cur = nil->next;  //先頭から出発
    for (; cur != nil; cur = cur->next) {
        std::cout << cur->name << "->";
    }
    std::cout << std::endl;
}

// ノードpの直後にノードvを挿入する
// ノードpのデフォルト引数をnilとしておく
// そのため insert(v)を呼び出す操作は，リストの先頭への挿入を表す
void insert(Node* v, Node* p = nil) {
    v->next = p->next;
    p->next = v;
}

int main() {
    //Initialization
    init();

    // 作りたいノードの名前の一覧
    // 最後尾のノード( 「山本」 )から順に挿入することに注意する
    std::vector<std::string> names = {"yamamoto",
                                    "watanabe",
                                    "ito",
                                    "takahashi",
                                    "suzuki",
                                    "sato"};

    // 各ノードを生成して，連結リストの先頭に挿入していく
    for (int i = 0; i < (int)names.size(); ++i) {
        // ノードを生成する
        Node* node = new Node(names[i]);

        // 作成したノードを連結リストの先頭に挿入する
        insert(node);

        // 各ステップの連結リストの様子を出力する
        std::cout << "step " << i << ": ";
        printList();
    }
}
