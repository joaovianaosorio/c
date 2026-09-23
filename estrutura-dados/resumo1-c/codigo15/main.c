/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int senha, t = 3;
    
    printf("\a\a\a\a\a");
    printf("\t\tContinue e Break no While\n\n");
    while(t > 0){
     printf("Sou um número de 4 algarismos. Começo no 1 e cada dígito seguinte é exatamente 1 unidade maior que o anterior.\n");
     printf("\nQue número sou eu? ");
     scanf("%d", &senha);
     if(senha <= 0){
      printf("\nO número deve ser positivo! Você ainda tem %d tentativas.\n", t);
      continue;
     }
     if(senha == 1234) {
            printf("\nAcertou em cheio!\n");
            break; 
        }
     t--;
     printf("\nNúmero incorreto! Você ainda tem %d tentativa(s).\n\n", t);
    }
    if (t == 0) {
        printf("Tentativas esgotadas.\n");
    }

    return 0;
}