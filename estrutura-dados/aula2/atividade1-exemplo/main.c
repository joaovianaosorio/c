/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int x, y;

int somar(int, int);

int main()
{
    int n1, n2;
    
    printf("\a\a\a");
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    scanf("%d", &n2);
    printf("A soma desses números é: %d", somar(n1, n2));
    
    return 0;
}

int somar(int a, int b){
 x = a;
 y = b;
 return x + y;
}
