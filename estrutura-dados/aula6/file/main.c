/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    // 1. Cria o ponteiro do tipo FILE 
    FILE *fp;
    
    // 2. fopen() conecta o ponteiro ao arquivo físico no disco 
    fp = fopen("teste.txt", "w");
    
    // 3. Sempre verificamos se o ponteiro é válido (diferente de NULL) 
    if (fp == NULL) { 
        printf("Erro ao conectar com o arquivo!\n"); 
        return 1; 
    }
    
    // 4. Usamos 'fp' para escrever 
    fprintf(fp, "Olá! Testando o ponteiro FILE.\n");
    
    // 5. Fechamos a conexão usando 'fp' 
    fclose(fp);

    return 0;
}