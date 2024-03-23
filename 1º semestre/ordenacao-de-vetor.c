#include <stdio.h>

#define TAM 10

int main(){

    int v[TAM] = {-5, 100, 17, 0, 94, -11, -14, 400, 2, 8}, aux;

    for(int i = 0; i < TAM; i++){
        for(int j = i+1; j < TAM; j++){
            if(v[i] < v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }    
    for(int i = 0; i < TAM; i++){
        printf("%d\n", v[i]);
    }

    return 0;
}