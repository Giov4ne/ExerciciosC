/*2. Leia o nome e o sexo de uma pessoa,
apresentando como saída uma das seguintes
mensagens: “Ilmo. Sr.”, para o sexo masculino,
ou a mensagem “Ilma. Sra.”, para o sexo
feminino, seguida do seu nome.*/

#include <stdio.h>

void lerPessoa(char nome[50], char *sexo);
void apresentarMensagem(char nome[50], char sexo);

int main(){
    char nome[50], sexo;
    lerPessoa(nome, &sexo);
    apresentarMensagem(nome, sexo);
    return 0;
}

void lerPessoa(char nome[50], char *sexo){
    printf("Digite seu nome: ");
    scanf("%s", nome);
    do{
        printf("Informe seu sexo ['M' ou 'F']: ");
        scanf(" %c", sexo);
        if(*sexo != 'M' && *sexo != 'm' && *sexo != 'F' && *sexo != 'f'){
            printf("Sexo invalido!\n");
        }
    } while(*sexo != 'M' && *sexo != 'm' && *sexo != 'F' && *sexo != 'f');
}

void apresentarMensagem(char nome[50], char sexo){
    printf(sexo == 'M' || sexo == 'm' ? "Ilmo. Sr. " : "Ilma. Sra. ");
    printf(nome);
}