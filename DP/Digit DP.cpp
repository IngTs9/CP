// cuenta numeros en [a, b] sin digitos consecutivos iguales

const int MOD = 998244353;

int tam; // tamanio del numero actual
int NUM[55]; // digitos del numero
int dp[55][2][2][11]; 
// dp[pos][menor][ncero][last]

// funcion principal del digit dp
int solve(int i, bool menor, bool ncero, int last) {

    // si ya construimos todo el numero
    if (i == tam) return 1;

    int& ans = dp[i][menor][ncero][last];

    // si ya esta calculado
    if (ans != -1) return ans;

    ans = 0;

    // probamos todos los digitos posibles
    for (int dig = 0; dig <= 9; dig++) {

        // evitar dos digitos iguales seguidos
        // solo aplica si ya empezamos el numero
        if (dig == last && (ncero || dig)) continue;

        // verificar si podemos usar este digito
        if (menor || dig <= NUM[i]) {

            ans = (ans + solve(
                i + 1,                         // siguiente posicion
                menor || dig < NUM[i],        // ahora es menor?
                ncero || dig,                 // ya empezo el numero?
                dig                           // nuevo ultimo digito
            )) % MOD;
        }
    }

    return ans;
}

// verifica si un numero tiene digitos consecutivos iguales
bool g(string s) {
    for (int i = 0; i < (int)s.size() - 1; i++) {
        if (s[i] == s[i + 1]) return false;
    }
    return true;
}

// construye el digit dp para un numero s
int build(string s) {
    tam = s.size();

    // convertir string a arreglo de digitos
    for (int i = 0; i < tam; i++) {
        NUM[i] = s[i] - '0';
    }

    // reiniciar dp
    memset(dp, -1, sizeof dp);

    // iniciar recursion
    return solve(0, false, false, 10);
}

// funcion principal
void solve() {
    string l, r;

    while (cin >> l >> r) {

        // calcular cantidad en rango [l, r]
        // build(r) cuenta desde 0 hasta r
        // build(l) cuenta desde 0 hasta l
        // por eso restamos

        // sumamos g(l) porque l puede ser valido
        cout << ((build(r) - build(l) + MOD) % MOD + g(l)) % MOD << endl;
    }
}
