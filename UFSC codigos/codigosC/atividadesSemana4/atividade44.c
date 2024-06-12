#include <stdio.h>

int maximoDivisorComum(int numUm,int numDois){
    int mdc;
    while(numDois!=0){
    mdc = numDois;
    numDois = numUm % numDois;
    numUm = mdc;
  }
  return mdc;
}

int main() {
    int numUm, numDois,mdc;
    printf("Digite dois número, um em cada linha.\n");
    scanf("%d", &numUm);
    scanf("%d", &numDois);
    mdc=maximoDivisorComum(numUm,numDois);
    printf("O MDC entre %i e %i é %i.", numUm, numDois, mdc);

}
