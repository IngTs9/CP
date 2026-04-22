//En bs marco cada posición con 0 o 1 para identificar si es un numero primo
//(llamo la funcion y luego imprimo a bs en la posicion n).
//En prime guardo todos primos que hay hasta ese número (llamo la funcion y luego coloco
//mi n en el tamaño de la constante y luego ya imprimo  al vector.
const int MAX = int(1e6);
bitset<MAX + 5> bs;
vector<int64_t> prime;

void sieve() {
    bs.set();
    bs[0] = bs[1] = 0;
    for (int i = 2; i <= MAX; i++) {
        if (bs[i]) {
            prime.pb(i);
            for (int j = i * i; j <= MAX; j += i) {
                bs[j] = 0;
            }
        }
    }
}
