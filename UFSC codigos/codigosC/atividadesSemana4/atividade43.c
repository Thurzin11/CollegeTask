#include <stdio.h>
int fat(int n){
        int fatorial;
        for (fatorial = 1; n >1; n--){
            fatorial = fatorial*n;
        }
        return fatorial;
}
int main() {
    int numero;
    printf("Informe um numero para obter o fatorial:\n");
    scanf("%d",&numero);
    // fatorial =  fat(numero);
    printf("O fatorial de %d e %d.\n", numero, fat(numero));
}
