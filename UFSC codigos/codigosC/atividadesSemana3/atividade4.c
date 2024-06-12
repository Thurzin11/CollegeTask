/*
Autor: Arthur Santos Gonçalves
Data: 11/04/2024
Descricao do problema: Problema 4: Receber números e escrever na tela até que se digite o número 4890.

Algoritmo Informal
1) Sera informado numeros ate ser informado 4890
2) 

Teste de mesa
(valores de entrada, p.e. teclado, indicar com -> )
(valores de saída, p.e. tela, indicar com * ou criar última coluna 'saída')

nParar  | nInformado | saida
--------------------------------------
-> 4890 |   		 |     		   |   
		|->6 		 |     		   |
		|    		 | 6 		   |
   		|   ..		 |  .. 		   |
	    | ->4890	 | 			   |
	    | 			 | "Voce parou"|
*/
#include <stdio.h>

int main() {
	int nParar,nInformado=0;

	nParar = 4890;
	while (nInformado!=nParar){
		printf("Informe um numero: ");
		scanf("%i", &nInformado);
		printf("%d\n",nInformado );
	}
	printf("Voce parou");
	
    
}
