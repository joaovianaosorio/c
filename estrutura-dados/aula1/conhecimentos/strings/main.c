/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char nome[50]; 
    // Declara um vetor de char capaz de armazenar um texto de até 49 caracteres
    printf("Digite o seu primeiro nome: "); 
    scanf("%s", nome); 
    // Para ler strings simples com %s, não se usa o operador & 
    printf("Olá, %s! Seja bem-vindo ao programa em C.", nome); 
    return 0;
}
