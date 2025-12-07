
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    unordered_map<string, string> mp;
    mp.reserve(N * 2);            
    mp.max_load_factor(0.7);

    for (int i = 0; i < N; i++) {
        string site, pw;
        cin >> site >> pw;
        mp[site] = pw;
    }

    while (M--) {
        string query;
        cin >> query;
        cout << mp[query] << "\n"; 
    }

    return 0;
}

