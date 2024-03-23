/*2. Faça um algoritmo para calcular a somatória, a soma
dos quadrados e a média dos N primeiros números
naturais.
– Exemplo: N=3
• Soma: 1 + 2 + 3 = 6
• Soma dos quadrados: 12 + 22 + 32 = 14
• Média: Soma / N = 2*/

#include <stdio.h>
#include <math.h>

int lerNum();
void imprimirNumerosAteN(int n);
int soma(int n);
int somaQuadrados(int n);
float media(int n);

int main(){
    int n = lerNum();
    imprimirNumerosAteN(n);
    printf("Soma: %d\n", soma(n));
    printf("Soma dos quadrados: %d\n", somaQuadrados(n));
    printf("Media: %f\n", media(n));
    return 0;
}

int lerNum(){
    int n;
    do{
        printf("Informe o valor de N: ");
        scanf("%d", &n);
        if(n <= 1)
            printf("O valor deve ser no minimo 2.\n");
    } while(n <= 1);
    return n;
}

void imprimirNumerosAteN(int n){
    printf("Numeros: ");
    for(int i = 1; i <= n; i++){
        printf("%d ", i);
    }
    printf("\n");
}

int soma(int n){
    int soma = 0;
    for(int i = 1; i <= n; i++){
        soma += i;
    }
    return soma;
}

int somaQuadrados(int n){
    int somaQuads = 0;
    for(float i = 1; i <= n; i++){
        somaQuads += pow(i, 2);
    }
    return somaQuads;
}

float media(int n){
    return soma(n) / (float) n;
}