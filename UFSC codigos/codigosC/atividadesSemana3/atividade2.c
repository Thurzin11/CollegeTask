/*
Autor: Arthur Santos Gonçalves
Data: 11/04/2024
Descricao do problema: Problema 2: mostrar a sequência de 100 números inteiros a partir de um número informado (iniciar no próximo número inteiro).

Algoritmo Informal
1) receba um numero do usuario
2) some um e armazene para somar posteriormente
3) mostre na tela o resultado
4) volte ao passo 2 e repita ate ocorram 100 repeticoes

Flugograma no arquivo em anexo (.gif, .jpg ou .png)

Teste de mesa
(valores de entrada, p.e. teclado, indicar com -> )
(valores de saída, p.e. tela, indicar com * ou criar última coluna 'saída')

numero  | cont  
----------------------
->	6   |
		|	0
	7*	|
		|	1
	8*	|
		|	2
	..	|	..	
*/

#include <stdio.h>
#include <stdlib.h>
	
int main(){
	int numero,cont =0;
	printf("Informe um numero ");
	scanf("%i",&numero);
	while (cont<=100)
	{
		printf("\n%d",numero++ );
		cont++;
	}
	return 0;
}
