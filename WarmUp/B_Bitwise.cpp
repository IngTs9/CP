#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back
#define i insert
#define sz(x) int((x).size())
#define forn(i, n) for (int i = 0; i < n; i++)
#define forna(i, x, n) for (int i = x; i <= n; i++)
#define all(x) x.begin(), x.end()
#define each(i, x) for (auto &&i : x)
#define forinver(i, n) for (int i = n - 1; i >= 0; i--)
using namespace std;
#define int int64_t


main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
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



return 0;
}
