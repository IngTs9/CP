  int t;
  cin>>t;
  while(t--){
    int n, m;
    cin >> n >> m;
    int x = m * 7;
    if (x >= n) {
        cout << 0 << endl;
        continue;
    }
    forn(i, 10000) {
        if ((x + ((i * 2) * 7)) >= n) {
            cout << i << endl;
            break;
        }
    }
  }
