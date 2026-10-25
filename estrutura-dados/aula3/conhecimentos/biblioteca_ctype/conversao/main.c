/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int main()
{
    char min = 'a';
    char mai = 'B';
    
    printf("\a\a\a\a\a");
    
    //Converte 'a' para 'A'
    printf("Minúsculo para Maiúsculo: %c\n", toupper(min));
    
    // Converte 'B' para 'b' 
    printf("Maiúsculo para Minúsculo: %c\n", tolower(mai));
    
    // Números e pontuações não são alterados 
    printf("Número mantido: %c\n", toupper('7'));
    
    return 0;
}