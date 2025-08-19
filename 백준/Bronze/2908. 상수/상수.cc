#include <iostream>
#include <string>
#include <algorithm> 

int main() {
    std::string A, B;
    std::cin >> A >> B;  // 세 자리 수 두 개 입력 (문자열로 받음)

    // 문자열 뒤집기
    std::reverse(A.begin(), A.end());
    std::reverse(B.begin(), B.end());

    // 뒤집은 문자열을 정수로 변환
    int a = std::stoi(A);
    int b = std::stoi(B);

    // 더 큰 수 출력
    if (a > b) {
        std::cout << a << '\n';
    } else {
        std::cout << b << '\n';
    }

    return 0;
}
