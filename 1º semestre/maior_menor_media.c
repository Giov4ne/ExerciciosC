/*
10. Faça um programa que solicite n números reais e informe qual é o menor e maior valor dentre eles,
bem como a média dos números.
○ Exemplo, dados os valores 14, 3, 10, 2, 1, 8, 15 e 5, a saída é "Maior=15, Menor=1, Média= 7,25".
*/

#include <stdio.h>

int main(){
    int n;

    do{
        printf("Quantidade de elementos do conjunto numerico: ");
        scanf("%d", &n);
        if(n < 2){
            printf("O conjunto precisa ter no minimo dois elementos.\n");
        }
    } while(n < 2);

    int conjunto[n];
    float tamConjunto = sizeof(conjunto) / sizeof(conjunto[0]);

    for(int i = 0; i < tamConjunto; i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &conjunto[i]);
    }

    int menor = conjunto[0];
    int maior = conjunto[0];
    int soma = 0;

    for(int i = 0; i < tamConjunto; i++){
        if(conjunto[i] < menor){
            menor = conjunto[i];
        } else if(conjunto[i] > maior){
            maior = conjunto[i];
        }
        soma += conjunto[i];
    }

    float media = soma / tamConjunto;

    printf("\n\n");
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Media: %f\n\n", media);

    return 0;
}