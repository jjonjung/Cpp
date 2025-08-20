#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string word;
    std::cin >> word;

    bool isPalindrome = true;
    int len = word.size();

    for (int i = 0; i < len / 2; i++) {
        if (word[i] != word[len - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    std::cout << (isPalindrome ? 1 : 0);
    return 0;
}
