#include <iostream>
using namespace std;

int main() {

    long long N, k;
    if (!(cin >> N >> k)) 
        return 0;

    long long lo = 1;
    long long hi = N * 1ll * N;
    long long ans = hi;

    while (lo <= hi) {
        long long mid = (lo + hi) >> 1;

        long long cnt = 0;
        for (long long i = 1; i <= N; ++i) {
            long long add = mid / i;
            if (add > N) add = N;
            cnt += add;
            if (cnt >= k) 
                break; 
        }

        if (cnt >= k) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    cout << ans << '\n';
    return 0;
}