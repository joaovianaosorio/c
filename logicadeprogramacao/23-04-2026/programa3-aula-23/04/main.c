/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   printf("Programa 3 - Aula 23/04/2025 - Operações Aritméticas\n");
   int n1 = 0, n2 = 0, res = 0, op = 0;
   printf("Número 1: ");
   scanf("%d", &n1);
   printf("Número 2: ");
   scanf("%d", &n2);
   printf("Operações: \n");
   printf("1 - Soma \n");
   printf("2 - Subtração \n");
   printf("3 - Multiplicação \n");
   printf("4 - Divisão \n");
   printf("Qual operação você quer? \n");
   scanf("%d", &op);
   if (op == 1)
   {
      res = n1 + n2;
      printf("Soma: %d", res);
   } else
   if (op == 2)
   {
      res = n1 - n2;
      printf("Subtração: %d", res);
   } else
   if (op == 3)
   {
      res = n1 * n2;
      printf("Multiplicação: %d", res);
   } else
   if (op == 4)
   {
      res = n1 / n2;
      printf("Divisão: %d", res);
   } else{
    printf("Opção inválida.");
   }

    return 0;
}