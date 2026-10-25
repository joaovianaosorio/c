/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função para converter a string inteira para MAIÚSCULAS 
void converterParaMaiusculas(char *str){ 
 while (*str != '\0'){
  *str = toupper(*str); 
  str++; } 
}

int main()
{
   char texto[30] = "Linguagem C no IFSP!";
   
   printf("\a\a\a\a\a");
   printf("Antes: %s\n", texto); 
   converterParaMaiusculas(texto); 
   printf("Depois: %s\n", texto); // EXIBE: LINGUAGEM C NO IFSP!
   
    return 0;
}