#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    long long ans = 0;

    vector<bool> col(N, false);
    vector<bool> diag1(2 * N - 1, false);
    vector<bool> diag2(2 * N - 1, false);

    function<void(int)> solve = [&](int row) {
        if (row == N) {
            ans++;
            return;
        }
        for (int c = 0; c < N; ++c) {
            int d1 = row + c;
            int d2 = row - c + (N - 1);
            if (col[c] || diag1[d1] || diag2[d2]) continue;

            col[c] = diag1[d1] = diag2[d2] = true;
            solve(row + 1);
            col[c] = diag1[d1] = diag2[d2] = false;
        }
    };

    solve(0);
    cout << ans << "\n";
    return 0;
}