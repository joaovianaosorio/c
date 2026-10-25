/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int oi = 33;
    int *ptr;
    
    ptr = &oi;
    
    printf("\a\a\a\a\a\a\a");
    printf("O endereço da variável 'oi' é: %p\n", (void*)&oi);
    printf("Valor guardado dentro de 'ptr' é: %p\n", (void*)ptr);
    printf("O endereço da variável 'ptr' é: %p\n", (void*)&ptr);
    printf("O valor APONTADO por 'ptr' é: %d\n", *ptr);
    
    *ptr = 40;
    
    printf("O novo valor dentro da variável 'oi' é: %d.", oi);

    return 0;
}