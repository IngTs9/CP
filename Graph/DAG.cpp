// Graph + dp Grafo Dirigido y sin ciclos

const int mxN = 100005;
vector<pair<int,int>> G[mxN]; // {vecino, peso}
int indegree[mxN];
int n, m;
// Topological Sort
vector<int> topo() {
    queue<int> q;
    vector<int> orden;
    vector<int> deg(indegree, indegree + n + 1);
    for (int i = 1; i <= n; i++) {
        if (deg[i] == 0) q.push(i);
    }
    while (!q.empty()) {
        int u = q.front(); q.pop();
        orden.pb(u);

        for (auto [v, w] : G[u]) {
            if (--deg[v] == 0) {
// va quitando las aristas, y los nodos sueltos  los va metiendo a la cola en orden
                q.push(v);
            }
        }
    }
   return orden;
}
 main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;

    forn(i,m){
        int u, v, w;
        cin >> u >> v >> w;
        G[u].pb({v, w});
        indegree[v]++;
    }
    vector<int> orden = topo();
    each(x,orden){
        cout << x << " ";
    }
}

