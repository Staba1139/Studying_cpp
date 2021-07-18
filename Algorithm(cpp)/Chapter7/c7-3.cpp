// AtCoder Grand Contest 009 A - Multiple Arrayの解答例
#include <iostream>
#include <vector>

int main() {
    //Input
    int N;
    std::cin >> N;
    std::vector<long long> A(N), B(N);
    for (int i = 0; i < N; ++i) std::cin >> A[i] >> B[i];

    //Answer
    long long sum = 0;
    for (int i = N - 1; i >= 0; --i) {
        A[i] += sum;    // 前回までの操作回数を足す
        long long amari = A[i] % B[i];
        long long D = 0;
        if (amari != 0) D = B[i] - amari;
        sum += D;
    }

    std::cout << sum << std::endl;
}
