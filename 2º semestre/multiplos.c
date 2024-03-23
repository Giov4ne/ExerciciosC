/*1. Faça um algoritmo que leia dois valores, N e X. Mostre
na tela os números de 1 a N e, a cada múltiplo de X,
emita uma mensagem: “Múltiplo de X”.*/

#include <stdio.h>

void lerValores(int *n, int *x);
void verificarSeEhMultiplo(int n, int x);

int main(){
    int n, x;
    lerValores(&n, &x);
    verificarSeEhMultiplo(n, x);
    return 0;
}

void lerValores(int *n, int *x){
    do{
        printf("Informe N: ");
        scanf("%d", n);
        if(*n < 1)
            printf("N precisa ser maior ou igual a 1\n");
    } while(*n < 1);
    do{
        printf("Informe X: ");
        scanf("%d", x);
        if(*x < 1)
            printf("X precisa ser maior ou igual a 1\n");
    } while(*x < 1);
}

void verificarSeEhMultiplo(int n, int x){
    for(int i = 1; i <= n; i++){
        printf("%d", i);
        if(i % x == 0)
            printf(" - multiplo de %d", x);
        printf("\n");
    }
}