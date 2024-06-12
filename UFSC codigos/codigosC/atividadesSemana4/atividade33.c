#include <stdio.h>

int main() {
    float numerosVetor[20],media=0.00,numero;
    int cont=0;


    printf("Informe os valores, 1 em cada linha. Informe 0 (zero) para finalizar. \n");
    for (int i = 0; i < 20; i++){
            scanf("%f",&numero);
            if (numero!=0){
                numerosVetor[i]=numero;
                media += numero;
                cont++;
            }else{
                i = 20;
            }
    }
    media = media/cont;
    printf("Media: %f\n",media);

    printf("Valores acima da media:");   
    for (int j = 0; j <cont; j++){
        if (numerosVetor[j]>media){
            printf(" %f,",numerosVetor[j]);
        } 
    }
}
