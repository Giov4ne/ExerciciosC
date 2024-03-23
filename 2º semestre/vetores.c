/*Aluno: Giovane William Budal / TADS
Faça um programa que lê 10 valores e os
armazena em um vetor (float). Em seguida,
mostre na tela:
– O maior valor;
– A média dos valores;
– Quais valores estão acima da média.*/

#include <stdio.h>

#define TAM 10

void lerVetor(float v[]);
float maiorValor(float v[]);
float media(float v[]);
void acimaMedia(float v[], float media);

int main(){
    float v[TAM];
    lerVetor(v);
    printf("\n-> Maior valor = %f\n", maiorValor(v));
    printf("-> Media = %f\n", media(v));
    printf("-> Valores acima da media = ");
    acimaMedia(v, media(v));
    return 0;
}

void lerVetor(float v[]){
    for(int i = 0; i < TAM; i++){
        printf("V[%i] = ", i);
        scanf("%f", &v[i]);
    }
}

float maiorValor(float v[]){
    float m = 0;
    for(int i = 0; i < TAM; i++){
        if(v[i] > m)
            m = v[i];
    }
    return m;
}

float media(float v[]){
    float soma = 0;
    for(int i = 0; i < TAM; i++){
        soma += v[i];
    }
    return soma / TAM;
}

void acimaMedia(float v[], float media){
    int c = 0;
    for(int i = 0; i < TAM; i++){
        if(v[i] > media){
            if(c > 0)
                printf(", %f", v[i]);
            else
                printf("%f", v[i]);
            c++;
        }
    }
    if(c == 0)
        printf("Nenhum valor esta acima da media!\n");
}