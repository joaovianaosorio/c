/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *p;
    printf("\a\a\a\a");
    printf("\t\tUsando \"malloc\"\n\n");

    p = (float*) malloc(3 * sizeof(float));
    if (p == NULL){
     printf("Erro!");
     exit(1);
    };
    
    p[1] = 23.5;
    p[2] = 11.98;
    printf("p[1] = %.1f | p[2] = %.1f\n", p[1], p[2]);
    free(p);
    
    return 0;
}