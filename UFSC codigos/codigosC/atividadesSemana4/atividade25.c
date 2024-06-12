#include <stdio.h>
#include <sys/time.h>
int main () {
    int a,b;
    

    printf("Informe dos valores de um intervalo para analises dos numeros primos:\n");
    scanf("%i", &a);
    scanf("%i", &b);
    struct timeval start, stop;
    gettimeofday(&start, NULL);
    printf("Números primos do intervalo: \n");
    for (int i = a; i <= b; i++){
        if (i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0 || i==2 || i==3 || i==5 || i==7 ){ 
            if (i!=1){
                    printf("%d\n", i );
            }
        }
    }
    gettimeofday(&stop, NULL);
    printf("levou %lu us\n", (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec);
}