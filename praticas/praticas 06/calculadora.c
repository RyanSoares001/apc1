#include <stdio.h>

int main() {
    char operacao;
    float numero1, numero2;

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    if (operacao == '+') {
        printf("Resultado: %.2f\n", numero1 + numero2);
    } else if (operacao == '-') {
        printf("Resultado: %.2f\n", numero1 - numero2);
    } else if (operacao == '*') {
        printf("Resultado: %.2f\n", numero1 * numero2);
    } else if (operacao == '/') {
        if (numero2 != 0)
            printf("Resultado: %.2f\n", numero1 / numero2);
        else
            printf("Erro: divisão por zero!\n");
    } else {
        printf("Operação inválida!\n");
    }

    return 0;
}
 