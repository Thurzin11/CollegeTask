#include <stdio.h>
int main () {
    for (int i = 0; i <=1000 ; i++){
        if (i%2==0){
            if (i==1000){
                printf("%d", i);
                break;
            }
            printf("%d,", i);
        }
    }
}