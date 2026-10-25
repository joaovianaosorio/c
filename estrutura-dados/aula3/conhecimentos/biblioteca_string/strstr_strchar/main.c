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
    char frase[50] = "Aprender C no IFSP é excelente!";
    
    printf("\a\a\a\a\a");
    //Busca pelo caractere 'C'
    if (strchr(frase, 'C') != NULL){ 
     printf("O caractere 'C' foi encontrado na frase!\n"); 
    }
    
    // Busca pelo trecho "IFSP" 
    if (strstr(frase, "IFSP") != NULL){ 
     printf("A palavra 'IFSP' está contida na frase.\n"); 
    }

    return 0;
}