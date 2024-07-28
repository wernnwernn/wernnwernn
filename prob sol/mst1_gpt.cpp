#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int u, v, weight;
    Edge(int u, int v, int weight) : u(u), v(v), weight(weight) {}
};

bool operator<(const Edge& a, const Edge& b) {
    return a.weight < b.weight;
}

vector<int> parent;

int find(int u) {
    while (u != parent[u]) {
        u = parent[u];
    }
    return u;
}

void merge(int u, int v) {
    parent[find(u)] = find(v);
}

vector<Edge> kruskal(int n, vector<Edge>& edges) {
    parent.resize(n);
    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }
    sort(edges.begin(), edges.end());
    vector<Edge> MST;
    for (const Edge& edge : edges) {
        int u = edge.u;
        int v = edge.v;
        if (find(u) != find(v)) {
            merge(u, v);
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
        int a, b, w;
        cin >> a >> b >> w;
        edges.push_back(Edge(a - 1, b - 1, w));
    }
    vector<Edge> MST = kruskal(n, edges);
    int totalWeight = 0;
    for (const Edge& edge : MST) {
        totalWeight += edge.weight;
    }
    cout << "Total Weight: " << totalWeight << endl;
    return 0;
}
