/*
15. Faça um programa que solicite dois números positivos e, em seguida, exiba o produto destes
números. Não utilize o operador aritmético *. Ao invés disso, utilize um laço de repetição para
realizar este cálculo.
○ Exemplo, dado os números aleatório 7 e 3, a saída é 21.
*/

#include <stdio.h>

int main(){
    int n1, n2;
    int prod = 0;

    do{
        printf("Digite o numero 1: ");
        scanf("%d", &n1);
        if(n1 < 0){
            printf("O valor precisa ser maior ou igual a 0.\n");
        }
    } while(n1 < 0);

    do{
        printf("Digite o numero 2: ");
        scanf("%d", &n2);
        if(n2 < 0){
            printf("O valor precisa ser maior ou igual a 0.\n");
        }
    } while(n2 < 0);

    for(int i = 1; i <= n2; i++){
        prod += n1;
    }

    printf("\nProduto: %d\n\n", prod);
    
    return 0;
}