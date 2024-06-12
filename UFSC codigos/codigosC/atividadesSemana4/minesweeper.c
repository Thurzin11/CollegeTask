#include <stdio.h>

int main() {
    
    int tamanhoTabuleiro;
    printf("Informe o tamanho do tabuleiro: ");
    scanf("%d",&tamanhoTabuleiro);
    
    int minas[tamanhoTabuleiro];
    int tabuleiro[tamanhoTabuleiro];

    for (int i = 0; i < tamanhoTabuleiro; i++){
        int bomba;
        printf("Digite 1 para adicionar a bomba e 0 para nao adicionar: ");
        scanf("%d",&bomba);
        if (bomba==1)
            minas[i] = bomba;
        else
            minas[i] = 0;
    }

    printf("Lista de bombas \n[");
    for (int i = 0; i < tamanhoTabuleiro; i++){
        if (i!=0){
            printf(", ");
        }
        printf("%d",minas[i]);
    }
    printf("]");

    for (int i = 0; i < tamanhoTabuleiro; i++) {
            int bombas = 0;
            if (minas[i]==1){
                bombas++;
            }
            if (i>0 && minas[i-1] == 1){
                bombas++;
            }
            if (i<tamanhoTabuleiro-1 && minas[i+1] == 1){
                bombas++;
            }
            tabuleiro[i] = bombas;
    }

    printf("\nLista tabuleiro \n[");
    for (int i = 0; i < tamanhoTabuleiro; i++){
        if (i!=0){
            printf(", ");
        }
        printf("%d",tabuleiro[i]);
    }
    printf("]");
}
