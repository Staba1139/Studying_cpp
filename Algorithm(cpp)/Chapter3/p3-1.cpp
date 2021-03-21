/*
3.1 N個の整数a0~a(N-1)から整数値ai=vを満たすiを探す以下のコードに付いて考える。
c3-2においてbreak処理を省略したもの。条件を満たすiが複数通りあった場合は、
変数found_idには、そのうちiの値が最大のものが格納されることを確認せよ。
*/

//特定の要素の存在する「添字」も取得する
#include <iostream>
#include <vector>

int main(){
    //入力を受け取る
    int N, v;
    std::cin >> N >> v;
    std::vector<int> a(N);
    for(int i = 0; i < N; i++) std::cin >> a[i];

    //線形探索
    int found_id = -1;      //初期値は-1などありえない値にする
    for(int i = 0; i < N; i++){
        if(a[i] == v){
            if(found_id < i){
                found_id = i;
            }
        }
    }

    //結果出力 (-1のときは見つからなかったことを表す)
    std::cout << found_id << std::endl;
}