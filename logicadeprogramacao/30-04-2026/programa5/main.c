/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   float bruto = 0, irfp = 0, inss = 0, descontos = 0, liq = 0;  
    printf("Programa 5 - Cálculo Salário\n");
    printf("Salário Bruto: ");
    scanf("%f", &bruto);
    if (bruto > 8900.00)
    {
       irfp = bruto * 0.10;
    } else irfp = bruto * 0.05;
    printf("IRFP: %.2f\n", irfp);
    inss = bruto * 0.14;
    printf("INSS: %.2f\n", inss);
    descontos = irfp + inss;
    printf("Descontos total: %.2f\n", descontos);
    liq = bruto - descontos;
    printf("Salário líquido: %.2f", liq);
    
    return 0;
}