#include <stdio.h>
int main () {
    int candidatoUm=0, candidatoDois=0,candidatoTres=0,nulo=0,branco=0,totalVotos=0,voto;

    while (voto!=0){
        printf("Informe os votos digitando um valor entre de 1 a 5 em cada linha. Informe 0 (zero) para finalizar e ver o resultados.\n");
        scanf("%d", &voto);
        switch (voto){
        case 1: candidatoUm++;
            break;
        case 2: candidatoDois++;
        break;
        case 3: candidatoTres++;
        break;
        case 4: nulo++;
        break;
        case 5: branco++;
        break;
        }
    }
    totalVotos = candidatoUm+candidatoDois+candidatoTres+nulo+branco;
    printf("\nVotos candidato 1: %d",candidatoUm);
    printf("\nVotos candidato 2: %d",candidatoDois);
    printf("\nVotos candidato 3: %d",candidatoTres);
    printf("\nVotos nulos: %d",nulo);
    printf("\nVotos brancos: %d",branco);
    printf("\nTotal de votos: %d",totalVotos);
}