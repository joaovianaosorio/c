/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int idade;
   printf("Operadores Relacionais + if\n\n");
   printf("Diga sua idade: ");
   scanf("%d", &idade);
   if (idade > 17)
   {
      printf("Pode dirigir\n");
      printf("Compre um carro\n");
   }
   else
   {
      printf("Não pode dirigir\n");
      printf("Que pena!");
   }

   return 0;
}
