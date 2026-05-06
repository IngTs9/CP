/*
cada objeto tiene peso/tama y valor
w--> peso  v-->valor
 */
int knapsack(int n, int W, vector<int> &peso, vector<int> &valor) {
  vector<int> dp(W + 1, 0);

  forn(i, n) {
    for (int j = W; j >= peso[i]; j--) {
      dp[j] = max(dp[j], dp[j - peso[i]] + valor[i]);
    }
  }
  return dp[W];
}

main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, m;
  cin >>n>>m; // capacidad, numero de objetos

  vector<int> peso(n), valor(n);

  forn(i, n) cin >> peso[i] >> valor[i]; 

  cout << knapsack(n, m, peso, valor) << endl;
  return 0;
}
