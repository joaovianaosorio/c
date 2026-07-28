/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n = 0, k = 0, somat = 0, cont = 1;
    
    printf("\t Programa 11 - Sequência de números\n\n");
    printf("Números (5 -  30): ");
    scanf("%d", &n);
    if (n < 5 || n > 30){ /* || -> or */
        printf("Número fora do intervalo");
    } else {
        while (cont < n + 1){
            somat = somat + cont; 
            printf("%d\n", cont);
            cont++;
        }
        printf("\nSomatório: %d", somat);
    }
    return 0;
}