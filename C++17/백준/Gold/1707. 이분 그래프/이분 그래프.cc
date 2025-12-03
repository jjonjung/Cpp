#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool isBipartite(int V, vector<vector<int>>& graph) {
    vector<int> color(V + 1, 0); 

    for (int i = 1; i <= V; i++) {
        if (color[i] != 0) continue; 

        queue<int> q;
        q.push(i);
        color[i] = 1; 

        while (!q.empty()) {
            int cur = q.front();
            q.pop();

            for (int next : graph[cur]) {
                if (color[next] == 0) {
                    color[next] = -color[cur]; 
                    q.push(next);
                } else if (color[next] == color[cur]) {
                    return false; 
                }
            }
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int K; 
    cin >> K;

    while (K--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> graph(V + 1);

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        if (isBipartite(V, graph))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}