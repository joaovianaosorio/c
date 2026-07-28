/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float bonus = 0, comissao = 0, imposto = 0, vendas = 0;
    printf("\tVendas\n");
    printf("Qual foi o valor total de vendas? ");
    scanf("%f", &vendas);
    if (vendas > 15000.00){
     comissao = vendas * 0.10;
    } else {
     comissao = vendas * 0.05;
    }
    printf("Valor da comissão bruta: %.2f\n", comissao);
    imposto = comissao * 0.02;
    printf("Valor do imposto retido: %.2f\n", imposto);
    bonus = comissao - imposto;
    printf("Valor do bônus agregado ao vendedor: %.2f", bonus);
    
    return 0;
}