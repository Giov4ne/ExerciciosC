/*
5. Faça um programa que, dado um vetor de números inteiros v, retorne um novo vetor de forma que
cada elemento no índice i seja o produto de todos os números no vetor original, com exceção de i.
○ Exemplo 1: dado v = [1,2,3,4,5], a saída esperada é [120,60,40,30,24].
○ Exemplo 2: dado v = [3,2,1], a saída esperada é [2,3,6].
*/

#include <stdio.h>

#define SIZE 6

int main(){
    int v1[SIZE] = {3,2,1,5,2,4}, v2[SIZE];
    for(int i = 0; i < SIZE; i++){
        int n = 1;
        for(int j = 0; j < SIZE; j++){
            if(i != j){
                n *= v1[j];
            }
        }
        v2[i] = n;
        if(i == 0) printf("[");
        printf("%d", v2[i]);
        printf(i < SIZE-1 ? "," : "]");
    }
    return 0;
}