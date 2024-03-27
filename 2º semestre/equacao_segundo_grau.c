// Faça um programa que calcule as raízes de uma equação do 2° grau.

#include <stdio.h>
#include <math.h>

typedef enum {FALSE, TRUE} Bool;

void lerValores(float *a, float *b, float *c);
void calcEquacaoSegundoGrau(float a, float b, float c, float *x1, float *x2, Bool *existeRaizReal);
void exibirResultado(float *x1, float *x2, Bool *existeRaizReal);

int main(){
    float a, b, c, x1, x2;
    Bool existeRaizReal = TRUE;
    lerValores(&a, &b, &c);
    calcEquacaoSegundoGrau(a, b, c, &x1, &x2, &existeRaizReal);
    exibirResultado(&x1, &x2, &existeRaizReal);
    return 0;
}

void lerValores(float *a, float *b, float *c){
    printf("Informe o valor de A: ");
    scanf("%f", a);
    printf("Informe o valor de B: ");
    scanf("%f", b);
    printf("Informe o valor de C: ");
    scanf("%f", c);
}

void calcEquacaoSegundoGrau(float a, float b, float c, float *x1, float *x2, Bool *existeRaizReal){
    float delta = pow(b, 2) - 4*a*c;
    if(delta < 0){
        *existeRaizReal = FALSE;
    } else{
        *x1 = (-b + sqrt(delta)) / (2*a);
        *x2 = delta == 0 ? *x1 : (-b - sqrt(delta)) / (2*a);
    }
}

void exibirResultado(float *x1, float *x2, Bool *existeRaizReal){
    if(*existeRaizReal == FALSE){
        printf("Equacao sem raizes reais.\n");
    } else if(*x1 == *x2){
        printf("X = %f\n", *x1);
    } else{
        printf("X1 = %.2f\n", *x1);
        printf("X2 = %.2f\n", *x2);
    }
}