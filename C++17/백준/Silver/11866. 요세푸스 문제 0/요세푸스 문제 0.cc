/*
//큐에 넣음
//K-1번 만큼 맨 앞을 꺼내 뒤에 다시 넣기 반복
//맨 앞을 제거
//벡터 추가
//큐가 빌 때까지 반복
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    if (!(cin >> N >> K)) return 0;

    queue<int> q;
    for (int i = 1; i <= N; ++i) q.push(i);

    vector<int> ans;
    while (!q.empty()) {
        
        for (int i = 1; i < K; ++i) {
            int x = q.front(); q.pop();
            q.push(x);
        }
 
        ans.push_back(q.front());
        q.pop();
    }

    cout << '<';
    for (size_t i = 0; i < ans.size(); ++i) {
        if (i) cout << ", ";
        cout << ans[i];
    }
    cout << '>' << '\n';

    return 0;
}
