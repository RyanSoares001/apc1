#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ALUNOS 100

struct Aluno {
    int id;
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno alunos[MAX_ALUNOS];
    int totalAlunos = 0;
    int opcao;

    do {
        printf("\n--- MENU PRINCIPAL ---\n");
        printf("1. Cadastrar aluno\n");
        printf("2. Listar alunos\n");
        printf("3. Buscar aluno por ID\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida. Encerrando o programa.\n");
            break;
        }

        if (opcao == 1) {
            if (totalAlunos >= MAX_ALUNOS) {
                printf("Limite de alunos atingido!\n");
                continue;
            }
            struct Aluno novo;

            printf("ID do aluno (inteiro positivo): ");
            while (scanf("%d", &novo.id) != 1 || novo.id <= 0) {
                printf("ID invalido. Digite novamente: ");
                while(getchar() != '\n'); // limpar buffer
            }

            printf("Nome do aluno: ");
            while(getchar() != '\n'); // limpar buffer
            fgets(novo.nome, sizeof(novo.nome), stdin);
            novo.nome[strcspn(novo.nome, "\n")] = '\0'; // remover \n

            printf("Idade do aluno: ");
            while (scanf("%d", &novo.idade) != 1 || novo.idade <= 0) {
                printf("Idade invalida. Digite novamente: ");
                while(getchar() != '\n');
            }

            printf("Nota do aluno (0 a 10): ");
            while (scanf("%f", &novo.nota) != 1 || novo.nota < 0 || novo.nota > 10) {
                printf("Nota invalida. Digite novamente: ");
                while(getchar() != '\n');
            }

            alunos[totalAlunos++] = novo;
            printf("Aluno cadastrado com sucesso!\n");

        } else if (opcao == 2) {
            if (totalAlunos == 0) {
                printf("Nenhum aluno cadastrado ainda.\n");
            } else {
                printf("\n--- LISTA DE ALUNOS ---\n");
                for (int i = 0; i < totalAlunos; i++) {
                    printf("ID: %d | Nome: %s | Idade: %d | Nota: %.2f\n",
                           alunos[i].id, alunos[i].nome, alunos[i].idade, alunos[i].nota);
                }
            }

        } else if (opcao == 3) {
            int buscaId;
            int encontrado = 0;

            printf("Digite o ID do aluno que deseja buscar: ");
            if (scanf("%d", &buscaId) != 1) {
                printf("ID invalido!\n");
                while(getchar() != '\n');
                continue;
            }

            for (int i = 0; i < totalAlunos; i++) {
                if (alunos[i].id == buscaId) {
                    printf("Aluno encontrado: %s, Idade: %d, Nota: %.2f\n",
                           alunos[i].nome, alunos[i].idade, alunos[i].nota);
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado) {
                printf("Aluno com ID %d nao encontrado.\n", buscaId);
            }

        } else if (opcao == 4) {
            printf("Encerrando o programa...\n");
        } else {
            printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 4);

    return 0;
}
