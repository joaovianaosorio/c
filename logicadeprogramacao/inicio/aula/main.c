/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{//o main seria tipo função ()
 //o int significa que no final deve-se retornarum núemro inteiro
   int n1 = 0;
   int n2 = 0;
   int total = 0;
   printf("\t\tAdição\n"); //t  = fazer parágrafo
   printf("Número 1: ") ;
   scanf("%d", &n1);
   printf("Número 2: ");
   scanf("%d", &n2);
   total = n1 + n2;
   printf("Resultado: %d", total);
   return 0;
}
