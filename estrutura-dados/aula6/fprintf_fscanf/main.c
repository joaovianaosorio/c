/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("\a\a\a\a\a\a");
    
    // Escrita formatada 
    FILE *f = fopen("aluno.txt", "w");
    if (f != NULL){ 
        fprintf(f, "Nome: %s Idade: %d\n", "Carlos", 22); // [cite: 6, 20] 
        fclose(f); 
    }
    
    // Leitura formatada 
    char label1[1], label2[1], nome[2]; 
    int idade;
    
    f = fopen("aluno.txt", "r"); 
    if (f != NULL) {
        fscanf(f, "%s %s %s %d", label1, nome, label2, &idade); // [cite: 6]
        printf("Dados lidos -> Nome: %s | Idade: %d\n", nome, idade); 
        fclose(f); 
    }

    return 0;
}