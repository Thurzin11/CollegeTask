/*
Autor: Arthur Santos Gonçalves
Data: 11/04/2024
Descricao do problema: Problema 3: mostrar a média de três números informados com uma casa após a vírgula e informar aprovado se a média for maior ou igual que 6.

Algoritmo Informal
1) receber as notas informadas pelo usuario
2) calcular a media
3) mostre na tela o resultado da media
4) Informar se o aluno esta aprovado com base na sua media

Teste de mesa
(valores de entrada, p.e. teclado, indicar com -> )
(valores de saída, p.e. tela, indicar com * ou criar última coluna 'saída')

    n1  | n2 | n3  | media | saida
--------------------------------------
->	6   |    |     |       |   
		|->6 |     |       |
		|    |-> 6 |       |
		|    |     |   6   | 
		|    |     |       | 6 
		|	 |     |       | Aprovado  
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, media;
    printf("Informe a primeira nota");
    scanf("%f", &n1);
    printf("Informe a segunda nota");
    scanf("%f", &n2);
    printf("Informe a terceira nota");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("Media das notas é %.2f", media);
    if (media >= 6){
        printf("\nAluno aprovado");
    }

    return 0;
}