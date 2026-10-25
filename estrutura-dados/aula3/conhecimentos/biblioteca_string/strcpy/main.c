/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char origem[20] = "Linguagem C"; 
    char destino[20];
    
    printf("\a\a\a\a\a\a");
    
    // Copia o conteúdo de 'origem' para 'destino' 
    strcpy(destino, origem);
    printf("Destino após cópia: %s\n", destino);
   
    return 0;
}