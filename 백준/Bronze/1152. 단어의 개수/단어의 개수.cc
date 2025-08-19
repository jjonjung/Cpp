#include <iostream>
#include <string>
#include <sstream>   // istringstream

int main() {
    std::string line;
    std::getline(std::cin, line); // 공백 포함해서 한 줄 입력 받기

    std::istringstream iss(line); // 문자열을 공백 기준으로 잘라주는 도구
    std::string word;
    int count = 0;

    while (iss >> word) { // 단어 하나씩 추출
        count++;
    }

    std::cout << count << '\n';
    return 0;
}