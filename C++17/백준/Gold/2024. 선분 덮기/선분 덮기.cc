#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int M;
    while (cin >> M && M) {
        vector<pair<int, int>> segments;
        int l, r;

        while (cin >> l >> r && (l || r)) {
            if (r > 0 && l < M) {
                segments.push_back({l, min(r, M)});
            }
        }
        
        sort(segments.begin(), segments.end());
        
        int answer = 0;
        int currentEnd = 0;  
        int i = 0;
        
        while (currentEnd < M && i < segments.size()) {
            int maxEnd = currentEnd;
            
            while (i < segments.size() && segments[i].first <= currentEnd) {
                maxEnd = max(maxEnd, segments[i].second);
                i++;
            }
            
            if (maxEnd == currentEnd) {
                answer = 0;
                break;
            }
            
            currentEnd = maxEnd;
            answer++;
        }
        
        if (currentEnd < M) {
            answer = 0;
        }
        
        cout << answer << endl;
    }
    
    return 0;
}