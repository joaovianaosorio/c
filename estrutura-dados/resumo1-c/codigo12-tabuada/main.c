/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int r = 0, n1;
    printf("\a\a\a\a\a\a\a");
    printf("\t\tTABUADA\n\n");
    printf("Digite um número: ");
    scanf("%d", &n1);
    for(int n=1; n <11; n++){
        r = n1 * n;
        printf("%d x %d = %d\n", n1, n, r);    
    }
}