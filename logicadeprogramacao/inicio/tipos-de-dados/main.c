/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num = 9;
    float saldo = 9000.5;
    char letra = 'Z';
    char n = '\n'; //quebra de linha por variável
    const int limite = 99; //const = variável com valor imutável
    
    printf("Tipos de dados:\n");
    
    printf("Número: %d\n", num);
    printf("Saldo: %.2f %c", saldo, n); //%f - para variável decimal
    //%.2f - mostra até dois números depois da vírgula, e não seis
    printf("Saldo: %f %c", saldo, n); //%c - para variável char
    printf("Letra: %c %c", letra, n); 
    printf("Endereço de: %p %c", &num, n); //%p - endereço de memória
    printf("Const: %d", limite);
    /*
    No "&num" na linha 25, esse "&" serve para não mostrar a variável "num" e 
    sim o lugar na mmemória onde o valor de "num" está guardado.
    */
    
    return 0;
}