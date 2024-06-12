#include <stdio.h>
int main(){
    unsigned int input,soma=0;
    printf("Informe um número para a soma de cada dígito:\n");
    scanf("%d",&input);
            while (input>0){
                soma = soma + (input-((input/10)*10));
                input = (input/10);
            }
            printf("%d ", soma);
    }
