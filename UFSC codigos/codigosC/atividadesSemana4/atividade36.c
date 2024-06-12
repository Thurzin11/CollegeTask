#include <stdio.h>

int main() {
    float m[4][5] = {{1,2,3,4,55.5}, {3,3,3,3,3}, {9,9,9,19.9,29.9}, {9,7,19.9,29.99,29.9}},maiorElemento,somaElemento=0,media=0;

    maiorElemento = m[0][0];
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            // printf("[%.2f],",m[i][j]);
            somaElemento += m[i][j];
            if (m[i][j]>maiorElemento){
                maiorElemento = m[i][j];
            }   
        }
        printf("\n");
    }
    media = somaElemento/20;
    printf("Maior elemento da matriz: %f \n",maiorElemento);
    printf("Media dos elementos da matriz: %f \n",media);
    printf("Elementos da matriz maiores que a media: ");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            if (m[i][j]>media){
                printf("%f,",m[i][j]);
            }   
        }
    }
    
    
}
