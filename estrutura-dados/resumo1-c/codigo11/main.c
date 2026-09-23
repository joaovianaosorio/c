/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1, n2, s, r;
    
    printf("\a\a\a\a\a");
    printf("\t\tSomatório Números\n");
    do{
     s = 0;
     printf("\n");
     printf("Digite um número (até 100): ");
     scanf("%d", &n1);
     printf("Você quer saber a soma dele até qual número (até 100): ");
     scanf("%d", &n2);
     if (n2 > 100){
      printf("Você não seguiu a regra.");
      return 0;
     }
     for(n1; n1 <= n2; n1++){
      s += n1;
     }
     printf("O somatório é: %d\n\n", s);
     printf("\tMENU\n");
     printf("1 - Continuar\n");
     printf("0 - Sair\n");
     printf("Quer continuar? ");
     scanf("%d", &r);
    } while(r == 1);
    

    return 0;
}
