/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, tab, res;
    printf("\tResumo - Aula 7 - Tabuada do 5\n");
    printf("Digite um número: ");
    scanf("%d", &num);
    if(num >= 2 && num <= 15){
     for(tab = 1; tab <= num; tab++){
      res = tab * 5;
      printf("%d x 5 = %d\n", tab, res);
     }
    } else{
     printf("Você não seguiu a regra.");
    }

    return 0;
}