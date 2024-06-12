#include <stdio.h>
int main () {
    float tempFahrenheit=0,tempCelsius;

    while (tempFahrenheit!=-1){
        printf("Informe a temperatura em Fahrenheit para conversao. Digite -1 para sair.\n");
        scanf("%f",&tempFahrenheit);
        tempCelsius =  5.0 * (tempFahrenheit- 32.0)/9.0;

        if (tempFahrenheit!=-1){
            printf("%.2f e o valor da temperatura em Celsius",tempCelsius);
        }else{
            printf("Voce saiu!!");
        }
        
    }
    
    
}