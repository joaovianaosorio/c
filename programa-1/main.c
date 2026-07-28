/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num;
    char res;

    printf("\tPrograma 1\n");
    printf("\a\a\a\a\a");
    do {
   
        printf("Digite um número: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            printf("O numero %d é par\n", num);
        } else {
            printf("O numero %d é impar\n", num);
        }

        printf("\nNovo processamento ? (S/N): ");

        scanf(" %c", &res);
       
        printf("------------------------------\n");

    } while (res == 'S' || res == 's');

    printf("Programa encerrado.\n");
    return 0;
}
