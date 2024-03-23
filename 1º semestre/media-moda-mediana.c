#include <stdio.h>
#include <math.h>

#define TAM 7 //tamanho do vetor

int main(){
    int v[TAM] = {30, 25, 12, 90, 3, 6, 1}, moda;
    float media = 0, mediana = 0;

    // Ordenação do vetor
    for(int i = 0, aux; i < TAM; i++){
        for(int j = i+1; j < TAM; j++){
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    
    // Cálculo da média
    for(int i = 0; i < TAM; i++){
        media += v[i];
    }
    media /= TAM;

    // Cálculo da mediana [1,3,6,12,25,30,90]
    if(TAM % 2 == 0){
        mediana = (v[TAM/2] + v[TAM/2 - 1]) / 2.0;
    } else{
        float n = TAM/2;
        int m = floor(n);
        mediana = v[m];
    }

    // Cálculo da moda


    
    return 0;
}