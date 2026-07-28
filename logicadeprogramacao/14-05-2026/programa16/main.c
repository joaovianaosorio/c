/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, r = 1;
    printf("\t\tPrograma 16 - Sequência de Números\n\n");
    printf("Escreva um número entre 4 e 40: ");
    scanf("%d", &n);
    if( n > 4 && n < 40){
        for(n; r <= n; r++){
            printf("%d\n", r);
        }
    } else {
        printf("Você não seguiu a regra.");
    }

    return 0;
}
