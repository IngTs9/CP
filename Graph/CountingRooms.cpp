constexpr int mxN = 1000+100;
char g[mxN][mxN];
int vis[mxN][mxN];
int n,m;
// va recorriendo l grafo en forma de direcciones
int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 };
void dfs(int x, int y){
    vis[x][y] = 1;

    forn(i,4){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >=0 && nx < n && ny>=0 && ny < m && vis[nx][ny]==0 && g[nx][ny]!='#'){
            dfs(nx,ny);
        }
    }
}
main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin>>n>>m;
    forn(i,n)forn(j,m){
        cin>>g[i][j];
    }
    int ans = 0;
    forn(i,n){
        forn(j,m){
            if(vis[i][j]==0 && g[i][j]!='#'){
                ans++;
                dfs(i,j);
            }
        }
    }
    cout << ans <<endl;
    cout << flush;
    return 0;
}
