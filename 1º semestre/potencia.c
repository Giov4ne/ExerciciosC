/*
14. Faça um programa que solicite a base e o expoente e, em seguida, exiba o valor da potência. Não
utilize a função pow() para calcular a potência. Ao invés disso, utilize um laço de repetição para
realizar este cálculo.
○ Exemplo 1, dado a base 4 e expoente 3, a saída esperada é 64.
○ Exemplo 2, dado a base 3 e expoente 1, a saída esperada é 3.
*/

#include <stdio.h>

int main(){
    int base, expoente, resultado;

    printf("Informe a base: ");
    scanf("%d", &base);

    do{
        printf("Informe o expoente: ");
        scanf("%d", &expoente);
        if(expoente < 0){
            printf("O expoente precisa ser maior ou igual a 0.\n");
        }
    } while(expoente < 0);

    if(expoente == 0){
        resultado = 1;
    } else{
        resultado = base;
        for(int i = 2; i <= expoente; i++){
            resultado *= base;
        }
    }

    printf("\n%d ^ %d = %d\n\n", base, expoente, resultado);

    return 0;
}