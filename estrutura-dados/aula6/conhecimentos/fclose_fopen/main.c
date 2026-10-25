/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\a\a\a\a\a\a");
    
    // Tentando abrir um arquivo para leitura 
    FILE *arq = fopen("dados_inexistentes.txt", "r");
    
    // Tratamento de erro obrigatório
    if (arq == NULL){ 
        printf("Erro: Não foi possível abrir o arquivo!\n"); 
        exit(1); // Aborta a execução 
        }
        
    printf("Arquivo aberto com sucesso!\n"); 
    
    fclose(arq); // Fechamento do arquivo

    return 0;
}