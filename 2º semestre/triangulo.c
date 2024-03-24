/*1. Leia três valores para os lados de um triângulo.
O algoritmo deve verificar se o triângulo é
equilátero, isósceles ou escaleno.*/

#include <stdio.h>

typedef struct{
    float ladoA;
    float ladoB;
    float ladoC;
} Triangulo;

void lerLadosDoTriangulo(Triangulo *t);
void verificarTriangulo(Triangulo t);

int main(){
    Triangulo t;
    lerLadosDoTriangulo(&t);
    verificarTriangulo(t);
    return 0;
}

void lerLadosDoTriangulo(Triangulo *t){
    do{
        printf("Lado A: ");
        scanf("%f", &(t->ladoA));
        if(t->ladoA <= 0)
            printf("Valor invalido!!\n");
    } while(t->ladoA <= 0);
    do{
        printf("Lado B: ");
        scanf("%f", &(t->ladoB));
        if(t->ladoB <= 0)
            printf("Valor invalido!!\n");
    } while(t->ladoB <= 0);
    do{
        printf("Lado C: ");
        scanf("%f", &(t->ladoC));
        if(t->ladoC <= 0)
            printf("Valor invalido!!\n");
    } while(t->ladoC <= 0);
}

void verificarTriangulo(Triangulo t){
    if(t.ladoA == t.ladoB && t.ladoB == t.ladoC)
        printf("O triangulo e equilatero.\n");
    else if(t.ladoA == t.ladoB || t.ladoA == t.ladoC || t.ladoB == t.ladoC)
        printf("O triangulo e isosceles.\n");
    else
        printf("O triangulo e escaleno.\n");
}