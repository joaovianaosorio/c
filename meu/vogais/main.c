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
    char alfa[5] = {'A', 'E', 'I', 'O', 'U'};
    printf("\tVogais\n");
    for(k = 0; k < 5; k++){
      printf("%c // ", alfa[k]);
      printf("Endereço variável: %p\n", &alfa[k]);
    }

    return 0;
}
