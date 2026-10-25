/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char senhaCadastrada[8] = "1234321";
    char senhaDigitada[8];
    
    printf("\a\a\a\a\a\a");
    printf("Digite a senha de acesso: "); 
    scanf("%7s", senhaDigitada);
    /*
     scanf lê 7 caracteres visíveis e adiciona o \0 no final
     por isso, %7s
    */
    if (strcmp(senhaCadastrada, senhaDigitada) == 0){
      printf("Acesso liberado! Senhas iguais.\n");
    } else{ 
     printf("Senha incorreta.\n"); 
    }
    /*
    strcmp retorna 0 se as duas strings forem iguais
    strcmp retorna num < 0 se s1 vem antes de s2 em ordem alfabética
    strcmp retorna num > 0 se s1 vem depois de s2 em ordem alfabética
    */

    return 0;
}