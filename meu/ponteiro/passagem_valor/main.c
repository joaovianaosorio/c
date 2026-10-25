/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void TrocarValor(int *, int *);

int main()
{
    int a, b;
    
    printf("\a\a\a\a");
    printf("\t\t TROCA DE VALORES\n\n");
    printf("Digite um valor: ");
    scanf("%d", &a);
    printf("Digite um valor: ");
    scanf("%d", &b);
    TrocarValor(&a, &b);
    printf("O novo valor de \"a\" é %d e \"b\" é %d.", a, b);

    return 0;
}

void TrocarValor(int *x1, int *x2){
    int a = *x1;
    *x1 = *x2;
    *x2 = a;
};