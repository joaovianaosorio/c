/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 0, t = 0;
    printf("\tResumo - Aula 2\n");//comentário
    /*
    comentário em 
    mais de uma 
    linha
    */
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    scanf("%d", &n2);
    t = n1 + n2;
    printf("O valor de %d + %d = %d\n", n1, n2, t);
    t = n1 - n2;
    printf("O valor de %d - %d = %d\n", n1, n2, t);
    t = n1 * n2;
    printf("O valor de %d x %d = %d\n", n1, n2, t);
    t = n1 / n2;
    printf("O valor de %d / %d = %d\n", n1, n2, t);
    t = n1 % 2;
    if (t == 0){
     printf("O primeiro número é par.");
    }
    else {
     printf("O primeiro número é ímpar.");
    }

    return 0;
}
