#include <stdio.h> 
    int main(){
        
        int opcao = 0;
        printf ("MENU PRINCIPAL\n");
        printf ("1-consultar saldo\n");
        printf ("2-Recarregar saldo\n");
        printf ("3- Ver recados\n");
        printf ("4- Ver ligacoes\n");
        printf ("5-Sair\n");

        printf ("Escolha uma opcao =>");
        scanf("%i", &opcao);

        if (opcao ==1){
            printf("Seu saldo eh de R$10.00\n");
        
    }else if (opcao == 2 ){
        printf("Digite 1 para 10 R$ 10.00, 2 para R$ 20.00 ou 5 para R$ 50.00\n");
    }else if (opcao == 3){
        printf("Voce naum tem recados");
    }else if(opcao== 4){
        printf ("Ultimo numero foi 8888-8888");
    }else if(opcao == 5){
        printf("ate logo\n");
    }else{
        printf("opcao invalida! Tente novamente\n");
        switch(opcao){
            case 1: printf("Seu saldo eh de R$10.00\n");
        case 2: printf("Digite 1 para 10 R$ 10.00, 2 para R$ 20.00 ou 5 para R$ 50.00\n");
        case 3:printf("Voce naum tem recados");
        case 4:printf ("Ultimo numero foi 8888-8888");
        case 5: printf("ate logo\n");
        default: printf ("opcao invalida! tente novamente\n");
        }
        
    }
     
        
        
        return 0;

    }