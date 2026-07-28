/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   printf("Programa 1 - Operações Aritméticas I\n\n");
   int n1 = 0, n2 = 0, res = 0;
   printf("Número 1: ");
   scanf("%d", &n1);
   printf("Número 2: ");
   scanf("%d", &n2);
   res = n1 + n2;
   printf("Adição: %d\n", res);
   res = n1 - n2;
   printf("Subtração: %d\n", res);
   res = n1 * n2;
   printf("Multiplicação: %d\n", res);
   if (n2 == 0) //dentro de condições, devemos utilizar o "=="
   printf("Divisão impossível\n");
   else
   {
      res = n1 % n2;
      printf("Divisão (Resto): %d\n", res);
      res = n1 / n2;
      printf("Divisão (Quociente): %d", res);
   }

return 0;
}