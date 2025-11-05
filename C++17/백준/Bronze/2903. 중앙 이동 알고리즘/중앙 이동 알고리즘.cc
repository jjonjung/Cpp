#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    if (!(cin >> N)) return 0;
    long long side = (1LL << N) + 1; // 2^N + 1
    cout << side * side << '\n';
    return 0;
}
