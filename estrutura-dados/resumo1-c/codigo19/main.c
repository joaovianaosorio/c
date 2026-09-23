/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void exibirCabecalho();
void exibirMenu();

int main()
{
    int opcao;
    
    printf("\a\a\a\a\a");
    printf("\t\tFunções tipo Void\n\n");
    exibirCabecalho();
    exibirMenu();
    printf("\nDigite sua opção: ");
    scanf("%d", &opcao);
    printf("\nVocê escolheu a opção: %d", opcao);
    
    return 0;
}

void exibirCabecalho(){
 printf("===================================\n");
 printf("\tSISTEMA ESCOLAR - NOTAS\n");
 printf("===================================\n\n");
}

void exibirMenu(){
 printf("\t -- MENU DE OPÇÕES --\n\n");
 printf("1 - Cadastrar Nota\n");
 printf("2 - Ver Média\n");
 printf("3 - Sair\n");
}