#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <limits>

using namespace std;

int N;
vector<pair<long long,long long>> P;
long long SUMX, SUMY;
double a;

void dfs(int idx, int cnt, long long xsum, long long ysum) {
    if (cnt == N/2) {
        long long vx = 2 * xsum - SUMX;
        long long vy = 2 * ysum - SUMY;
        double len = sqrt((long double)vx*vx + (long double)vy*vy);
        if (len < a) a = len;
        return;
    }
    if (idx == N) return;
    if (cnt + (N - idx) < N/2) return;

    dfs(idx + 1, cnt + 1, xsum + P[idx].first, ysum + P[idx].second);
    dfs(idx + 1, cnt, xsum, ysum);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        cin >> N;
        P.assign(N, make_pair(0LL,0LL));
        SUMX = SUMY = 0;
        for (int i = 0; i < N; ++i) {
            cin >> P[i].first >> P[i].second;
            SUMX += P[i].first;
            SUMY += P[i].second;
        }

        a = numeric_limits<double>::infinity();

        dfs(1, 1, P[0].first, P[0].second);

        cout << fixed << setprecision(12) << a << '\n';
    }
    return 0;
}