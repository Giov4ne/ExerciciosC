/*1. Leia três valores para os lados de um triângulo.
O algoritmo deve verificar se o triângulo é
equilátero, isósceles ou escaleno.*/

#include <stdio.h>

void lerTriangulo(float *ladoA, float *ladoB, float *ladoC);
void identificarTriangulo(float ladoA, float ladoB, float ladoC);

int main(){
    float ladoA, ladoB, ladoC;
    lerTriangulo(&ladoA, &ladoB, &ladoC);
    identificarTriangulo(ladoA, ladoB, ladoC);
    return 0;
}

void lerTriangulo(float *ladoA, float *ladoB, float *ladoC){
    do{
        printf("Lado A: ");
        scanf("%f", ladoA);
        if(*ladoA <= 0){
            printf("Valor invalido!!\n");
        }
    } while(*ladoA <= 0);
    do{
        printf("Lado B: ");
        scanf("%f", ladoB);
        if(*ladoB <= 0){
            printf("Valor invalido!!\n");
        }
    } while(*ladoB <= 0);
    do{
        printf("Lado C: ");
        scanf("%f", ladoC);
        if(*ladoC <= 0){
            printf("Valor invalido!!\n");
        }
    } while(*ladoC <= 0);
}

void identificarTriangulo(float ladoA, float ladoB, float ladoC){
    if(ladoA == ladoB && ladoB == ladoC && ladoC == ladoA){
        printf("O triangulo e equilatero\n");
    } else if(ladoA == ladoB || ladoB == ladoC || ladoA == ladoC){
        printf("O triangulo e isosceles\n");
    } else{
        printf("O triangulo e escaleno\n");
    }
}