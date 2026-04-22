//para encontrar la raiz cuadrada de un numero por si deja de funcionar la funcion original de c++. la respuesta es ans;
ll int_sqrt (ll x) {
	ll ans = 0;
	for (ll k = 1LL << 30; k != 0; k /= 2)
		if ((ans + k) * (ans + k) <= x)
			ans += k;
	return ans;
}
