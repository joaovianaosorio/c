/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{  
   printf("Programa 2 - Operações Aritméticas II\n\n");
   int n1 = 0, n2 = 0, res = 0;
   printf("Número 1: ");
   scanf("%d", &n1);
   printf("Número 2: ");
   scanf("%d", &n2);
   res = n1 + n2;
   printf("%d + %d = %d\n", n1, n2, res);
   res = n1 - n2;
   printf("%d - %d = %d\n", n1, n2, res);
   res = n1 * n2;
   printf("%d * %d = %d\n", n1, n2, res);
   if (n2 == 0)
   printf("Divisão impossível\n");
   else
   {
      res = n1 % n2;
      printf("%d %% %d = %d\n", n1, n2, res);
      res = n1 / n2;
      printf("%d / %d = %d", n1, n2, res);
   }
   
   return 0;
}
