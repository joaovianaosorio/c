/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int somar(int *x, int *y, int, int);

int main()
{
    int a, b;
    
    printf("\a\a\a\a");
    printf("Digite um número: ");
    scanf("%d", &a);
    printf("Digite outro número: ");
    scanf("%d", &b);
    printf("A soma desses números é: %d", somar(&a, &b, 0, 0));

    return 0;
}

int somar(int *x, int *y, int z, int w){
 z = *x;
 w = *y;
 return z + w;
}
