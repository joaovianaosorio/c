/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char letra;
    printf("\tComando Switch - If\n\n");
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    if (letra == 'a' || letra == 'A')
        printf("Abacaxi");
    else
        if(letra == 'b' || letra == 'B')
            printf("Banana");
        else
            if (letra == 'c' || letra == 'C')
                printf("Caqui");
            else
                printf("Letra não corresponde a uma fruta");

    return 0;
}
