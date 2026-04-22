//en ans se guardan los divisores de un n (en el main debo de crear otro
//vector que va a ser igual a mi funcion dado un n, ejemplo: vector<int>divisores=div(n) 
//y pues imprimo mi vector de divisores.
vector<int>div(int n) {
    vector<int> ans;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ans.pb(i);
            if (i != n / i) ans.pb(n / i);            
        }
    }
    return ans;
}
