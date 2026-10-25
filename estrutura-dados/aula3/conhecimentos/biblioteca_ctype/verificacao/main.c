/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int main()
{
    char c = 'A';
    
    printf("\a\a\a\a\a");
    if (isalpha(c)) {
     printf("'%c' é uma letra do alfabeto.\n", c);
    }
    if (isdigit('5')){
     printf("'5' é um dígito numérico.\n");
    }
    if (isalnum('a') && isalnum('9')){
     printf("São caracteres alfanuméricos.\n");
    }
    if (isupper('G')){
     printf("'G' é maiúsculo.\n");
    }
    if (islower('g')){
     printf("'g' é minúsculo.\n");
    }
    if (isspace(' ')){
     printf("É um espaço em branco.\n");
    }
    if (ispunct('!')){
     printf("'!' é uma pontuação.\n");
    }

    return 0;
}
