#include <iostream>
#include <string>

int main() {
    int T; 
    std::cin >> T;  // 테스트 케이스 개수 입력

    while (T--) {
        int R; 
        std::string S;
        std::cin >> R >> S;  // 반복 횟수 R, 문자열 S 입력

        std::string P = "";   // 결과 문자열 초기화

        for (char c : S) {
            for (int i = 0; i < R; i++) {
                P += c;
            }
        }

        std::cout << P << '\n';  
    }

    return 0;
}
