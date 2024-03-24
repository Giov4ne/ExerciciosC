/*
Faça um programa que preencha um vetor com valores aleatórios, sem repetição de valores. Após isso, o vetor deve ser ordenado de forma crescente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum {FALSE, TRUE} Bool;

int lerTamVetor();
void preencherVetor(int v[], int n);
void ordenarVetor(int v[], int n);
void exibirVetor(int v[], int n);

int main(){
    int tam = lerTamVetor();
    int v[tam];
    srand(time(NULL));
    preencherVetor(v, tam);
    ordenarVetor(v, tam);
    exibirVetor(v, tam);
    return 0;
}

int lerTamVetor(){
    int n = 0;
    do{
        printf("\nInforme o tamanho do vetor: ");
        scanf("%d", &n);
        if(n < 2)
            printf("O tamanho do vetor deve ser no minimo 2.");
    } while(n < 2);
    return n;
}

void preencherVetor(int v[], int n){
    Bool valorRepetido;
    for(int i = 0; i < n; i++){
        do{
            valorRepetido = FALSE;
            v[i] = 1 + rand() % (n*10);
            for(int j = 0; j < i && valorRepetido == FALSE; j++){
                if(v[i] == v[j])
                    valorRepetido = TRUE;
            }
        } while(valorRepetido);
    }
}

void ordenarVetor(int v[], int n){
    int aux;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

void exibirVetor(int v[], int n){
    for(int i = 0; i < n; i++){
        printf("v[%d] = %d\n", i, v[i]);
    }
}