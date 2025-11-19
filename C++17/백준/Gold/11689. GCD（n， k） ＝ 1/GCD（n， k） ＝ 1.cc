#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    if (!(cin >> n)) return 0;

    long long nn = n;           // 분해용 복사본
    long long result = n;       // 오일러 피 함수 초기값

    for (long long p = 2; p * p <= nn; ++p) {
        if (nn % p == 0) {
            // p가 nn의 서로 다른 소인수일 때 한 번만 처리
            while (nn % p == 0) nn /= p;
            result = result - result / p;
        }
    }

    if (nn > 1) {
        // 마지막에 남은 소인수 (nn가 소수)
        result = result - result / nn;
    }

    cout << result << '\n';
    return 0;
}
