/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int k;
    int pares[7] = {2, 4, 6, 8, 10, 12, 14};
    printf("\t\tVetores 3\n");
    //for (k = 0; k < 5; k++)
    for (k = 0; k < sizeof(pares) / 4; k++)
        printf("%d ", pares[k]);
    return 0;
}
