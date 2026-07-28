/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int k;
    printf("Exemplo - Comando For\n");
    for(k = 0; k <5; k++){
        printf("#");
    }
    /* 
    k = 0 -> atribuição de valor;
    k < 5 -> condição p/ verificar se o looping continuará
    pintf("#") -> comando que será executado enquanto o looping continuar
    k++ -> atribuição de valor à variável p/ continuar/finalizar looping 
    */
    
    return 0;
}
