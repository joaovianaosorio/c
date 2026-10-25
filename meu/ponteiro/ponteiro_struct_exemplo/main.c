/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct jogador{
 int numero;
 int gols;
};

int main()
{
    printf("\a");
    
    struct jogador Neymar = {10, 550};
    struct jogador CR7 = {7, 1000};
    struct jogador Messi = {23, 259};
    struct jogador *ptr;
    ptr = &Neymar;
    struct jogador *ptr2;
    ptr2 = &CR7;
    struct jogador *ptr3;
    ptr3 = &Messi;
    (*ptr3).numero = 10;
    ptr3->gols = 900;
    printf("O número de gols do Neymar é: %d\n", ptr->gols);
    printf("O número de gols do CR7 é: %d\n", ptr2->gols);
    printf("O número de gols do Messi é: %d\n", ptr3->gols);
    printf("O número da camisa do Messi é: %d\n", (*ptr3).numero);
    
    return 0;
}