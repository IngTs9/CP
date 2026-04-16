
signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t; cin>>t;
  while(t--){
    string ans="";
    string s, p;
    cin>>s>>p;
    while (s.size() < p.size()) s = '0'+s; //llenamos de 0 si un string es mas corto que el otro
    while (p.size() < s.size()) p = '0'+p;
    int n = s.size();
    forn(i,n){
        int x = ((s[i]-'0')+(p[i]-'0'));
        ans += char('0' + (x % 10)); //tenemos el ultimo digito
    }
    int pos = ans.find_first_not_of('0');
    ans = (pos == string::npos) ? "0" : ans.substr(pos);
    cout<<ans<<endl;
  }
  return 0;
}
