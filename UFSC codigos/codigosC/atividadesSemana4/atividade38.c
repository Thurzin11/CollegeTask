#include <stdio.h>

int main() {
    float alunos[5] = {110,120,122,105,107},media=0;
    float notas[13][2] = {{110,6},{110,5},{105,6},{110,8},{122,6.6},{105,9},{122,2},{122,8},{107,2},{120,6},{107,4},{120,7},{120,10}};
    int cont=0;

    for (int i = 0; i < 5; i++){
        media = 0;
        cont = 0;
        printf("Media do aluno %f = ",alunos[i]);        
        for (int j = 0; j < 13; j++){
            for (int k = 0; k < 2; k++){
                // printf("[%f],",notas[j][k]);
                if (notas[j][0]==alunos[i]){
                    media += notas[j][1];
                    // printf("Nota %f ",notas[j][1]);
                    cont++;
                }
            }
        }
        printf("%f \n",media/cont);
    }
    
    
}
