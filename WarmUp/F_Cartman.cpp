int t,l,r;
    cin >>t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> m(n+1), vec(n+1), pref(n+1, 0);
        forna(i,1,n) cin >> m[i];
        forna(i,1,n) cin >> vec[i];
        forna(i,1,n){
            pref[i] = pref[i-1] + (m[i] * vec[i]);
        }
        while (q--) {
            cin >> l >> r;
            cout<<pref[r]-pref[l-1]<<endl;
        }
    }
