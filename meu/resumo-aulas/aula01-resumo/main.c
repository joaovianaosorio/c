/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n1 = 0, n2 = 0, n3 = 99, total = 0, s = 0; 
   float f1 = 98.7, tot = 0;
   const float f2 = 98.5;
   char c1 = 'A';
   char c2 = '\n';
   printf("\tResumo - Aula 01 %c", c2);
   printf("Dê um valor para n1:  ");
   scanf("%d", &n1);
   printf("Dê um valor para n2: ");
   scanf("%d", &n2);
   printf("Agora, o valor n3 irá subtrair a soma de n1 com n2 (n3 = %d) %c", n3, c2);
   s = n1 + n2;
   total = n3 - s;
   printf("%c", c1);
   printf(" conta deu: %d %c", total, c2);
   tot = f1 + f2;
   printf("O valor de %f + %.2f é: %.2f\n", f1, f2, tot);
   printf("O resultado da conta acima está em: %p", &tot);

   return 0;
}