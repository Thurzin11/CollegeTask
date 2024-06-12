#include <stdio.h>
int main () {
    int  contador=5;
    do{
        printf("%d ", contador);
        contador++;
    } while (contador>=5 && contador<=100);
}