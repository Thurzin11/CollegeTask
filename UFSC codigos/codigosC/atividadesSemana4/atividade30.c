#include <stdio.h>
int main(){
    int numeros[20];
     
    for (int i = 10; i < 30; i++){
        numeros[i-10] = i;
    }
    for (int j = 0; j < 20; j=j+2){
            printf("%d,",numeros[j]);
    }
    printf("\n");
    for (int j = 1; j < 20; j=j+2){
        printf("%d,",numeros[j]);
    }
    
    
}
