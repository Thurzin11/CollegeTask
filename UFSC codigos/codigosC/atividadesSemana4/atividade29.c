#include <stdio.h>

int main() {
  int numUm, numDois, mdc;
  printf("Informe dois números para determinar o MDC:\n");
  scanf("%d", &numUm);
  scanf("%d", &numDois);

  while(numDois!=0){
    mdc = numDois;
    numDois = numUm % numDois;
    numUm = mdc;
  }
  printf("%d", mdc);

}
