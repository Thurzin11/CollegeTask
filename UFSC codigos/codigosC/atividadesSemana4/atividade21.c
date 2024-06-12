#include <stdio.h>
int main () {
    int valorTabuada,contadorTabuada=0,resultado;

    printf("Informe numero para apresentação da tabuada:\n");
    scanf("%d",&valorTabuada);

    while (contadorTabuada<=10){
        resultado = valorTabuada*contadorTabuada;
        printf("%d X %d = %d\n",valorTabuada,contadorTabuada,resultado);
        contadorTabuada++;
    }
    
}