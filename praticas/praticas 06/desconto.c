#include <stdio.h>

int main() {
    float valor_bruto, valor_desconto;

 
    printf("Digite o valor bruto: ");
    scanf("%f", &valor_bruto);

   
    if (valor_bruto <= 100.00f) {
        valor_desconto = valor_bruto * 0.01f;
    } else if (valor_bruto <= 500.00f) {
        valor_desconto = valor_bruto * 0.05f;
    } else {
        valor_desconto = valor_bruto * 0.10f;
    }

    // Exibe os resultados
    printf("Valor bruto: R$ %.2f\n", valor_bruto);
    printf("Valor do desconto: R$ %.2f\n", valor_desconto);

    return 0;
}
