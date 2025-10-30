#include <stdio.h>
#include "factorial.h"
#include "fibonacci.h"

int main(void) {
    uint32_t n = 5;

    printf("=== PRUEBAS DE FACTORIAL ===\n");
    printf("Factorial iterativo de %u = %u\n", n, factorial_iterativo(n));
    printf("Factorial recursivo de %u = %u\n", n, factorial_recursivo(n));

    printf("\n=== PRUEBAS DE FIBONACCI ===\n");
    printf("Fibonacci iterativo de %u = %u\n", n, fibonacci_iterativo(n));
    printf("Fibonacci recursivo de %u = %u\n", n, fibonacci_recursivo(n));

    return 0;
}


   

