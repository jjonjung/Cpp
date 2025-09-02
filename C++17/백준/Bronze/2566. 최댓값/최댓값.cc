#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int maxVal = -1, maxR = 1, maxC = 1;
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= 9; ++j) {
            int x; 
            if (!(cin >> x)) return 0;   
            if (x > maxVal) {
                maxVal = x;
                maxR = i;
                maxC = j;
            }
        }
    }
    cout << maxVal << "\n" << maxR << ' ' << maxC << "\n";
    return 0;
}
