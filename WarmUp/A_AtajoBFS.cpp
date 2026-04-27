/*
Calcular la distancia minima del nodo a al nodo b, graph dirijido
*/

constexpr int mxN = 1e5 + 100;
vector<int> G[mxN];
vector<bool> vis(mxN);
vector<int> dist(mxN);

void bfs(int u) {
  queue<int> q;
  q.push(u);
  vis[u] = 1;
  dist[u] = 0;
  while (sz(q)) {
    int v = q.front();
    q.pop();
    each(x, G[v]) {
      if (!vis[x]) {
        vis[x] = 1;
        dist[x] = dist[v] + 1;
        q.push(x);
      }
    }
  }
}

  int t;
  cin >> t;
  while (t--) {
    int n, m, a, b, u, v;
    cin >> n >> m >> a >> b;
    a--, b--;
    vector<int> vec(n);
    forn(i, m) {
      cin >> u >> v;
      u--, v--;
      G[u].pb(v);
    }
    bfs(a);
    if (!vis[b])cout << -1 << endl;
    else cout << dist[b] << endl;
    forn(i, n) G[i].clear();
    fill(all(vis), 0); //limpia el vector para usarlo en el siguiente caso
    fill(all(dist), 0);
  }
  return 0;
}

