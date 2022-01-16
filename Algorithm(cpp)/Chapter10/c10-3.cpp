// グラフを入力として受け取る
#include <iostream>
#include <vector>
using Graph = std::vector<std::vector<int>>;

int main() {
    // 頂点数と辺数
    int N, M;
    std::cin >> N >> M;

    // グラフ
    Graph G(N);
    for(int i = 0; i < M; ++i) {
        int a, b;
        std::cin >> a >> b;
        G[a].push_back(b);

        // 無向グラフの場合は以下を追加
        // G[b].pushback(a);
    }
}
