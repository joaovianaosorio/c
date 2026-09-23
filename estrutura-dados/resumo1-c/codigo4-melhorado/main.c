/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int itens, tipo_caixa, qnt_caixas, itens_res;
    int capacidade = 0; // Armazena o tamanho da caixa escolhida
    
    printf("\a\a\a\a");
    printf("\t\t Calculadora de Caixas de Embalagem\n");
    printf("Quantos produtos serão embalados: ");
    scanf("%d", &itens);
    if (itens <= 0) {
        printf("Quantidade de produtos inválida.\n");
        return 0; // Encerra o programa aqui
    }
    printf("Tipos de caixas disponíveis:\n");
    printf("\t1 - Caixa Pequena (5 itens)\n");
    printf("\t2 - Caixa Média (10 itens)\n");
    printf("\t3 - Caixa Grande (20 itens)\n");
    printf("(A seguir, selecione usando o número correspondente ao tipo de caixa)\n");
    printf("Em qual caixa você irá colocar os itens? ");
    scanf("%d", &tipo_caixa);
    if (tipo_caixa == 1) {
        capacidade = 5;
    } else if (tipo_caixa == 2) {
        capacidade = 10;
    } else if (tipo_caixa == 3) {
        capacidade = 20;
    }
    if (capacidade > 0) {
        qnt_caixas = itens / capacidade;
        itens_res = itens % capacidade;
        printf("Serão usadas %d caixa(s) cheia(s) e sobra(m) %d item(ns).\n", qnt_caixas, itens_res);
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}
