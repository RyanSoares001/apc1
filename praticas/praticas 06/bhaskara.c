#include <stdio.h>

int main() {
    char operacao;
    float numero1, numero2;

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao);
    printf("Digite dois números: ");
    scanf("%f %f", &numero1, &numero2);

    if (operacao == '+') {
        printf("Resultado: %.2f\n", numero1 + numero2);
    } else if (operacao == '-') {
        printf("Resultado: %.2f\n", numero1 - numero2);
    } else if (operacao == '*') {
        printf("Resultado: %.2f\n", numero1 * numero2);
    } else if (operacao == '/') {
        if (numero2 != 0) {
            printf("Resultado: %.2f\n", numero1 / numero2);
        } else {
            printf("Erro: Divisão por zero.\n");
        }
    } else {
        printf("Operação inválida!\n");
    }

    return 0;
}
