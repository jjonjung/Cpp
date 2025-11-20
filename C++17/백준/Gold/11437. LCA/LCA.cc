#include <iostream>
#include <vector>
#include <queue>
using namespace std;

static int  N;
static vector <vector <int> > tree;
static vector<int> depth;
static vector<int> parent;
static vector<bool> visited;
void BFS(int node);
int excuteLCA(int a, int b);


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    tree.resize(N + 1);
    depth.resize(N + 1);
    parent.resize(N + 1);
    visited.resize(N + 1, false);

    for (int i = 0; i < N - 1; i++) {
        int s, e;
        cin >> s >> e;
        tree[s].push_back(e);
        tree[e].push_back(s);
    }

    depth[1] = 0;
    parent[1] = 1;
    BFS(1);

    int M; 
    cin >> M;

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        int LCA = excuteLCA(a, b);
        cout << LCA << "\n";
    }
    return 0;
}

int excuteLCA(int a, int b) {
    if (depth[a] < depth[b]) {
        int temp = a;
        a = b;
        b = temp; 
    }

    while (depth[a] != depth[b]) {
        a = parent[a];
    }
    while (a != b) {
        a = parent[a];
        b = parent[b];
    }

    return a; 
}

void BFS(int node) {
    queue<int> myqueue;
    myqueue.push(node);
    visited[node] = true;

    while (!myqueue.empty()) {
        int now_node = myqueue.front();
        myqueue.pop();
        for (int next : tree[now_node]) {
            if (!visited[next]) {
                visited[next] = true;
                myqueue.push(next);
                parent[next] = now_node;
                depth[next] = depth[now_node] + 1; 
            }
        }
    }
}
