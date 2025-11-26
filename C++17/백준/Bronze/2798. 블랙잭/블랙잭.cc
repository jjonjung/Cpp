#include <bits/stdc++.h>
using namespace std;

/*
 정렬, 투 포인터 
*/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    int M;
    if (!(cin >> N >> M)) return 0;

    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    sort(a.begin(), a.end());

    int ans = 0;

    for (int i = 0; i < N - 2; ++i) {
        int l = i + 1;
        int r = N - 1;

        while (l < r) {
            int s = a[i] + a[l] + a[r];

            if (s > M) {
                --r;
            } else {
                if (s > ans) ans = s;

                if (ans == M) {
                    cout << ans << '\n';
                    return 0;
                }

                ++l;
            }
        }
    }

    cout << ans << '\n';
    return 0;
}
