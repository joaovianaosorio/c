/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() { 
 int numero = 10; 
 // Se (numero % 2 == 0) for verdadeiro, devolve "Par", senão devolve "Ímpar" 
 printf("O número %d é %s.", numero, (numero % 2 == 0) ? "Par" : "Ímpar"); 
 
 return 0; 
}