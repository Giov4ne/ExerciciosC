/* A série de Fibonacci é uma sequência de números inteiros, começando por 1 e 1, onde cada termo
subsequente corresponde à soma dos dois anteriores. Faça um programa que solicite o n-ésimo
termo da série e retorne o número correspondente ao termo por meio de uma função recursiva.
○ Exemplo 1, dado o termo 7, a saída esperada é 13.
○ Exemplo 2, dado o termo 9, a saída esperada é 34 */

#include <stdio.h>

int fibonacci(int n1, int n2, int aux, int termo);

int main(){
    int termo;
    printf("Numero do termo da serie de Fibonacci: ");
    scanf("%d", &termo);
    printf("Valor: %d", fibonacci(1, 1, 0, termo));
    return 0;
}
// 1, 1, 2, 3, 5, 8, 13
int fibonacci(int n1, int n2, int aux, int termo){
    if(termo != 1){
        aux = n1;
        n1 = n2;
        n2 = n1 + aux;
        return fibonacci(n1, n2, aux, termo-1);
    }
}