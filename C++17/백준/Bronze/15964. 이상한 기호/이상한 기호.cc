#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long A, B;
    std::cin >> A >> B;

    long long result = (A + B) * (A - B);
    std::cout << result << '\n';

    return 0;
}