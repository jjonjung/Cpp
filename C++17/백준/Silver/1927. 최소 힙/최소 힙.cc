#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> q;

int main() {
	cin.tie(0)->sync_with_stdio(false);
	int N; cin >> N;

	for (int i = 0; i < N; i++) {
		int M; cin >> M;

		if (M == 0) {
			if (!q.empty()) {
				cout << q.top() * -1 << '\n';
				q.pop();
			}

			else cout << "0\n";
		}

		else {
			q.push(M * -1);
		}
	}
}