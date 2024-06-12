#include <stdio.h>
#include <stdlib.h>
int main(){
    int  tamanhoArray=10;
    float vn1[tamanhoArray], vn2[tamanhoArray],media[tamanhoArray];

    printf("Informe os 10 valores para vn1, 1 em cada linha.\n");
    for (int i = 0; i < tamanhoArray; i++){
        scanf("%f",&vn1[i]);
    }
    printf("Informe os 10 valores para vn2, 1 em cada linha.\n");
    for (int i = 0; i < tamanhoArray; i++){
        scanf("%f",&vn2[i]);
    }


    for (int i = 0; i < 10; i++) {
        media[i] = (vn1[i] + vn2[i]) / 2;
    }

    printf("Medias:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.6f,", media[i]);
    }

    


}
