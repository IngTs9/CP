  int t;
  cin>>t;
  string s,k;
  while(t--){
    cin>>s>>k;
    string a="",b="";
    forn(i,sz(s)){
        a+=((s[i]=='1' && k[i]=='1')? '1': '0');
        b+=((s[i]=='1'|| k[i]=='1')? '1': '0');
    }
    cout<<a<<" "<<b<<endl;
    
  }
