#include <stdio.h>

int main(){
    /*
        Faça um programa que solicite a idade de uma pessoa. Em seguida, o programa deve exibir uma
        mensagem informando se a pessoa é maior de idade. Utilize o tipo de dado mais conveniente e
        trate dados inválidos, tais como valor negativo.
        ○ Exemplo 1: dada a idade 19, a saída deve ser "Maior de idade".
        ○ Exemplo 2: dada a idade 12, a saída deve ser "Menor de idade".
    */
    int idade;

    do{
        printf("Informe sua idade: ");
        scanf("%d", &idade);
        if(idade < 0 || idade > 150){
            printf("Idade inválida!\n");
        }
    } while(idade < 0 || idade > 150);

    if(idade < 18){
        printf("Você é menor de idade!");
    } else{
        printf("Você é maior de idade!");
    }

    return 0;
}