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
    char palavra[10] = "Estrutura";
    //Retorna 9 (quantidade de letras antes do terminador nulo (\0))
    int tamanho = strlen(palavra); 
    
    printf("\a\a\a\a\a");
    printf("A palavra \"%s\" tem %d letras.\n", palavra, tamanho);

    return 0;
}