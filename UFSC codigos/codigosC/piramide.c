#include <stdio.h>
#include <stdlib.h>
	
int main(){
	int i,j,nPiramide;
	printf("Informe a quantidade de * para a piramide: ");
	scanf("%i",&nPiramide);
	for(i = 1; i <= nPiramide; i++){
		for(j = 1; j<= i; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
	
	
}
