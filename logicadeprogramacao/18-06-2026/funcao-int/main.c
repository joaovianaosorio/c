/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int somar (int, int);


int main()
{
    int n1, n2, res = 0;
    printf("Funções 2\n\n");
    printf("Número 1: ");
    scanf("%d", &n1);
    printf("Número 2: ");
    scanf("%d", &n2);
    res = somar (n1, n2);
    printf("%d + %d = %d", n1, n2, res);

    return 0;
}
int somar(int n1, int n2){
 return n1 + n2;
}
