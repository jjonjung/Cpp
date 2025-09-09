#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> a(5);
    for (int i = 0; i < 5; ++i) cin >> a[i];

    string out;
    for (int c = 0; c < 15; ++c) {           
        for (int r = 0; r < 5; ++r) {       
            if (c < (int)a[r].size()) out += a[r][c];
        }
    }
    cout << out;
    return 0;
}
