// Halla el camino con el minimo de costo 

main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
   int n;
    cin >> n;

    vector<vector<pair<int,int>>> G(n); 
    map<pair<int,int>, int> cost;
    int total = 0;
    forN(i,n){
        int u,v,c;
        cin >> u >> v >> c;
        u--, v--;

        G[u].pb({v,c});
        G[v].pb({u,c});

        cost[{u,v}] = 0;
        cost[{v,u}] = c; 

        total += c;
    }
    vector<int> cycle;
    vector<bool> vis(n,false);

    int u = 0;
    int prev = -1;

    while(true){
        cycle.pb(u);
        vis[u] = true;

        bool moved = false;
        for(auto [v,c]: G[u]){
            if(v != prev){
                prev = u;
                u = v;
                moved = true;
                break;
            }
        }

        if(!moved || u == 0) break;
    }

    int cost1 = 0;
    forn(i,n){
        int a = cycle[i];
        int b = cycle[(i+1)%n];
        cost1 += cost[{a,b}];
    }

    cout << min(cost1, total - cost1) << endl;

    return 0;
}


