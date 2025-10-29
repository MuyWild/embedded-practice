#include <stdio.h>
#include "factorial.h"

int main(void) {
    uint32_t n = 5;

    printf("Factorial iterativo de %u = %u\n", n, factorial_iterativo(n));
    printf("Factorial recursivo de %u = %u\n", n, factorial_recursivo(n));

    //bajar actualizacion a PC

    return 0;
}

