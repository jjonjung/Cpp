#include <iostream>
using namespace std;

int main() {
    int T; // 테스트 케이스 수
    cin >> T;

    for (int i = 1; i <= T; ++i) {
        int A, B;
        cin >> A >> B; // 각 테스트 케이스에서 A와 B 입력
        cout << "Case #" << i << ": " << A + B << '\n';
    }

    return 0;
}
