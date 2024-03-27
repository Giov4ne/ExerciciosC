/*Faça um programa que recebe o tempo em segundos, e
converte para horas, minutos e segundos;*/

#include <stdio.h>
#include <math.h>

int lerTempoEmSegundos();
void converterTempo(int s, int *horas, int *minutos, int *segundos);
void exibirTempo(int horas, int minutos, int segundos);

int main(){
    int s, horas, minutos, segundos;
    s = lerTempoEmSegundos();
    converterTempo(s, &horas, &minutos, &segundos);
    exibirTempo(horas, minutos, segundos);
    return 0;
}

int lerTempoEmSegundos(){
    int s;
    do{
        printf("Informe o tempo em segundos: ");
        scanf("%d", &s);
        if(s < 0)
            printf("ERRO: O tempo precisa ser maior ou igual a 0 segundos.\n");
    } while(s < 0);
    return s;
}

void converterTempo(int s, int *horas, int *minutos, int *segundos){
    *horas = (int) floor(s/3600);
    s %= 3600;
    *minutos = (int) floor(s/60);
    *segundos = s % 60;
}

void exibirTempo(int horas, int minutos, int segundos){
    printf("Tempo convertido: %d hora(s), %d minuto(s) e %d segundo(s).\n", horas, minutos, segundos);
}