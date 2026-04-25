//Funcciones y  manejo de Bits

// Obtener el k-esimo bit (0 o 1)
((a >> k) & 1)

// Encender (poner en 1) el k-esimo bit
(a | (1 << k))

// Apagar (poner en 0) el k-esimo bit
(a & ~(1 << k))

// Invertir (toggle) el k-esimo bit
(a ^ (1 << k))
  
  // Obtener el k-esimo bit (0 o 1)
int getBit(int a, int k) {
    return (a >> k) & 1;
}

// Encender (poner en 1) el k-esimo bit
int setBit(int a, int k) {
    return a | (1 << k);
}

// Apagar (poner en 0) el k-esimo bit
int clearBit(int a, int k) {
    return a & ~(1 << k);
}

// Invertir (toggle) el k-esimo bit
int toggleBit(int a, int k) {
    return a ^ (1 << k);
}

// Verificar si el k-esimo bit esta encendido
bool isBitOn(int a, int k) {
    return (a >> k) & 1;
}

// Contar bits en 1
int countBits(int a) {
    return __builtin_popcount(a);
}

// Verificar si es potencia de 2
bool isPowerOfTwo(int a) {
    return a > 0 && (a & (a - 1)) == 0;
}

// Eliminar el ultimo bit encendido
int removeLastSetBit(int a) {
    return a & (a - 1);
}

// Obtener el ultimo bit encendido
int getLastSetBit(int a) {
    return a & (-a);
}

// Recorrer todos los subconjuntos de un bitmask
void subsets(int mask) {
    for (int sub = mask; sub; sub = (sub - 1) & mask) {
        cout << sub << endl;
    }
}

// Contar ceros al final (trailing zeros)
int trailingZeros(int a) {
    return __builtin_ctz(a);
}

// Contar ceros al inicio (leading zeros)
int leadingZeros(int a) {
    return __builtin_clz(a);
}
