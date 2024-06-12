#include <stdio.h>
int main(){
    int detroIntervalo=0,foraIntervalo=0,input;
    printf("Informe 10 números:\n");
    for (int i = 0; i <10; i++){
        scanf("%i",&input);
        if (input>=10 && input<=20){
            detroIntervalo++;
        }else{
            foraIntervalo++;
        }   
    }
    printf("Vezes que foram informados números dentro da faixa de [10-20]: %i\n", detroIntervalo);

    printf("Vezes que foram informados números fora da faixa de [10-20]: %i\n", foraIntervalo);
}
