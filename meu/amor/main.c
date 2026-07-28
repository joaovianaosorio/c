/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("\tEu te amo\n");
    printf("Digite um número: ");
    scanf("%d", &n);
    switch(n){
     case 1:
      printf("Eu te amo");
      break;
     case 2:
      printf("Eu amo você");
      break;
     case 3:
      printf("Amo te");
      break;
     default:
      printf("Eu ainda amo você");
      break;
    }

    return 0;
}
