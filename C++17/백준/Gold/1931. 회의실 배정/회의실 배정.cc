#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if (!(cin >> N)) return 0;

    vector<pair<ll,ll>> meetings; 
    meetings.reserve(N); //reserve로 공간 미리 확보
    for (int i = 0; i < N; ++i) {
        ll s, e;
        cin >> s >> e;
        meetings.emplace_back(e, s);
    }

    sort(meetings.begin(), meetings.end(), [](const pair<ll,ll>& a, const pair<ll,ll>& b) {
        if (a.first != b.first) return a.first < b.first;
        return a.second < b.second;
    });

    ll current_end = -1; 
    int count = 0;

    for (const auto& p : meetings) {
        ll end = p.first;
        ll start = p.second;
        if (start >= current_end) {
            ++count;
            current_end = end;
        }
    }

    cout << count << '\n';
    return 0;
}