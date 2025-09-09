#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;
    bool paper[100][100] = {false};

    while (n--) {
        int x, y; 
        cin >> x >> y; 
        for (int i = x; i < x + 10; ++i)
            for (int j = y; j < y + 10; ++j)
                paper[i][j] = true;
    }

    int area = 0;
    for (int i = 0; i < 100; ++i)
        for (int j = 0; j < 100; ++j)
            if (paper[i][j]) ++area;

    cout << area << '\n';
    return 0;
}
