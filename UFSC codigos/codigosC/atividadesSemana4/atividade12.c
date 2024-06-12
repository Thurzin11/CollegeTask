#include <stdio.h>
int main(){
    int numeroInicial=10,numeroMaximo=20;
    //     while (numeroMaximo<=60){
    //     for (int i = 0; i < 10; i++){
    //         printf("%d ",numeroInicial);
    //         numeroInicial++;
    //     }
    //     printf("\n");
    //     numeroInicial = numeroInicial - 9;
    //     numeroMaximo++;
    // }

    for (int i = 0; i <=40; i++){
        printf("\n");
        for (int j = 0; j < 10; j++){
            printf("%d ", numeroInicial);
            numeroInicial++;
        }
        numeroInicial = numeroInicial-9;
    }
    return 0;
}
