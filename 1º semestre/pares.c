/*
7. Faça um programa que solicite um número positivo. Em seguida, o programa deve exibir os números
pares de 0 até o número informado pelo usuário. Utilize os tipos de dados adequados e trate dados
inválidos, tais como valores negativos.
○ Exemplo, dado o número 10, a saída é "2, 4, 6, 8, 10". 
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

    for(int i = 2; i <= num; i+=2){
        printf("%d\n", i);
    }

    return 0;
}