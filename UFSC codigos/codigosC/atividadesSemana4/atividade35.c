#include <stdio.h>

int main() {
    float m[4][5] = {{1,2,3,4,55.5}, {3,3,3,3,3}, {9,9,9,19.9,29.9}, {9,7,19.9,29.99,29.9}},menorElemento,somaPrimeiraLinha=0;


    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            printf("[%.2f],",m[i][j]);
            if (i==0 && j==0){
                menorElemento = m[i][j];
            }
            if (m[i][j]<menorElemento){
                menorElemento = m[i][j];
            }   
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++){
        somaPrimeiraLinha += m[i][0];
    }

    printf("Menor elemento da matriz: %.2f\n",menorElemento);
    printf("Soma dos elementos da primeira coluna da matriz: %.2f\n",somaPrimeiraLinha);
    printf("Elementos da ultima linha da matriz:");
    for (int i = 0; i < 5; i++){
        printf(" %.2f,",m[3][i]);
    }
    
    
}
