#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; 
    cin >> N;
    int answer = 0;

    while (N--) {
        string s;
        cin >> s;

        bool visited[26] = {false};
        char last = '\0';
        bool ok = true;

        for (char c : s) {
            if (c != last) {                      // 연속 구간이 끊어질 때만 검사
                int idx = c - 'a';
                if (visited[idx]) {               // 이전에 나온 적이 있는데 다시 등장 → 그룹 단어 아님
                    ok = false;
                    break;
                }
                visited[idx] = true;              // 첫 등장으로 표시
                last = c;                         // 현재 문자를 새 연속 구간의 기준으로
            }
            // c == last 인 경우는 같은 글자의 연속이므로 그대로 진행
        }

        if (ok) ++answer;
    }

    cout << answer << "\n";
    return 0;
}
