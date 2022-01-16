// 重み付きグラフの実装
#include <iostream>
#include <vector>

// ここでは重みを表す型をlong long 型とする
struct Edge {
    int to; // 隣接頂点番号
    long long w; //重み
    Edge(int to, long long w) : to(to), w(w) {}

};

// 各頂点の隣接リストを，辺集合で表す
using Graph = std::vector<std::vector<Edge>>;

int main() {
    // 頂点数と辺数
    int N, M;
    std::cin >> N >> M;

    // グラフ
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        long long w;
        std::cin >> a >> b >> w;
        G[a].push_back(Edge(b, w));
    }
}
