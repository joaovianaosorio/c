/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

/*
 No GDB online esse código NÃO IRÁ FUNCIONAR!
 O GDB Online executa em ambiente Linux.
*/

int main()
{
    // Declarando o vetor de char (string) corretamente com tamanho 50 
    char texto[50] = "Linguagem C no Windows!";
    
    printf("\a\a\a\a\a");
    printf("Texto original: %s\n\n", texto);
    
    // Converte a string inteira para MAIÚSCULAS 
    strupr(texto);
    printf("Com strupr(): %s\n", texto);
    
    // Converte a mesma string para minúsculas 
    strlwr(texto); 
    printf("Com strlwr(): %s\n", texto);

    return 0;
}