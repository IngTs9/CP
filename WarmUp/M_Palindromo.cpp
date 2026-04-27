
bool ispal(string& s) {
    for (int i = 0, j = sz(s) - 1; i < j; i++, j--) {
        if (s[i] != s[j]) return 0;
    }
    return 1;
}

void solve() {

    string s; cin >> s;
    int n = sz(s);

    if (n & 1) {
        if (ispal(s)) {
            cout << "PALINDROMO" << endl;
            return;
        }
    }

    int x = 0;
    for (int i = 0, j = sz(s) - 1; i < j; i++, j--) {
        if (s[i] != s[j]) x++;
    }
    if (x > 1 or n % 2 == 0 && x == 0)  cout << "NO ES POSIBLE" << endl;
    else  cout << "PALINDROMO" << endl;
}
main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


    int testcase; cin >> testcase; while (testcase--) solve();








    cout << flush;
