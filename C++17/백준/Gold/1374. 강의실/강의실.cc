#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<pair<long long, long long>> lectures;
    lectures.reserve(N);

    for (int i = 0; i < N; ++i) {
        long long id, s, e;
        cin >> id >> s >> e;
        lectures.emplace_back(s, e);
    }

    sort(lectures.begin(), lectures.end(), [](const auto& a, const auto& b) {
        if (a.first == b.first)
            return a.second < b.second;
        return a.first < b.first;
        });

    priority_queue<long long, vector<long long>, greater<long long>> pq;

    int maxRooms = 0;

    for (auto& lec : lectures) {
        long long start = lec.first;
        long long end = lec.second;

        if (!pq.empty() && pq.top() <= start) {
            pq.pop();
        }

        pq.push(end);

        if ((int)pq.size() > maxRooms)
            maxRooms = (int)pq.size();
    }

    cout << maxRooms << "\n";
    return 0;
}
