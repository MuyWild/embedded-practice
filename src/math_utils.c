#include "math_utils.h"

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

float dividir(int a, int b) {
    if (b == 0) {
        return 0.0; // evitar división por cero
    }
    return (float)a / (float)b;
}

