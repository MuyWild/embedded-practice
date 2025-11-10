#include <stdio.h>
#include "factorial.h"
#include "fibonacci.h"
#include "math_utils.h"


int main(void) {
    uint32_t n = 5;

    printf("=== PRUEBAS DE FACTORIAL ===\n");
    printf("Factorial iterativo de %u = %u\n", n, factorial_iterativo(n));
    printf("Factorial recursivo de %u = %u\n", n, factorial_recursivo(n));

    printf("\n=== PRUEBAS DE FIBONACCI ===\n");
    printf("Fibonacci iterativo de %u = %u\n", n, fibonacci_iterativo(n));
    printf("Fibonacci recursivo de %u = %u\n", n, fibonacci_recursivo(n));
    
    printf("\n=== PRUEBAS DE MATH_UTILS ===\n");
printf("Suma 5 + 3 = %d\n", sumar(5, 3));
printf("Resta 5 - 3 = %d\n", restar(5, 3));
printf("Multiplicación 5 * 3 = %d\n", multiplicar(5, 3));
printf("División 10 / 2 = %.2f\n", dividir(10, 2));


    return 0;
}


   

