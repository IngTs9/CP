//Contar caminos desde 0 hasta n donde puedes avanzar entre 1 y 6 
const int MOD = 1e9 + 7;
 main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
  int n; cin >> n;
    vector<int> dp(n + 1);
    dp[0] = 1
    forna(i,1,n) {
        for (int j = 1; j <= 6; j++) {
            if (i - j >= 0) {
                dp[i] = (dp[i] + dp[i - j]) % MOD;
            }
        }
    }
    cout << dp[n] << endl;
    return 0;
}



