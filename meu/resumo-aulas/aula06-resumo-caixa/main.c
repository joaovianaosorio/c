/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int quant = 0, itens = 1;
    float i = 5.00, total = 0, media = 0;
    printf("\tResumo - Aula 6 / Caixa de Supermercado\n");
    printf("Quantos itens são? ");
    scanf("%d", &quant);
    if (quant < 1 || quant > 10){
     printf("Quantidade inválida para este caixa.\n");
    } else{
     while (itens <= quant){
      total += i;
      itens++;
     }
     media = total / quant;
     printf("Total: %.2f\n", total);
     printf("Média: %.2f", media);
    }

    return 0;
}
