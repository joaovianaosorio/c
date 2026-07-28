/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, k;
    printf("Programa 13 - Exemplo 2\n");
    for(n = 0; n < 31; n++){
        k = n % 2; // % -> resto de divisão
        if(k == 0){
        printf("%d\n", n);
        }
    }

    return 0;
}