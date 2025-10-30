#include "fibonacci.h"

uint32_t fibonacci_iterativo(uint32_t n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    uint32_t a = 0, b = 1, temp;
    for (uint32_t i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

uint32_t fibonacci_recursivo(uint32_t n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci_recursivo(n - 1) + fibonacci_recursivo(n - 2);
}


