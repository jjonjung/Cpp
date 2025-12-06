#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if (!(cin >> N)) return 0;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    set<int> s;                    
    vector<int> depth(N + 1, -1);   
    long long C = 0;

    s.insert(a[0]);
    depth[a[0]] = 0;
    cout << 0 << '\n';

    for (int i = 1; i < N; ++i) {
        int x = a[i];
        auto it = s.lower_bound(x);
        int dl = -1; 
        int dr = -1;
        if (it != s.end()) {
           
            dr = depth[*it];
        }
        if (it != s.begin()) {
            auto it2 = it;
            --it2;
            dl = depth[*it2];
        }
        int d = max(dl, dr) + 1; 
        depth[x] = d;
        s.insert(x);
        C += d;              
        cout << C << '\n';
    }
    return 0;
}
