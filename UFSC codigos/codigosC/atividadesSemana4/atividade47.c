#include <stdio.h>

int checkTriangulo(int x,int y,int z){
    if (x+y>z || x+z>y || y+z>x){
        return 1;
    }else{
        return 0;
    }
    
    
}

int main() {
    float x,y,z;
    printf("Digite três valores, um em cada linha.\n");
    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&z);

    if(checkTriangulo(x,y,z)==1){
        printf("Estes valores formam um triângulo.");
    }else{
        printf("Estes valores não formam um triângulo.");
    }
    
}
