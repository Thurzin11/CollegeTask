#include <stdio.h>


unsigned long calcularFatorial(int numero) {
    unsigned long fatorial = 1;

    
    if (numero == 0 || numero == 1)
        return 1;
    else {
       
        for (int i = 2; i <= numero; ++i) {
            fatorial *= i;
        }
        return fatorial;
    }
}


float calcularSerie(int N) {
    float S = 1.0; 

    
    for (int i = 1; i <= N; ++i) {
        S += 1.0 / calcularFatorial(i);
    }

    return S;
}

int main() {
    int numero;
    float ret;

    
    printf("Digite um número: \n");
    scanf("%d", &numero);

    
    ret = calcularSerie(numero);

   
    printf("S = %f", ret);

    return 0;
}