#include <stdio.h>

int main() {
    float a, b, soma;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);

    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    soma = a + b;

    printf("Resultado da soma: %.2f\n", soma);

    return 0;
}