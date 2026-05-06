
const int MOD = 1e9 + 7;
main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, x;
    cin >> n >> x; // numero de monedas y suma objetivo

    vector<int> c(n);
    forn(i,n){
        cin >> c[i]; // valores de las monedas
    }

    vector<int> dp(x + 1, MOD);
    // dp[i] = minimo numero de monedas para formar suma i

    dp[0] = 0; // caso base

    for (int i = 1; i <= x; i++) {
        forn(j,n) {
            if (i - c[j] >= 0) {
                dp[i] = min(dp[i], dp[i - c[j]] + 1);
            }
        }
    }

    // si no se pudo formar x, imprimimos -1
    if (dp[x] == MOD) cout << -1 << endl;
    else cout << dp[x] << endl;
  return 0;
}
