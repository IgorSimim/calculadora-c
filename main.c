#include <stdio.h>

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

int main() {
    float a, b;
    int opcao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);

    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Soma: %.2f\n", somar(a, b));
    } else if (opcao == 2) {
        printf("Subtracao: %.2f\n", subtrair(a, b));
    } else {
        printf("Opcao invalida!\n");
    }

    return 0;
}