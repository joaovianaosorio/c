/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int k, n = 0, soma = 0;
    printf("\tComando continue\n\n");
    for (k = 0; k < 5; k++)
    {
        printf("Número %d: ", k + 1);
        scanf("%d", &n);
        if(n < 0)
            continue;
        soma = soma + n;
    }
    printf("\nSomatório: %d", soma);

    return 0;
}
