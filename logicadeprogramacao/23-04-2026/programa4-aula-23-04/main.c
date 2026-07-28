/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   float bruto = 0, irpf = 0, inss = 0, des = 0, liq = 0;
   
   printf("Programa 4 - Cálculo de Salário\n\n");
   printf("Salário Bruto: ");
   scanf("%f", &bruto);
   if (bruto > 8900.00)
   {
      irpf = bruto * 0.15;
      
   } else irpf = bruto * 0.12;
   printf("IRPF: %.2f", irpf);
   inss = 0.14*bruto;
   printf("\nINSS: %.2f", inss);
   des = irpf + inss;
   printf("\nDescontos: %.2f", des);
   liq = bruto - des;
   printf("\nSalário Líquido: %.2f", liq);
   
    return 0;
}
