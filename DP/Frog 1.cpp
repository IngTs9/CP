

const int MOD = 1e9 + 7;
main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
 int N;
    cin >> N; // numero de piedras

    vector<int> h(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> h[i]; // alturas de cada piedra
    }

    vector<int> dp(N + 1, 1e9); 
    // dp[i] = costo minimo para llegar a la piedra i
    // inicializamos con un numero grande

    dp[1] = 0; // caso base, ya estamos en la piedra 1

    for (int i = 2; i <= N; i++) {

        // opcion 1: saltar desde i-1
        dp[i] = dp[i-1] + abs(h[i] - h[i-1]);

        // opcion 2: saltar desde i-2 (solo si existe)
        if (i > 2) {
            dp[i] = min(dp[i], dp[i-2] + abs(h[i] - h[i-2]));
        }
    }

    // respuesta final
    cout << dp[N] << endl;
  return 0;
}
