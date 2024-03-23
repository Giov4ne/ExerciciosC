/* Faça um programa que leia um número inteiro e retorne o fatorial deste número. Utilize uma função
recursiva para realizar o cálculo do fatorial. */

#include <stdio.h>

int fatorial(int n){
    return n > 1 ? n * fatorial(n - 1) : 1;
}

int main(){
    int n;
    printf("Informe um numero: ");
    scanf("%d", &n);
    printf("O fatorial de %d eh: %d", n, fatorial(n));
    return 0;
}