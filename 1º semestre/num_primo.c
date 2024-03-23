/*
11. Números primos são os números naturais que têm apenas dois divisores distintos: 1 e ele mesmo.
Faça um programa que solicite um número natural, em seguida, informe se o número é primo ou não.
○ Exemplo 1, dado o termo 23, a saída esperada é sim.
○ Exemplo 2, dado o termo 77, a saída esperada é não.
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(){
    int n;
    int ehPrimo = TRUE;

    do{
        printf("Informe um numero: ");
        scanf("%d", &n);
        if(n < 0){
            printf("O valor precisa ser positivo.\n");
        }
    } while(n < 0);

    if(n < 2){
        ehPrimo = FALSE;
    } else{
        for(int i = 2; i < n && ehPrimo; i++){
            if(n%i==0)
                ehPrimo = FALSE;
        }
    }

    printf((ehPrimo)?"\nEh primo\n":"\nNao eh primo\n");

    return 0;
}