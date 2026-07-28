/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int k = 1, s = 0;
    printf("Programa 10 - Somatório de Números\n\n");
    while (k < 11){
        printf("%d\n", k);
        s = s + k;
        k++;
    }
    printf("\n\nO somatório dos números é: %d", s);

    return 0;
}