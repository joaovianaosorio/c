/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
  int num1, num2;
  float num3, total;
  const int num4 = 3;
  char letra = 'X';
  char letra2 = '\n';

  
  printf("Escreva um número:  ");
  scanf("%d", &num1);
  printf("Escreva outro número: ");
  scanf("%d", &num2);
  printf("Escreva outro número: ");
  scanf("%f", &num3);
  total = num1 + num2 + num3 + num4;
  printf("O resultado de %d + %d + %.2f + %d é: %.2f", num1, num2, num3, num4, total);
  /*num4 = 5;
  printf("%d", num4);*/
  printf("\nDigite um número: ");
  scanf(" %d", &num4);
  printf("%c %c", letra, letra2);
  printf("%d", num4);
    return 0;
}
