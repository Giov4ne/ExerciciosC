#include <stdio.h>

// Declaração das constantes
#define NUM_BIMESTRES 4
#define NOTAS_POR_BIMESTRE 2

int main(){

    float notas[NUM_BIMESTRES][NOTAS_POR_BIMESTRE], medias[NUM_BIMESTRES], soma;

    for(int i = 0; i < NUM_BIMESTRES; i++){
        printf("\n\n%d° Bimestre\n", i+1);
        soma = 0;
        for(int j = 0; j < NOTAS_POR_BIMESTRE; j++){
            do{
                printf("Nota %d: ", j+1);
                scanf("%f", &notas[i][j]);
                if(notas[i][j] < 0 || notas[i][j] > 10){
                    printf("A nota precisa ser entre 0 e 10.\n");
                }
            } while(notas[i][j] < 0 || notas[i][j] > 10);
            soma += notas[i][j];
        }
        medias[i] = soma / NOTAS_POR_BIMESTRE;
        printf("Media bimestral: %.2f ", medias[i]);
        if(medias[i] < 7){
            printf("(abaixo da media)");
        }
        // printf(medias[i] > 7 ? "(acima da media)\n" : "(abaixo da media)\n");
    }
}