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
    printf("\a\a\a\a");
    printf("\t\tUtilizando 'Realloc'\n\n");
    
    int *p;
    p = (int*) calloc(3, sizeof(int));
    if (p == NULL){
     printf("Erro de alocação!\n");
     exit(1);
    };
    p[0] = 8;
    p[2] = 1;
    int *p_aux = (int*) realloc(p, 6 * sizeof(int));
    if (p_aux == NULL){
     printf("Erro na expansão!\n");
     free(p);
     exit(1);
    } else{
     p = p_aux;
    };
    p[4] = 33;
    printf("p[0] = %d\n", p[0]);
    printf("p[1] = %d\n", p[1]);
    printf("p[2] = %d\n", p[2]);
    printf("p[3] = %d\n", p[3]);
    printf("p[4] = %d\n", p[4]);
    printf("p[5] = %d\n", p[5]);
    free(p);
    
    return 0;
}