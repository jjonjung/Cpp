#include <iostream>
using namespace std;

int main() {
    int N;
    if (!(cin >> N)) return 0;

    int k = 1;
    while (1 + 3 * k * (k - 1) < N) {
        ++k;
    }

    cout << k << '\n';
    return 0;
}
