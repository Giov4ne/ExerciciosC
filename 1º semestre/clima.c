#include <stdio.h>

int main(){
    
    int situacao;
    
    do{
        printf("Informe o clima atual:\n");
        printf("1- Sol;\n");
        printf("2- Nuvens;\n");
        printf("3- Chuva.\n");
        scanf("%d", &situacao);
        if(situacao < 1 || situacao > 3){
            printf("Opcao invalida!\n\n");
        }
    } while(situacao < 1 || situacao > 3);
    
    switch(situacao){
        case 1:
            int umidade;

            do{
                printf("\nInforme a umidade:\n");
                printf("1- Elevada;\n");
                printf("2- Normal.\n");
                scanf("%d", &umidade);
                if(umidade < 1 || umidade > 2){
                    printf("Opcao invalida!\n\n");
                }
            } while(umidade < 1 || umidade > 2);

            if(umidade == 1){
                printf("As condicoes climaticas nao estao favoraveis para jogar tenis.\n");
            } else{
                printf("As condicoes climaticas estao favoraveis para jogar tenis.\n");
            }

            break;
        case 2:
            printf("As condicoes climaticas estao favoraveis para jogar tenis.\n");
            break;
        case 3:
            int vento;

            do{
                printf("\nInforme o vento:\n");
                printf("1- Suave;\n");
                printf("2- Forte.\n");
                scanf("%d", &vento);
                if(vento < 1 || vento > 2){
                    printf("Opcao invalida!\n\n");
                }
            } while(vento < 1 || vento > 2);

            if(vento == 1){
                printf("As condicoes climaticas estao favoraveis para jogar tenis.\n");
            } else{
                printf("As condicoes climaticas nao estao favoraveis para jogar tenis.\n");
            }

            break;
    }

    return 0;

}