/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1 = 0;
    printf("\tÍmpar ou Par\n");
    printf("Digite um número: ");
    scanf("%d", &n1);
    n1 %= 2;
    if (n1 == 0){
     printf("O número que você digitou é par.");
    }
    else {
     printf("O número que você digitou é ímpar.");
    }

    return 0;
}