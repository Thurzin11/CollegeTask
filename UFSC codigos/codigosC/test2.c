#include <stdio.h>
int main(){
  int s = 0, n = 1;
  do{
    s = s + n;
    n = n + 1;
  } while(n>5);
  printf("%d\n",s);
}