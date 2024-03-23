/*
Faça um programa que leia o nome de um produto, o preço e a quantidade comprada e armazene
estas informações em uma estrutura. Em seguida, o programa deve escrever o nome do produto,
quantidade, preço unitário e o valor total a ser pago, considerando que são oferecidos diferentes
descontos com base no número de unidades compradas. Os descontos concedidos devem
respeitar tabela a seguir:
a. Até 5 unidades: sem desconto
b. De 6 a 15 unidades: 10% de desconto
c. Acima de 15 unidades: 20% de desconto
*/

#include <stdio.h>

typedef struct {
    char nome[50];
    float preco, valorTotal, desconto;
    int qtd;
} Produto;

int main(){
    Produto produto;

    printf("Nome do produto: ");
    scanf("%s", &produto.nome);
    
    do{
        printf("Valor do produto: R$ ");
        scanf("%f", &produto.preco);
        if(produto.preco <= 0){
            printf("O valor precisa ser maior que 0.\n");
        }
    } while(produto.preco <= 0);

    do{
        printf("Quantidade comprada: ");
        scanf("%d", &produto.qtd);
        if(produto.qtd < 1){
            printf("Informe um valor maior ou igual a 1.\n");
        }
    } while(produto.qtd < 1);

    produto.desconto = 0;

    if(produto.qtd > 5 && produto.qtd <= 15){
        produto.desconto = 0.1;
    } else if(produto.qtd > 15){
        produto.desconto = 0.2;
    }

    produto.valorTotal = produto.preco * produto.qtd;
    produto.valorTotal -= produto.valorTotal * produto.desconto;

    printf("\n");
    printf("Nome do produto: %s\n", produto.nome);
    printf("Quantidade comprada: %d\n", produto.qtd);
    printf("Preco unitario: %.2f\n", produto.preco);
    printf("Desconto: %d%%\n", (int) (produto.desconto * 100));
    printf("Valor total a ser pago: R$ %.2f \n\n", produto.valorTotal);

    return 0;
}