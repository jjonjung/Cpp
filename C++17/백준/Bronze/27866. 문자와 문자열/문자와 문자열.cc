#include <iostream>
#include <string>
using namespace std;

int main() {
    string S; 
    int i;
    cin >> S >> i; // 단어와 정수 입력
    cout << S[i - 1] << "\n"; // i번째 글자 출력 (인덱스는 0부터 시작)
    return 0;
}
