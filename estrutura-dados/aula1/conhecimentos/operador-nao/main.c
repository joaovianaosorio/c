/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() { 
 int esta_chovendo = 0; /* 
  0 representa FALSO (não está chovendo) 
  O if olha o valor dentro de "esta_chovendo" e inverte o valor de esta_chovendo: !0 vira 1 (VERDADEIRO) 
  entretanto, esse valor inverso é entregado somente para o if e não muda o valor da variável
  */
  if (!esta_chovendo){ 
   printf("Não está chovendo! Você pode sair para caminhar.\n"); 
  } else { 
   printf("Está chovendo! Leve um guarda-chuva.\n"); 
  } 
  //o código abaixo muda o valor da variável
  esta_chovendo = !esta_chovendo;
  printf("%d", esta_chovendo);
  
  return 0; 
}
