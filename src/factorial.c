#include "factorial.h"

// Implementación iterativa
uint32_t factorial_iterativo(uint32_t n) {
    uint32_t resultado = 1;
    for (uint32_t i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

// Implementación recursiva
uint32_t factorial_recursivo(uint32_t n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursivo(n - 1);
}

