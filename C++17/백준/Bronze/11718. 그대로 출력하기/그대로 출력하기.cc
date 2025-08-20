#include <iostream>
#include <string>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string line;
    while (std::getline(std::cin, line)) {   // EOF까지 읽기
        std::cout << line << '\n';
    }
    return 0;
}
