/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

typedef struct Jogador{
 
 char Nome[21];
 char Posicao[21];
 char Time[20];
 int NumeroCamisa;
 int Idade;
 
} J;

int main()
{
    printf("\a\a\a\a\a");
    
    J j1;
    strcpy(j1.Nome, "Joanes");
    strcpy(j1.Posicao, "Zagueiro");
    strcpy(j1.Time, "Corinthians");
    j1.NumeroCamisa = 5;
    j1.Idade = 50;
    
    printf("Nome: %s\n", j1.Nome);
    printf("Posição: %s\n", j1.Posicao);
    printf("Time: %s\n", j1.Time);
    printf("Número da camisa: %d\n", j1.NumeroCamisa);
    printf("Idade: %d\n", j1.Idade);

    return 0;
}