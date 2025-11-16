#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    unordered_set<string> set2(s2.begin(), s2.end());
    int count = 0;

    for (const string& v : s1) {
        if (set2.count(v)) count++;
    }

    return count;
}
