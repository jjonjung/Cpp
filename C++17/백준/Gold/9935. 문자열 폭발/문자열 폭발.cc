#include <bits/stdc++.h>
using namespace std;

vector<int> build_lps(const string &pat) {
    int m = pat.size();
    vector<int> lps(m, 0);
    int len = 0;
    for (int i = 1; i < m; ++i) {
        while (len > 0 && pat[i] != pat[len]) {
            len = lps[len - 1];
        }
        if (pat[i] == pat[len]) {
            ++len;
            lps[i] = len;
        } else {
            lps[i] = 0;
        }
    }
    return lps;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S, P;
    if (!(cin >> S)) return 0;
    cin >> P;

    int n = S.size();
    int m = P.size();
    vector<int> lps = build_lps(P);

    vector<char> res;
    res.reserve(n); 
    vector<int> matched;
    matched.reserve(n);

    for (char c : S) {
        int prev = matched.empty() ? 0 : matched.back();

        while (prev > 0 && c != P[prev]) {
            prev = lps[prev - 1];
        }
        if (c == P[prev]) ++prev;

        res.push_back(c);
        matched.push_back(prev);

        if (prev == m) {
            for (int k = 0; k < m; ++k) {
                res.pop_back();
                matched.pop_back();
            }
         }
    }

    if (res.empty()) {
        cout << "FRULA\n";
    } else {
        string out;
        out.reserve(res.size());
        for (char c : res) out.push_back(c);
        cout << out << '\n';
    }
    return 0;
}
