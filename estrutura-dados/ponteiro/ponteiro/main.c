/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int idade = 25;      // Variável comum do tipo inteiro
    int *ptr;            // Declaração de um ponteiro para inteiro (nota-se o '*')

    ptr = &idade;        // 'ptr' agora guarda o ENDEREÇO de memória de 'idade'

    printf("Valor de idade: %d\n", idade);
    printf("Endereço de idade na memória: %p\n", (void*)&idade);
    printf("Valor guardado dentro do ponteiro 'ptr': %p\n", (void*)ptr);
    printf("Valor APONTADO por 'ptr': %d\n", *ptr); // Desreferenciação

    // Alterando o valor de 'idade' ATRAVÉS do ponteiro:
    *ptr = 30;

    printf("\nNovo valor de idade: %d\n", idade); // Agora idade vale 30!

    return 0;
}

