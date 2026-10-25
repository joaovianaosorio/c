/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void dobro(int *, int *);

int main()
{
    int num = 30, num2 = 50;
    printf("\a");
    dobro(&num, &num2);
    printf("O novo valor de \"num\" é: %d\n", num);
    printf("O novo valor de \"num2\" é: %d", num2);

    return 0;
}

void dobro(int *x, int *y){
 *x = *x * 2;
 *y = *y + 10;
}