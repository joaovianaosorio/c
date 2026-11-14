/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\a\a\a\a\a");
    printf("\t\tUsando 'Calloc'\n\n");
    
    float *p = (float*) calloc(3, sizeof(float));
    if(p == NULL){
     printf("Erro!");
     exit(1);
    }
    p[2] = 10;
    p[1] = 0.3;
    printf("p[0] = %.1f | p[1] = %.1f | p[2] = %.1f\n", p[0], p[1], p[2]);
    free(p);

    return 0;
}
