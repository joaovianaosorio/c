/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    // 1. Gravar caracteres 
    FILE *f = fopen("letras.txt", "w");
    if (f != NULL){ 
        fputc('C', f); 
        fputc('\n', f); 
        fclose(f); 
    }
    
    // 2. Ler caracteres até o Fim do Arquivo (EOF)
    f = fopen("letras.txt", "r");
    if (f != NULL){ 
        char c;
        while ((c = fgetc(f)) != EOF){ // Laço enquanto não atingir o EOF 
        printf("%c", c);
        }
        fclose(f);
    }

    return 0;
}