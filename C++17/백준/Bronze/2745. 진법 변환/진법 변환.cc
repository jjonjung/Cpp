#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string N;
    int B;
    cin >> N >> B;

    int result = 0;
    for (char ch : N) {
        int value = ('0' <= ch && ch <= '9') ? ch - '0' : toupper(ch) - 'A' + 10;
        result = result * B + value;
    }
    cout << result << '\n';
    return 0;
}
