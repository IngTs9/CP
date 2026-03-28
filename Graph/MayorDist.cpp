constexpr int mxN = 2 * 1e5 + 100;
vector<int> G[mxN];
int dist[mxN];
vector<int> vis(mxN);
int n, m, x;

void dfs(int u, int d) {
    vis[u]=1;
    dist[u]=d;
    each(i, G[u]){
        if(!vis[i]){
            dfs(i, d+1);
        }

    }    
}



signed main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
     cout.tie(0);
     int u, v,mx=0;    
     cin>>n;
    
      forn(i, n-1){
    cin>>u>>v;
    G[u].pb(v);
    G[v].pb(u);
   }
//el fill 
   fill(all(vis), 0);
    dfs(1, 0);

    int c = 1;
    forne(i, n) {
        if (dist[i] > dist[c]) c = i;
    }

    fill(all(vis), 0);
    dfs(c, 0);

    forne(i, n) {
        mx = max(mx, dist[i]);
    }

    cout << mx << endl;

    return 0;
}
