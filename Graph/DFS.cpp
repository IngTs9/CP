
constexpr int mxN = 1e5+100;
vector <int>G[mxN];
vector<int>vis(mxN);

void dfs(int u){
    vis[0]=1;
    each(i,G[u]){
        if(!vis[i]){
            dfs(i);
        }
    }
    return 0;
}


main(){

  forn(i,m){
    int u,v;
    cin>>u>>v;
    u--,v--;
    G[u].pb(v);
    G[v].pb(u);



}
