/*
8. Faça um programa que solicite n números reais. Em seguida, o programa deve informar os dois
maiores valores do conjunto de números informados.
○ Exemplo, dados os números 14, 3, 10, 2, 1, 8, 15 e 5, a saída esperada é "14 e 15".
*/

#include <stdio.h>

int main(){
    int qtdDeElementos;

    do{
        printf("Quantidade de elementos do conjunto: ");
        scanf("%d", &qtdDeElementos);
        if(qtdDeElementos < 2){
            printf("O conjunto precisa ter no minimo dois elementos.\n");
        }
    } while(qtdDeElementos < 2);

    int conjunto[qtdDeElementos];
    int tamConjunto = sizeof(conjunto) / sizeof(conjunto[0]);
    
    for(int i = 0; i < tamConjunto; i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &conjunto[i]);
    }

    int maiorValor = conjunto[0];
    int segundoMaiorValor = conjunto[1];

    for(int i = 0; i < tamConjunto; i++){
        if(conjunto[i] > maiorValor){
            segundoMaiorValor = maiorValor;
            maiorValor = conjunto[i];
        } else if(conjunto[i] > segundoMaiorValor){
            segundoMaiorValor = conjunto[i];
        }
    }

    printf("\n\nOs maiores valores do conjunto sao: %d e %d.\n\n", segundoMaiorValor, maiorValor);

    return 0;
}