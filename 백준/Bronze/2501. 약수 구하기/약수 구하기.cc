#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    if (!(cin >> N >> K)) return 0;

    int cnt = 0;
    for (int i = 1; i <= N; ++i) {
        if (N % i == 0) {
            ++cnt;
            if (cnt == K) {
                cout << i << '\n';
                return 0;
            }
        }
    }

    cout << 0 << '\n';
    return 0;
}
