#include <stdio.h>

int main(){
    /*
        Faça um programa que solicite o nome de uma substância e sua temperatura. Em seguida, o
        programa deve exibir uma mensagem informando o estado físico que a substância se encontra.
        Devem ser consideradas as substâncias água, etanol, ferro, ouro e mercúrio, bem como seus
        respectivos pontos de fusão e ebulição. Utilize os tipos de dado mais convenientes e trate dados
        inválidos, tais como substância desconhecida.
        ○ Exemplo 1: dada a substância água e a temperatura 58º, a saída esperada é "Estado líquido".
        ○ Exemplo 2: dada a substância etanol e a temperatura 80º, a saída esperada é "Estado gasoso".
    */
    
    int opcao;
    float temperatura, pontoFusao, pontoEbulicao;

    do{
        printf("Escolha uma substancia:\n");
        printf("1- Agua\n");
        printf("2- Etanol\n");
        printf("3- Ferro\n");
        printf("4- Ouro\n");
        printf("5- Mercurio\n");
        scanf("%d", &opcao);
        if(opcao < 1 || opcao > 5){
            printf("Digite um valor entre 1 e 5.\n\n");
        }
    } while(opcao < 1 || opcao > 5);

    printf("Informe a temperatura: ");
    scanf("%g", &temperatura);

    switch(opcao){
        case 1:
            pontoFusao = 0.0;
            pontoEbulicao = 100.0;
            break;
        case 2:
            pontoFusao = -144.1;
            pontoEbulicao = 78.37;
            break;
        case 3:
            pontoFusao = 1538.0;
            pontoEbulicao = 2862.0;
            break;
        case 4:
            pontoFusao = 1064.0;
            pontoEbulicao = 2836.0;
            break;
        case 5:
            pontoFusao = -38.83;
            pontoEbulicao = 356.7;
            break;
    }

    if(temperatura < pontoFusao){
        printf("\nA subtancia se encontra no estado solido.\n");
    } else if(temperatura >= pontoFusao && temperatura < pontoEbulicao){
        printf("\nA substancia se encontra no estado liquido.\n");
    } else{
        printf("\nA substancia se encontra no estado gasoso.\n");
    }

    return 0;
}