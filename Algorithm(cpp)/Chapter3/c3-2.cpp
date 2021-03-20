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
            found_id = i;
            break;
        }
    }

    //結果出力 (-1のときは見つからなかったことを表す)
    std::cout << found_id << std::endl;
}