/*
Autor: Arthur Santos Gonçalves
Data: 11/04/2024
Descricao do problema: Problema 5: Calcular a média de 5 números informados e mostre a média.

Algoritmo Informal
1) Sera informado 5 notas
2) Somar as 5 notas e dividir por 5 para gerar a media
3) mostrar a media

Teste de mesa
(valores de entrada, p.e. teclado, indicar com -> )
(valores de saída, p.e. tela, indicar com * ou criar última coluna 'saída')

 notaInformada  | soma       | media       | quantidadeNotas
--------------------------------------
    ->5         |   ->5		 |     		   |  1 
	->5	        |   ->10 	 |     		   |  2
    ->5    		|   ->15 	 |  		   |  3
	->5	        |   ->20 	 |     		   |  4
    ->..   		|   ->..	 |  		   |  ..
    ->5    		|   ->250	 |  		   |  50
	            |       	 | 	->250/50   |
	            | 			 |     5*      |
*/
#include <stdio.h>

int main() {
	float notaInformada,soma,media,quantidadeNotas;

	while (quantidadeNotas<50){
		printf("Informe uma nota: ");
		scanf("%f", &notaInformada);
        soma = soma + notaInformada;
        quantidadeNotas++;
	}
    media = soma/quantidadeNotas;
    printf("Media das notas é %.2f", media);
	
    
}
