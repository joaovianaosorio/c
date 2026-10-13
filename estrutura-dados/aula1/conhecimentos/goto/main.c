/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() { 
 int contador = 1; 
 
 inicio_loop: // Rótulo (label) indicando o ponto de salto 
 printf("Contador: %d\n", contador); 
 contador++; 
 if (contador <= 3){ 
  goto inicio_loop; // Salta a execução de volta para o rótulo 'inicio\_loop'
 }
  printf("Fim da execução."); 
  
  return 0; 
 }
