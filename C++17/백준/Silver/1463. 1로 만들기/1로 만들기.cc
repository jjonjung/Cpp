#include <bits/stdc++.h>
using namespace std;

/*
  시간복잡도: O(N)
  공간복잡도: O(N)
*/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if (!(cin >> N)) return 0;

    vector<int> dp(N + 1, 0);
    dp[1] = 0;

    for (int i = 2; i <= N; ++i) {
        int best = dp[i - 1] + 1;

        if (i % 2 == 0) best = min(best, dp[i / 2] + 1);
        if (i % 3 == 0) best = min(best, dp[i / 3] + 1);

        dp[i] = best;
    }

    cout << dp[N] << '\n';
    return 0;
}
