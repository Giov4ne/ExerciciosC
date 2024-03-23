/*
Faça um programa que solicite o salário de um funcionário no regime CLT. Em seguida, o programa
deve informar a alíquota do Imposto de Renda e o salário bruto após a dedução do imposto. Utilize
os tipos de dados mais convenientes e trate dados inválidos, tais como salário negativo. Além
disso, considere também a parcela a deduzir do Imposto de Renda.
○ Exemplo 1, dado o salário R$ 1.500,00, a saída esperada é isento e R$ 1.500,00.
○ Exemplo 2, dado o salário R$ 3.500,00, a saída esperada é 15% e R$ 3.329,80.
■ 3.500,00 - (3.500,00 * 0,15 - 354,80) = 3.329,80.
*/

#include <stdio.h>

int main(){
    float salario, aliquota, parcelaADeduzir, salarioLiquido;

    do{
        printf("Informe seu salario: ");
        scanf("%g", &salario);
        if(salario <= 0){
            printf("Valor invalido!\n");
        }
    } while(salario <= 0);

    if(salario <= 2112){
        aliquota = 0;
        parcelaADeduzir = 0;
    } else if(salario > 2112 && salario <= 2826.65){
        aliquota = 0.075;
        parcelaADeduzir = 158.4;
    } else if(salario > 2826.65 && salario <= 3751.05){
        aliquota = 0.15;
        parcelaADeduzir = 370.4;
    } else if(salario > 3751.05 && salario <= 4664.68){
        aliquota = 0.225;
        parcelaADeduzir = 651.73;
    } else{
        aliquota = 0.275;
        parcelaADeduzir = 884.96;
    }

    if(aliquota > 0){
        printf("\nAliquota IR: %g%%\n", aliquota*100);
        salarioLiquido = salario - (salario*aliquota - parcelaADeduzir);
    } else{
        printf("\nIsento de IR.\n");
        salarioLiquido = salario;
    }

    printf("Salario Liquido: R$ %g\n", salarioLiquido);

    return 0;
}