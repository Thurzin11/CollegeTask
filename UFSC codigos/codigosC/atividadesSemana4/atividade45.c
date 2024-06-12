#include <stdio.h>
#include <math.h>

int calculaBhaskara(int a,int b,int c){
    int delta=pow(b,2)-(4*a*c);
    int bhaskara = sqrtf(delta);
    bhaskara = (-b+bhaskara);
    bhaskara = bhaskara/(2*a);
    return bhaskara;
}

int main() {
    int a,b,c ,bhaskara;
    printf("Digite os valores de a, b e c, um em cada linha.\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    bhaskara = calculaBhaskara(a,b,c);
    printf("A raíz positiva é %d ", bhaskara);
}
