/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char primeiroNome[20]; 
    
    printf("\a\a\a\a\a");
    
    // Se você digitar "João Silva", ele lê apenas "João"
    printf("Digite seu nome completo: ");
    scanf("%s", &primeiroNome);
    printf("\nNome armazenado pelo scanf: %s\n", primeiroNome);

    return 0;
}