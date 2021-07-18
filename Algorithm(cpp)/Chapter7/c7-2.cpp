//区間スケジューリング問題に対する貪欲法
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

//区間を pair<int, int>で表す
using Interval = std::pair<int, int>;

//区間を終端時刻で大小比較する関数
bool cmp(const Interval &a, const Interval &b) {
    return a.second < b.second;
}

int main(){
    //Input
    int N;
    std::cin >> N;
    std::vector<Interval> inter(N);
    for (int i = 0; i < N; ++i)
        std::cin >> inter[i].first >> inter[i].second;

    // 終端時刻が早い順にソートする
    std::sort(inter.begin(), inter.end(), cmp);

    // 貪欲に選ぶ
    int res = 0;
    int current_end_time = 0;
    for (int i = 0; i < N; ++i) {
        //最後に選んだ区間とかぶるのは除く
        if (inter[i].first < current_end_time) continue;

        ++res;
        current_end_time = inter[i].second;
    }

    std::cout << res << std::endl;
}
