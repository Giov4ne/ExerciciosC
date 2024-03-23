/*
4. Faça um programa que, dado um vetor de números inteiros v de tamanho n e um número k, retorne
verdadeiro se a soma de qualquer par de números em v for igual a k.
○ Exemplo: dado v = [10,15,3,7] e k = 17, a saída deve ser true, pois 10 + 7 é 17.
*/

#include <stdio.h>

#define TAM 4
enum boolean {FALSE, TRUE} bool;

int main(){
    int v[TAM] = {5,15,3,7}, k = 18;
    bool = FALSE;

    for(int i = 0; i < TAM && bool == FALSE; i++){
        for(int j = 0; j < TAM && bool == FALSE; j++){
            if(i == j){
                continue;
            } else if(v[i] + v[j] == k){
                bool = TRUE;
                printf("Verdadeiro, pois %d + %d = %d", v[i], v[j], k);
            }
        }
    }

    if(bool == FALSE){
        printf("Falso");
    }
    return 0;
}