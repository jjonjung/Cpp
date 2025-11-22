#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> maps;
vector<vector<int>> visited;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

pair<int,int> findPos(char target) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(maps[i][j] == target) return {i,j};
        }
    }
    return {-1,-1};
}

int bfs(pair<int,int> start, pair<int,int> end) {
    queue<pair<int,int>> q;
    visited.assign(n, vector<int>(m, -1));
    q.push(start);
    visited[start.first][start.second] = 0;

    while(!q.empty()) {
        auto [x,y] = q.front(); q.pop();
        if(x == end.first && y == end.second) return visited[x][y];
        for(int dir=0;dir<4;dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(maps[nx][ny] == 'X' || visited[nx][ny] != -1) continue;
            visited[nx][ny] = visited[x][y] + 1;
            q.push({nx, ny});
        }
    }
    return -1; // 도달 불가
}

int solution(vector<string> maps_input) {
    maps = maps_input;
    n = maps.size();
    m = maps[0].size();

    pair<int,int> start = findPos('S');
    pair<int,int> lever = findPos('L');
    pair<int,int> exitPos = findPos('E');

    int toLever = bfs(start, lever);
    if(toLever == -1) return -1; // 레버까지 못가면 탈출 불가

    int toExit = bfs(lever, exitPos);
    if(toExit == -1) return -1; // 레버 이후 출구까지 못가면 탈출 불가

    return toLever + toExit;
}

// 테스트
int main() {
    vector<string> maps1 = {"SOOOL","XXXXO","OOOOO","OXXXX","OOOOE"};
    vector<string> maps2 = {"LOOXS","OOOOX","OOOOO","OOOOO","EOOOO"};
    cout << solution(maps1) << endl; // 16
    cout << solution(maps2) << endl; // -1
}
