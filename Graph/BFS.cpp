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
    int n, m;
    cin >> n >> m;
    a--, b--;
    forn(i, m) {
      cin >> u >> v;
      u--, v--;
      G[u].pb(v);
