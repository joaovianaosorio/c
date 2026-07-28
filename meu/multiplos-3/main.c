/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num = 1, cont;
    printf("\tMúltiplos de 3\n");
    for (num; num < 21; num++){
     cont = num % 3;
     if (cont == 0){
      printf("%d\n", num);
    }
    } 

    return 0;
}