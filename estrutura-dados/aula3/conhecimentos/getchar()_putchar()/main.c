/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char letra;
    
    printf("\a\a\a\a\a");
    printf("Digite uma letra e pressione Enter: "); 
    letra = getchar(); // Lê apenas um caractere do teclado
    
    printf("Você digitou o caractere: ");
    putchar(letra); // Escreve o caractere na tela
    putchar('\n'); // Imprime uma quebra de linha

    return 0;
}