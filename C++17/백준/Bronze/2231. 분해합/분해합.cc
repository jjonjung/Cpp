#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if (!(cin >> N)) return 0;

    int digits = to_string(N).size();
    int start = max(1, N - 9 * digits);
    int answer = 0;

    for (int i = start; i < N; ++i) {
        int sum = i;
        int x = i;
        
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        if (sum == N) {
            answer = i;
            break;
        }
    }

    cout << answer << '\n';
    return 0;
}
