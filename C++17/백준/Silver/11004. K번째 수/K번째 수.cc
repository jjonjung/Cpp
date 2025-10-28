//수 N개 A1, A2, ..., AN이 주어진다. A를 오름차순 정렬했을 때, 앞에서부터 K번째 있는 수를 구하는 프로그램
//첫째 줄에 N(1 ≤ N ≤ 5,000,000)과 K (1 ≤ K ≤ N)이 주어진다.
//둘째에는 A1, A2, ..., AN이 주어진다. (-109 ≤ Ai ≤ 109)
//A를 정렬했을 때, 앞에서부터 K번째 있는 수를 출력한다.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    if (!(cin >> N >> K)) return 0;
    vector<long long> a;
    a.reserve(N);
    for (int i = 0; i < N; ++i) {
        long long x;
        cin >> x;
        a.push_back(x);
    }

    // K번째(작은 쪽에서 K번째)는 인덱스 K-1
    nth_element(a.begin(), a.begin() + (K-1), a.end());
    cout << a[K-1] << '\n';
    return 0;
}
