/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char texto[20];
    
    printf("\a\a\a\a\a");
    printf("Digite uma frase (usando fgets): "); 
    // Lê até 19 caracteres + '\0' da entrada padrão (stdin / teclado)
    fgets(texto, 20, stdin);
    // ou fgets(texto, 10, stdin)
    printf("Texto lido com fgets: %s", texto);

    return 0;
}