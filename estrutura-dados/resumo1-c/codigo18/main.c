/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int produto(int x, int y){
 int res = x * y;
 return res;
}

int main()
{
    int n1, n2, res;
    
    printf("\a\a\a\a\a");
    printf("\t\tEntendendo Funções\n\n");
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    scanf("%d", &n2);
    res = produto(n1, n2);
    printf("O resultado de %d x %d = %d\n", n1, n2, res);
    printf("O endereço de memória do resultado é: %p", (void*)&res);
    
    return 0;
}