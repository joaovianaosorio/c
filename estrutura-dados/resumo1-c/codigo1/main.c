/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
  int num1, num2;
  float num3, total;
  char letra = 'X';
  char letra2 = '\n';
  const int num4 = 3;
  
  printf("Escreva um número:  ");
  scanf("%d", &num1);
  printf("Escreva outro número: ");
  scanf("%d", &num2);
  printf("Escreva outro número: ");
  scanf("%f", &num3);
  total = num1 + num2 + num3 + num4;
  printf("O resultado de %d + %d + %.2f + %d é: %.2f", num1, num2, num3, num4, total);
    return 0;
}