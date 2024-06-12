#include <stdio.h>
int main(){
    int numeroQuadrados;
    printf("Informe um número para o tamanho do quadrado:\n");
    scanf("%d",&numeroQuadrados);

    for (int j = 0; j < numeroQuadrados; j++){
        // printf(" ");
        for (int i = 0; i < numeroQuadrados-j; i++){
            printf("  ");
        }
        for (int i = 0; i <= j*2; i++){
            printf("* ");
        }
        printf("\n");
    }
}
