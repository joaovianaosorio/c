/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int x = 5;
    int y = 0;
    int z = 0;
    printf("Operador de incremento\n");
    
    y = --x; //-- - subtrai 1
    
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    
    x = 5;
    y = 0;
    
    y = x-- ;
    
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    
    z++;
    
    printf("z: %d", z);


    return 0;
}

/*
Operadores de incremento e decremento

++
--

Formas de uso

++x incrementa e atribui
x++ atribui e incrementa


*/
