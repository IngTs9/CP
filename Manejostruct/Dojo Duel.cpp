
 struct Est{
    string name;
    int k,m,s,d;
 };
auto my(const Est &a, const Est &b){
    if(a.d != b.d) return a.d > b.d;
    if(a.m != b.m) return a.m > b.m;
    if(a.k != b.k) return a.k > b.k;
    if(a.s != b.s) return a.s > b.s;
    return a.name < b.name;
}
main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n,k,m,s,d;
  cin>>n;
  vector<Est>vec(n);
  string name;
  forn(i,n){
    cin>>vec[i].name>>vec[i].k>>vec[i].m>>vec[i].s>>vec[i].d;
  }
  sort(all(vec), my);
  each(x,vec){
    cout<<x.name<<endl;
  }
  
