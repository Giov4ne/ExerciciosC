#include <stdio.h>

int calcDet(int m[3][3]){
    return m[0][0]*m[1][1]*m[2][2] + m[0][1]*m[1][2]*m[2][0] + m[0][2]*m[1][0]*m[2][1] - (m[0][1]*m[1][0]*m[2][2] + m[0][0]*m[1][2]*m[2][1] + m[0][2]*m[1][1]*m[2][0]);
}

int main(){
    printf("\n========= Calculadora de determinante de matriz 3x3 =========\n\n");
    int matriz[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Linha %d, coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\nMatriz:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d/t", matriz[i][j]);
        }
        printf("\n");
    }
    int determinante = calcDet(matriz);
    printf("\nDeterminante: %d\n", determinante);
    return 0;
}