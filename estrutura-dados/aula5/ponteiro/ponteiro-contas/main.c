/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int saldo = 500; 
    int *p = &saldo; // 'p' guarda o endereço da variável 'saldo'
    
    printf("\a\a\a\a\a");
    printf("Saldo atual: %d\n", saldo);
    // Alterando o saldo através do ponteiro 'p' 
    *p = *p + 200; // Acessa o valor no endereço apontado e adiciona 200

    printf("Novo saldo: %d\n", saldo); // Imprime 700
    
    return 0;
}
