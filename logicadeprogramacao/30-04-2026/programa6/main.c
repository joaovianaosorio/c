/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   float n1 = 0, n2 = 0, n3 = 0, soma = 0, media = 0;
    printf("Programa 6 - Situação Escolar\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    soma = n1 + n2 + n3;
    media = soma / 3;
    if (media >= 6)
    {
     printf("Você está aprovado! Parabéns!");
    } else if (media < 4)
    {
     printf("Você está reprovado.");
    } else
    {
    printf("Você terá que realizar um exame.");
    }
    return 0;
}
