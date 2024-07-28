#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int u, v, weight;
};

bool operator<(const Edge& a, const Edge& b) {
    return a.weight < b.weight;
}

int find(int u, vector<int>& parent) {
    if (u == parent[u]) {
        return u;
    }
    return parent[u] = find(parent[u], parent);
}

void unite(int u, int v, vector<int>& parent) {
    parent[find(u, parent)] = find(v, parent);
}

vector<Edge> kruskal(int n, vector<Edge>& edges) {
    vector<Edge> MST;
    vector<int> parent(n);
    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }
    sort(edges.begin(), edges.end());
    for (const Edge& edge : edges) {
        if (find(edge.u, parent) != find(edge.v, parent)) {
            unite(edge.u, edge.v, parent);
            MST.push_back(edge);
        }
    }
    return MST;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<Edge> edges;
    for (int i = 0; i < m; i++) {
        int a, b, w, s;
        cin >> a >> b >> w;
        edges.push_back({a - 1, b - 1, w});
    }
    vector<Edge> MST = kruskal(n, edges);
    int totalWeight = 0;
    for (const Edge& edge : MST) {
        totalWeight += edge.weight;
    }
    cout << totalWeight << endl;
    return 0;
}