#include <stdio.h>

int main() {
    int n;
    printf("Informe o valor de n:");
    scanf("%d",&n);
    int m[n][n];

    printf("Informe os valores para a matriz (1 em cada linha): ");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d",&m[i][j]);
        }
    }
    printf("Elementos da diagonal principal: ");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i==j){
                printf("%d,",m[i][j]);
            }
        }
    }
    printf("\nElementos da diagonal secundaria: ");
    for (int i = 0; i < n; i++){
        printf("%d,",m[i][n-1-i]);
    }
}
