#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    if (!(std::cin >> N)) return 0;

    std::vector<std::pair<int, int>> v; 
    v.reserve(N);

    for (int i = 1; i <= N; ++i) {
        int x; std::cin >> x;
        v.emplace_back(x, i);
    }

    std::stable_sort(v.begin(), v.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.first < b.first;
        });

    int maxShift = 0;
    for (int i = 0; i < N; ++i) {
        int originalIndex = v[i].second; 
        int sortedIndex = i + 1;        
        if (originalIndex - sortedIndex > maxShift)
            maxShift = originalIndex - sortedIndex;
    }

    std::cout << (maxShift + 1) << '\n';
    return 0;
}
