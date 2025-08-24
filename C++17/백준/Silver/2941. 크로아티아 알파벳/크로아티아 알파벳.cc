#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    int n = s.size(), cnt = 0;
    for (int i = 0; i < n; ) {
        if (i + 2 < n && s.substr(i,3) == "dz=") { i += 3; }
        else if (i + 1 < n) {
            string two = s.substr(i,2);
            if (two=="c=" || two=="c-" || two=="d-" || two=="lj" ||
                two=="nj" || two=="s=" || two=="z=") { i += 2; }
            else { i += 1; }
        } else { i += 1; }
        cnt++;
    }
    cout << cnt << '\n';
    return 0;
}
