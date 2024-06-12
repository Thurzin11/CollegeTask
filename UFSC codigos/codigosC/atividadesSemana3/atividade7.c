/*
Autor: Arthur Santos Gonçalves
Data: 11/04/2024
Descricao do problema: Calcular a média de números que foram informados até se digitar -1. A cada número informado mostrar a quantidade de números já informados. Dê precisão de 1 casa decimal após a vírgula na resposta

Algoritmo Informal
1) Sera informado notas ate o usuario digitar -1
2) ira somar as notas e ira dividir pela quantidade de notas para gerar a media
3) mostrar a media

Teste de mesa
(valores de entrada, p.e. teclado, indicar com -> )
(valores de saída, p.e. tela, indicar com * ou criar última coluna 'saída')

 notaInformada  | soma       | media       | quantidadeNotas
---------------------------------------------------------------
    ->5         |   ->5		 |     		   |  1
    ->5	        |   ->10 	 |     		   |  2
    ->5    		|   ->15 	 |  		   |  3
    ->5	        |   ->20 	 |     		   |  4
    ->..   		|   ->..	 |  		   |  ..
    ->5    		|   ->250	 |  		   |  50
    ->-1   		|       	 |  		   |    
                |       	 | 	->250/50   |
                | 			 |     5*      |
*/
#include <stdio.h>

void main(){
    float notaInformada, soma, media;
    int quantidadeNotas;

    while (notaInformada != -1){
        printf("Informe uma nota: ");
        scanf("%f", &notaInformada);
        if (notaInformada != -1)
        {
            soma = soma + notaInformada;
            quantidadeNotas++;
        }
    }
    media = soma / quantidadeNotas;
    printf("Media das notas é %.2f", media);
    

}


