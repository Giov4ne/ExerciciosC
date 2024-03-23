/*
6. Faça um programa que solicite um número positivo. Em seguida, o programa deve informar a
tabuada de 0 a 10 deste número. Utilize os tipos de dados adequados e trate dados inválidos, tais
como valores negativos.
○ Exemplo, dado o número 7, a saída esperada é "0 x 7 = 0, 1 x 7 = 7, ..., 10 x 7 = 70".
*/

#include <stdio.h>

int main(){
    int num;

    do{
        printf("Informe um numero positivo: ");
        scanf("%d", &num);
        if(num < 0){
            printf("Valor invalido!!\n");
        } 
    } while(num < 0);

    printf("\nTabuada de %d:\n", num);

    for(int i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num*i);
    }

    return 0;
}