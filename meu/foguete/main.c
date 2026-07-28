/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int contador = 30;
    printf("\tFoguete!\n");
    printf("O foguete vai decolar em: \n");
    while (contador >= 0){
     printf("%d\n", contador);
     contador -= 2;
    }
    printf("Decolar!");

    return 0;
}