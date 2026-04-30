//Dijkstra para hallar el recorrido mas corto
struct edge {
  int v; long long w;

  bool operator < (const edge &x) const {
    return x.w < w;
  }
};
constexpr int mxN=1e5+100;
vector<vector<edge>> g;
vector<int> dist;

void dijkstra(int start) {
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    
    dist[start] = 0;
    pq.push({0, start});
    
    while (!pq.empty()) {
        auto [d, v] = pq.top();
        pq.pop();
        
        if (d > dist[v]) continue;
        
        for (auto &u : g[v]) {
            if (dist[u.v] > dist[v] + u.w) {
                dist[u.v] = dist[v] + u.w;
                pq.push({dist[u.v], u.v});
            }
        }
    }
}


main() {
ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
     int n, m;
    cin >> n >> m;
    g.resize(n);
    dist.assign(n, mxN);

    forn(i,m){
        int u, v, c;
        cin >> u >> v >> c;
        u--, v--;
        g[u].pb({v, c});
        g[v].pb({u, c});
    }

    dijkstra(0);

    forn(i,n) {
        cout << dist[i] << " ";
    }
    cout << endl;
