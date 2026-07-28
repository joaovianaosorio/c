/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int k, numeros[7];
    printf("\t\tVetores - 4\n");
    for (k = 0; k < sizeof(numeros) / 4; k++)
        numeros[k] = 8;
    for (k =0; k < sizeof(numeros) / 4; k++)
        printf("%d ", numeros[k]);

    return 0;
}
