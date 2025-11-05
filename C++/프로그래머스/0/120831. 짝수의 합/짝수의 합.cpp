#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i = 2; i <= n; i += 2) {  // 2부터 n까지 2씩 증가
        answer += i;
    }
    return answer;
}

int main() {
    int n;
    cin >> n;
    cout << solution(n);
    return 0;
}
