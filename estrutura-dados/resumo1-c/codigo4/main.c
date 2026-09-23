/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int itens, tipo_caixa, qnt_caixas, itens_res;
    
    printf("\a\a\a\a");
    printf("\t\t Calculadora de Caixas de Embalagem\n");
    printf("Quantos produtos serão embalados: ");
    scanf("%d", &itens);
    if (itens > 0){
     printf("Tipos de caixas disponíveis:\n");
     printf("\t1 - Caixa Pequena (5 itens)\n");
     printf("\t2 - Caixa Média (10 itens)\n");
     printf("\t3 - Caixa Grande (20 itens)\n");
     printf("(A seguir, selecione usando o número correspondente ao tipo de caixa)\n");
     printf("Em qual caixa você irá colocar os itens? ");
     scanf("%d", &tipo_caixa);
      if (tipo_caixa == 1){
       qnt_caixas = itens / 5;
       itens_res = itens % 5;
       printf("Serão usadas %d cheias e sobra %d itens.", qnt_caixas, itens_res);
      } else if (tipo_caixa == 2){
       qnt_caixas = itens / 10;
       itens_res = itens % 10;
       printf("Serão usadas %d cheias e sobra %d itens.", qnt_caixas, itens_res);
      } else if (tipo_caixa == 3){
       qnt_caixas = itens / 20;
       itens_res = itens % 20;
       printf("Serão usadas %d cheias e sobra %d itens.", qnt_caixas, itens_res);
      } else{
       printf("Opção inválida.");
      }
    } else{
     printf("Itens inexistentes.");
    }

    return 0;
}