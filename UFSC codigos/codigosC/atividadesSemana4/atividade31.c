#include <stdio.h>
#include <stdlib.h>
int main(){
    
    int u[8], w[9],tamanhoArray=0;
    int v[8];


    printf("Informe os 8 valores para o vetor u, 1 em cada linha.\n");
    for (int i = 0; i < 8; i++){
        scanf("%d",&u[i]);
    }    

    printf("Informe os 9 valores para o vetor w, 1 em cada linha.\n");
    for (int i = 0; i < 9; i++){
        scanf("%d",&w[i]);
    }    

    for (int i = 0; i <= 7; i++){
        for (int j = 0; j <= 8; j++){
            if (u[i] == w[j]){
                v[tamanhoArray] = u[i];
                tamanhoArray++;
            }
        }
    }
    printf("Numeros do vetor v\n");
    for (int i = 0; i <  tamanhoArray; i++){
        if (i==tamanhoArray-1){
            printf("%d",v[i]);
        }else{
            printf("%d,",v[i]);
        }
    }
}
