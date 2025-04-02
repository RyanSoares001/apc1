#include <stdio.h>

int main() {
    int numero1, numero2;
    
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &numero1, &numero2);
    
    int multiplicacao = numero1 * numero2;
    printf("A multiplicacao de %d e %d = %d\n", numero1, numero2, multiplicacao);
    
    float divisao = numero1 * 1.0f / numero2;
    printf("A divisao de %d e %d = %.1f\n", numero1, numero2, divisao);
    
    int resto = numero1 % numero2;
    printf("O resto da divisao de %d e %d = %d\n", numero1, numero2, resto);
    
    float operacao = 1 * 2 / (3 + 4.2 * 1);
    printf("Resultado da operacao: %.2f\n", operacao);
    
    int numero = 10;
    printf("Pre-incremento = %d\n", ++numero);
    printf("Pre-decremento = %d\n", --numero);
    printf("Pos-incremento = %d\n", numero++);
    printf("Pos-decremento = %d\n", --numero);
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("Voce digitou: %d\n", numero);
    
    return 0;
}
