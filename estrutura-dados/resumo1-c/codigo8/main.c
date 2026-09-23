/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x, s = 0;
    
    printf("\a\a\a\a");
    printf("\tSomatório + Números pares\n\n");
    printf("Digite um número par inteiro de 1 a 30: ");
    scanf("%d", &x);
    if (x < 1 || x > 30){
     printf("Você não seguiu a regra.");
     return 0;
    }
    if (x % 2 != 0){
     printf("Você não seguiu a regra.");
     return 0;
    } else {
     while (x < 30){
      printf("%d\n", x);
      s += x;
      x += 2;
     }
    }
    printf("A soma dos números pares é: %d.", s);
    
    return 0;
}
