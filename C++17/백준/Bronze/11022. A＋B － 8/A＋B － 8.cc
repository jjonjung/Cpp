#include <iostream>
using namespace std;

int main() {
    int T; // 테스트 케이스 개수
    cin >> T;

    for (int i = 1; i <= T; ++i) {
        int A, B;
        cin >> A >> B;

        // 요구된 출력 형식으로 출력
        cout << "Case #" << i << ": " << A << " + " << B << " = " << A + B << '\n';
    }

    return 0;
}