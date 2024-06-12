#include <stdio.h>


int main(){
    int totalMotocicletas=0,totalAutomoveis=0,totalCaminhao=0,decisao;
    while (decisao!=0){
        printf("0-Sair\n1-Motocicletas\n2-Automoveis\n3-Caminhao\nInforme o tipo de veiculo ");
        scanf("%d",&decisao);

        switch (decisao){
        case 0:
            printf("Voce saiu!!!\n");
            break;
        case 1:
            totalMotocicletas++;
            break;
        case 2:
            totalAutomoveis++;
            break;
        case 3:
            totalCaminhao++;
            break;
        default:
            printf("Voce informou um numero incorreto\n");
            break;
        }

    }
    // as saída deve ter o seguinte formato
     printf("Total de motocicleta: %d\n", totalMotocicletas);
    printf("Total de automovel: %d\n", totalAutomoveis);
    printf("Total de caminhao: %d\n", totalCaminhao);
}
