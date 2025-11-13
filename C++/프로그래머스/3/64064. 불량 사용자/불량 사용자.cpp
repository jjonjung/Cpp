#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

// 패턴이 user와 매칭되는지 검사
bool matches(const string& user, const string& pattern) {
    if (user.size() != pattern.size()) return false;
    for (size_t i = 0; i < user.size(); ++i) {
        if (pattern[i] == '*') continue;
        if (pattern[i] != user[i]) return false;
    }
    return true;
}

void backtrack(int idx,
    const vector<vector<int>>& candidates,
    vector<int>& chosen,
    vector<bool>& used,
    set<string>& result,
    const vector<string>& user_id) {
    int m = candidates.size();
    if (idx == m) {
        // 한 조합 완성 -> 선택된 user_id들을 정렬하여 문자열로 만들어 set에 넣기
        vector<string> sel;
        for (int i = 0; i < (int)chosen.size(); ++i) {
            if (chosen[i] != -1) sel.push_back(user_id[chosen[i]]);
        }
        sort(sel.begin(), sel.end());
        string key;
        for (int i = 0; i < (int)sel.size(); ++i) {
            if (i) key.push_back(',');
            key += sel[i];
        }
        result.insert(key);
        return;
    }

    // 현재 banned 패턴에 대해 가능한 후보들 검사
    for (int userIdx : candidates[idx]) {
        if (used[userIdx]) continue; // 이미 다른 패턴에 할당됨
        used[userIdx] = true;
        chosen[idx] = userIdx;
        backtrack(idx + 1, candidates, chosen, used, result, user_id);
        chosen[idx] = -1;
        used[userIdx] = false;
    }
}

int solution(vector<string> user_id, vector<string> banned_id) {
    int n = user_id.size();
    int m = banned_id.size();

    // 각 banned_id에 매칭 가능한 user_id 인덱스 목록 만들기
    vector<vector<int>> candidates(m);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matches(user_id[j], banned_id[i])) {
                candidates[i].push_back(j);
            }
        }
    }

    // 백트래킹 준비
    vector<int> chosen(m, -1);      // banned 패턴별로 선택된 user 인덱스
    vector<bool> used(n, false);    // user 인덱스 사용 여부
    set<string> result;             // 중복 제거를 위한 집합 (정렬한 문자열을 키로 사용)

    backtrack(0, candidates, chosen, used, result, user_id);

    return result.size();
}

// 예시 사용
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> user_id = { "frodo", "fradi", "crodo", "abc123", "frodoc" };
    vector<string> banned_id = { "fr*d*", "abc1**" };

    cout << solution(user_id, banned_id) << '\n'; // 예시의 정답: 2

    return 0;
}
