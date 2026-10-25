/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float a = 33.5;
    int b = 11, quatrocinco = 45;
    void *ptr;
    int **ptr_novo;
    ptr = &a;
    
    printf("\a\a\a\a\a");
    printf("O valor apontado pelo ponteiro \"prt\" é: %.1f\n", *(float*)ptr);
    
    ptr = &b;
    printf("O valor apontado pelo ponteiro \"prt\" é: %d\n", *(int*)ptr);
    
    ptr_novo = (int **)&ptr;
    **ptr_novo = 90;
    printf("O valor apontado por \"**ptr_novo\" é: %d\n", **ptr_novo);
    printf("O valor apontado por \"**ptr_novo\" é: %d\n", b);
    
    *ptr_novo = &quatrocinco;
    printf("O valor apontado por \"*ptr\" é: %d\n", *(int*)ptr);
    *(int *)ptr = 53;
    printf("O novo valor da variável\"quatrocinco\" é: %d", quatrocinco);
    
    return 0;
}