#include <iostream>
#include <string>
#include <vector>
#include <cctype>   // toupper

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string word;
    cin >> word;

    vector<int> freq(26, 0);

    // 1. 전부 대문자로 바꿔서 카운트
    for (char c : word) {
        char upper = toupper(c);
        freq[upper - 'A']++;
    }

    // 2. 최댓값과 알파벳 찾기
    int maxCount = 0;
    char result = '?';
    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            result = 'A' + i;
        }
        else if (freq[i] == maxCount) {
            result = '?';   // 최빈값이 두 개 이상이면 ?
        }
    }

    cout << result;
    return 0;
}
