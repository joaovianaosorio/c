/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num[15], k;
    printf("\t\tVetores - Exercício 1\n");
    for (k = 0; k < sizeof(num) / 4; k++)
        num[k] = k + 1;
    for (k = 0; k < sizeof(num) / 4; k++)
    printf("%d ", num[k]);

    return 0;
}
