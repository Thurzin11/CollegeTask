//
//

#include <stdio.h>

int main(){
    int nro, o_menor, o_maior,cont=1;

    printf("Informe %d numero ",cont);  
    scanf("%d",&nro);

    o_maior = nro;
    o_menor = nro;
    cont++;
    for(int i = cont; i <=5; i++){
        printf("Informe %d numero ",i);  
        scanf("%i",&nro); 
        if(nro>o_maior){
            o_maior = nro;
        }else if(nro<o_menor){
            o_menor = nro;
        }
    }
    printf("O maior numero e: %d\n", o_maior);
    printf("O menor numero e: %d", o_menor);
    

}
    

