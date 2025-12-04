//빌드: O(N)
//쿼리: O(log N) (M개면 O(M log N))

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = (1LL<<60);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    if (!(cin >> N >> M)) return 0;
    
    int S = 1;
    while (S < N) S <<= 1;
    
    vector<ll> seg(2 * S, INF);
    
    for (int i = 0; i < N; ++i) {
        ll x; cin >> x;
        seg[S + i] = x;
    }
    
    for (int i = S - 1; i >= 1; --i) {
        seg[i] = min(seg[2*i], seg[2*i + 1]);
    }
    
    for (int q = 0; q < M; ++q) {
        int a, b; cin >> a >> b;
        if (a > b) swap(a, b);
        int l = S + (a - 1);
        int r = S + (b - 1);
        ll ans = INF;
        while (l <= r) {
            if ((l & 1) == 1) { // l 오른쪽 자식
                ans = min(ans, seg[l]);
                ++l;
            }
            if ((r & 1) == 0) { // r 왼쪽 자식
                ans = min(ans, seg[r]);
                --r;
            }
            l >>= 1;
            r >>= 1;
        }
        cout << ans << '\n';
    }
    
    return 0;
}
