#include <stdio.h>

int main(){
    int numero,fatorial=0;
    printf("Informe um numero para obter o fatorial:\n");
    scanf("%d",&numero);

    for (fatorial = 1; numero >1; numero--){
        fatorial = fatorial*numero;
    }
    printf("%d",fatorial);
    
}
