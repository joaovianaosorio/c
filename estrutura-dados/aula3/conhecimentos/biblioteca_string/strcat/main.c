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
    char saudacao[20] = "Bom dia, "; 
    char nome[10] = "Maria!";
    
    printf("\a\a\a\a\a");
    
    // Junta "Maria!" ao final de "Bom dia, " 
    strcat(saudacao, nome);
    printf("Resultado: %s\n", saudacao); // Exibe: Bom dia, Maria!

    return 0;
}