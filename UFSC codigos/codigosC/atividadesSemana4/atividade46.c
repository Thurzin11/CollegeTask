#include <stdio.h>

char findConceito(float nota){
    if (nota<5){
        return 'D';
    }else if (nota<7){
        return 'C';
    }else if (nota<9){
        return 'B';
    }else if (nota<=10.00){
        return 'A';
    }else{
        return ' ';
        
    }
}

int main() {
    float notaAluno;
    printf("Digite a nota do aluno.\n");
    scanf("%f",&notaAluno);

    char notaConceito = findConceito(notaAluno);
    printf("O conceito é %c.", notaConceito);
}
