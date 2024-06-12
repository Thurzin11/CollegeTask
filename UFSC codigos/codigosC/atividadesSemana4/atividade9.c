/*
Crie um programa que solicite que o usuário informe um número. A seguir o programa deve informar se esse número é par ou ímpar. Dica: o operador “%” retorna o resto da divisão. Por exemplo, 5%2=1 e 8%3=2
    Autor: Arthur Santos Gonçalves     Data:18/04/2024
*/

#include <stdio.h>

int main(){
    int numeroInformado;
    printf("Informe um numero");
    scanf("%d",&numeroInformado);
    if (numeroInformado%2==0){
        printf("par");
    }else{
        printf("impar");
    }
}
