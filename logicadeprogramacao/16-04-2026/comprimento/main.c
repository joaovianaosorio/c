/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    char n1; //n1 é o nome da variável, não o tamanho na memória que ela pode ocupar
    int n2;
    float n3;
    
    printf("Comprimento\n");
    printf("char: %d\n", sizeof(n1));
    printf("int: %d\n", sizeof(n2));
    printf("float: %zu\n", sizeof(n3)); //poderia ser %d
    /*
    %zu -> marcador para tipo size_t
    */

    return 0;
}