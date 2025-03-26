#include <stdio.h>

int main() {

    char ISBN[] = "000000000000"; 
    int numPaginas = 0; 
    float preco = 0.00; 
    int anoPublicacao = 0;

    printf("ISBN: %s\n", ISBN);
    printf("Num. Paginas: %d\n", numPaginas);
    printf("Preco: R$ %.2f\n", preco);
    printf("Publicado em: %d\n", anoPublicacao);

    return 0;
}
