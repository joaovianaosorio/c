/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, k;
    printf("\t\tPrograma 14 - Sequência de Números Ímpares\n\n");
    for(n = 0; n < 31; n++){
        k = n % 2;
        if(k != 0){ // != -> diferente de
            printf("%d\n", n);
        }
    }

    return 0;
}
