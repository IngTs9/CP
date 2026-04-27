constexpr int mxN =(100);
vector<vector<char>>U(mxN, vector<char>(mxN));
vector<vector<char>>D(mxN, vector<char>(mxN));
vector<vector<char>>L(mxN, vector<char>(mxN));
vector<vector<char>>A(mxN, vector<char>(mxN));

char c='#';
char es=' ';

 void pf(vector<vector<char>>&a){
    forn(i,10) forn(j,10){
        cin>>a[i][j];
    }
 }
 void init(){
    U=vector<vector<char>>(mxN,vector<char>(mxN, es));
    D=vector<vector<char>>(mxN,vector<char>(mxN, es));
    L=vector<vector<char>>(mxN,vector<char>(mxN, es));
    A=vector<vector<char>>(mxN,vector<char>(mxN, es));
 }
 void makeU(int n){
    forn(i,n){
        U[i][0]=U[n-1][i]=U[i][n-1]=c;
    }
 }
 void makeD(int n){
    forn(i,n){
        D[i][0]=D[0][i]=D[i][n-1]=D[n-1][i]=c;
    }
    D[0][n-1]=D[n-1][n-1]=es;
 }
 void makeL(int n){
    forn(i,n){
        L[i][0]=L[n-1][i]=c;
    }
 }
  void makeA(int n){
    forn(i,n){
        A[i][0]=A[0][i]=A[i][n-1]=A[(n-1)/2][i]=c;    } }
main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin>>n;
    init();
    makeU(n),makeD(n),makeL(n),makeA(n);
    forn(i,n){ 
        forn(j,n)cout<<U[i][j];
        cout<<" ";
        forn(j,n) cout<<D[i][j];
        cout<<" ";
        forn(j,n) cout<<L[i][j];
        cout<<" ";
        forn(j,n) cout<<A[i][j]; 
        cout<<endl;
    }
    cout<<endl;
  }
