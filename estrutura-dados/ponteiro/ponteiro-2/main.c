/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float c = 35.5;
    float *prt;
    prt = &c;
    
    
    //O ideal é converter o ponteiro para tipo "(void*)"
    printf("O endereço de 'C' é: %p\n", &c);
    printf("O valor guardado por 'prt' é: %p\n", prt); 
    printf("O valor apontado por 'prt' é: %.2f\n", *prt);
    
    *prt = 7.8;
    printf("O novo valor de 'C' é: %.1f\n", c);

    return 0;
}