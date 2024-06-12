#include <stdio.h>
int main () {
    for (int i = 1000; i >=0 ; i--){
        if (i%2!=0){
            if (i==1){
                printf("%d", i);
                break;
            }
            printf("%d,", i);
        }
    }
}