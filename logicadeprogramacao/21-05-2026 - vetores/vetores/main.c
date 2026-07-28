/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int pares[4] = {2, 4, 6, 8}, k;
    printf("\tVetores\n\n");
    printf("Terceiro elemento: %d\n", pares[2]);
    printf("Primeiro elemento: %d\n", pares[0]);
    printf("Segundo elemento: %d\n", pares[1]);
    for (k = 0; k < 4; k++){
        printf("Índice %d: %d\n", k, pares[k]);
        printf("")
    }
    

    return 0;
}