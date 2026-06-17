#include <stdio.h>

float somar(float a, float b) {
    return a + b;
}

int main() {
    float a, b;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);

    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    printf("Resultado da soma: %.2f\n", somar(a, b));

    return 0;
}