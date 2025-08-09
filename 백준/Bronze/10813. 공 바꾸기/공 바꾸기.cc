#include <bits/stdc++.h> // <iostream>, <vector>, <algorithm> 포함

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, M;
    std::cin >> N >> M;

    std::vector<int> basket(N + 1);
    for (int i = 1; i <= N; ++i) {
        basket[i] = i; // 초기 상태: i번 바구니에 공 i
    }

    while (M--) {
        int i, j;
        std::cin >> i >> j;
        std::swap(basket[i], basket[j]);
    }

    for (int i = 1; i <= N; ++i) {
        std::cout << basket[i] << (i == N ? '\n' : ' ');
    }

    return 0;
}
