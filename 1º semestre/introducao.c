#include <stdio.h>

int main(){

    int f, k, n;
    f = 1;
    k = 1;
    printf("Informe um número inteiro positivo para ser calculado seu fatorial: ");
    scanf("%d", &n);
    printf("\n");

    while(k <= n){
        printf("%d x %d = ", f, k);
        f *= k++;
        printf("%d\n", f);
    }

    printf("\n=> Fatorial de %d = %d \n", n, f);

    return 0;
}