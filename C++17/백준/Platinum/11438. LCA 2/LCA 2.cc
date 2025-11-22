#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100001;
const int LOG = 17;
vector<int> tree[MAXN];
int depth[MAXN];
int parent[MAXN][LOG+1]; 

void dfs(int node, int par) {
    parent[node][0] = par;
    for(int i=1;i<=LOG;i++) {
        if(parent[node][i-1] != -1)
            parent[node][i] = parent[parent[node][i-1]][i-1];
        else
            parent[node][i] = -1;
    }
    for(int child : tree[node]) {
        if(child != par) {
            depth[child] = depth[node] + 1;
            dfs(child, node);
        }
    }
}

int lca(int u, int v) {
    if(depth[u] < depth[v]) swap(u,v);

    for(int i=LOG;i>=0;i--) {
        if(parent[u][i] != -1 && depth[parent[u][i]] >= depth[v])
            u = parent[u][i];
    }

    if(u == v) return u;

    for(int i=LOG;i>=0;i--) {
        if(parent[u][i] != -1 && parent[u][i] != parent[v][i]) {
            u = parent[u][i];
            v = parent[v][i];
        }
    }
    return parent[u][0];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for(int i=0;i<N-1;i++) {
        int u,v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    memset(parent, -1, sizeof(parent));
    depth[1] = 0;
    dfs(1, -1);

    int M;
    cin >> M;
    while(M--) {
        int u,v;
        cin >> u >> v;
        cout << lca(u,v) << "\n";
    }
}
