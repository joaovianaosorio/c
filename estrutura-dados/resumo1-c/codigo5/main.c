/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x, y;
    int letraA = 97;
    
    printf("\t\t Revisão de Comandos e Estruturas:\n");
    printf("Digite um número: ");
    scanf("%d", &x);
    x += 2;
    printf("%d\n", x);
    x *= 3;
    printf("%d\n", x);
    x -= 2;
    printf("%d\n", x);
    x /= 1;
    printf("%d\n", x);
    printf("Tamanho de x é: %zu\n", sizeof(x));
    printf("Endereço de memória de x: %p\n\n", (void*)&x);
   
    y = 3;
    y++;
    printf("Y = %d\n", y);
    y--;
    printf("Y = %d\n\n", y);
    
    printf("Letra A na Tabela ASCII: %c", letraA);
    return 0;
}