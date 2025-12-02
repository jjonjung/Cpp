//O(N)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if (!(cin >> N)) return 0;

    vector<pair<ll,ll>> pts(N);
    for (int i = 0; i < N; ++i) {
        cin >> pts[i].first >> pts[i].second; // x, y
    }

    long long sum = 0;
    for (int i = 0; i < N; ++i) {
        int j = (i + 1) % N;
        sum += pts[i].first * pts[j].second - pts[j].first * pts[i].second;
    }

    double area = std::abs((double)sum) / 2.0;

    cout.setf(std::ios::fixed);
    cout << setprecision(1) << area << '\n';
    return 0;
}
