#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    int B;
    if (!(cin >> N >> B)) return 0;

    if (N == 0) {
        cout << '0' << '\n';
        return 0;
    }

    string res;
    while (N > 0) {
        int rem = N % B;    
        if (rem < 10) res.push_back(char('0' + rem));
        else res.push_back(char('A' + (rem - 10))); 
        N /= B;
    }

    reverse(res.begin(), res.end()); 
    cout << res << '\n';
    return 0;
}
