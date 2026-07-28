/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int n1 = 8;
    int n2 = 4;
    int res = 0;
    int letraA = 65;
    
    printf("Operadores aritmeticos\n");

    res = n1 * n2;
    printf("Multiplicação: %d\n", res);
    
    res = n1 / n2;
    printf("Divisão (quociente): %d\n", res);
    
    res = n1 % n2;
    printf("Divisão (resto): %d\n", res);
    
    printf("%c\n", letraA);
    
    printf("Endereço de n1: %p\n", &n1);
    printf("Endereço de n2: %p\n", &n2);

    return 0;
}

/*
Operadores aritmeticos

/ divisão
* multiplicação
+ adição 
- subtração
% resto divisão

*/

/*
Operadores de atoibuição


/= -> (x = x / 2  //  x /= 2)
*=
+=
-=
%=
!= -> diferente de

*/