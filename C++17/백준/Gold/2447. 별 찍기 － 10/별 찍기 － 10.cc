#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            int x = i, y = j;
            bool isBlank = false;

            while (x > 0 || y > 0) {
                if (x % 3 == 1 && y % 3 == 1) {
                    isBlank = true;
                    break;
                }
                x /= 3;
                y /= 3;
            }

            cout << (isBlank ? ' ' : '*');
        }
        cout << '\n';
    }
    return 0;
}