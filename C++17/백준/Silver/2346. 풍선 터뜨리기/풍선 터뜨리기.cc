#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if (!(cin >> N)) return 0;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    vector<bool> alive(N, true);
    int remain = N;
    int cur = 0; 
    bool firstOut = true;

    while (remain > 0) {
        if (!firstOut) cout << ' ';
        cout << (cur + 1);
        firstOut = false;

        int step = a[cur];
        alive[cur] = false;
        --remain;
        if (remain == 0) break;

        if (step > 0) {
            int need = step;
            
            while (need > 0) {
                cur = (cur + 1) % N;
                if (alive[cur]) --need;
            }
        }
        else { 
            int need = -step;
            
            while (need > 0) {
                cur = (cur - 1 + N) % N;
                if (alive[cur]) --need;
            }
        }
    }

    cout << '\n';
    return 0;
}
