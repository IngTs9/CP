//USAR SIEMPRE PARA EXPONENCIACION
//El primer metodo es para cuando necesito modularlo
//El segundo sin modulacion
//ejemplo: int x=binpow(a,b,m);

#define int int64_t
int binpow(int a, int b, int m) {
    a %= m;
    int res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

#define int int64_t
int binpow(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1) res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
