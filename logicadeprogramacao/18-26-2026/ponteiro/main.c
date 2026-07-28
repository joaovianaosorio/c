/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int num = 15;
    int *ptr = &num;
    printf("\tOperador de indireção (ou dereferência\n\n");
    printf("Endereço de num: %p\n", &num);
    printf("Endereço de num: %p\n", ptr);
    printf("valor de num: %d\n", num);
    printf("valor de num: %d", *ptr);
    return 0;
}