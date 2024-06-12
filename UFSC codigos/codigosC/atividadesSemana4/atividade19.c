#include <stdio.h>
int main () {
    for (int i = 0; i <=10; i++){
        printf("(%d,",i);
        for (int j = 1; j <=10; j++){
            printf("%d ",j);
        }
        if (i!=10){
        printf("),\n");    
        }else{
        printf(")\n");    
        }   
    }
}