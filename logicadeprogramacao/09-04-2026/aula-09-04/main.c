/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{/* barra invertida serve para nós colocarmos caracteres que não 
  conseguiríamos  por conta da linguagem C*/
   printf("Sequências de Escape\n\n");
   printf("\a\a\a\a");  //fazer barulho
   printf("Caixa d\'água\n"); //apóstrofo precisa de barra invert
   printf("\"Caixa d\'água\"\n");
   printf("\\");
   printf("o/");

   return 0;
}
