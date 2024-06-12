// Programa que apresenta se o segundo numero informado é maior, menor ou igual 
// ao primeiro número informado.
//
// Autor: Arthur Santos Gonçalves     Data:18/04/2024

#include <stdio.h>

int main(){
    int primeiroNumero,segundoNumero;

    printf("Informe o primeiro numero");
    scanf("%d",&primeiroNumero);

    printf("Informe o segundo numero");
    scanf("%d",&segundoNumero);

    if (segundoNumero>primeiroNumero){
        printf("Segundo numero é maior que o primeiro.");
    }else if (segundoNumero<primeiroNumero){
        printf("Segundo numero é menor que o primeiro.");
    }else{
        printf("Segundo numero é igual ao primeiro.");
    }
}