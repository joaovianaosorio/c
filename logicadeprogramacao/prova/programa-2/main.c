/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma = 0;
    int i, j;

    printf("\tPrograma 2\n");
    printf("\a\a\a\a\a\a");
    printf("Digite 9 numeros para fazer uma matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz inserida:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    for(i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++){
            if(i == j){
                soma += matriz[i][j];
            }
        }
    }

    printf("\nSomatorio da diagonal principal: %d\n", soma);

    return 0;
}
