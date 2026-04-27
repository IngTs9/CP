set<int>Union(vector<int>A, vector<int>B){
    set<int>a(all(A));
    a.i(all(B));
    return  a;
}
set<int>Interseccion(vector<int>A,vector<int>B){
    set<int>b(all(A)),res;
    each(x,B){
        if(b.count(x)) res.i(x);
    }
    return res;
} 
set<int>InterseccionSet(vector<int>A,vector<int>B,vector<int>C){
    set<int>s1,s2,res;
    s1=Union(A,B);
    s2=Union(B,C);
    each(x,s1){
        if(s2.count(x)) res.i(x);
    }
    return res;
} 
set<int>UnionSet(vector<int>A,vector<int>B,vector<int>C){
    set<int>s1,s2;
    s1=Interseccion(A,B);
    s2=Interseccion(A,C);
    set<int>res(all(s1));
    res.i(all(s2));
    
    return  res;
    
}

main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
      vector<int>A(n),B(n),C(n);
      forn(i,n) cin>>A[i];
      forn(i,n) cin>>B[i];
      forn(i,n) cin>>C[i];
      set<int>st1,st2,st3,st4,st5;
      st1=Union(A,B);
      st2=Union(B,C);
      each(x,st1)cout<<x<<" ";
      cout<<endl;
      each(x,st2)cout<<x<<" ";
      cout<<endl;
      st3=Interseccion(A,B);
      each(x,st3) cout<<x<<" ";
      cout<<endl;
      st4=InterseccionSet(A,B,C);
      each(x,st4) cout<<x<<" ";
      cout<<endl;
      st5=UnionSet(A,B,C);
      each(x,st5)  cout<<x<<" ";
      cout<<endl;
      cout<<endl;
