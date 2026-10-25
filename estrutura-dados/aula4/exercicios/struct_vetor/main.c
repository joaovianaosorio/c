/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[20];
    int id;
    int idade;
    char aniversario[20];
    float salario;
} Funcionario;

int main() {
    Funcionario equipe[3];

    strcpy(equipe[0].nome, "João");
    equipe[0].id = 342;
    equipe[0].idade = 21;
    strcpy(equipe[0].aniversario, "09/08/2005");
    equipe[0].salario = 12000.00;

    strcpy(equipe[1].nome, "Maria");
    equipe[1].id = 343;
    equipe[1].idade = 28;
    strcpy(equipe[1].aniversario, "15/03/1998");
    equipe[1].salario = 9500.00;

    for(int i = 0; i < 2; i++) {
        printf("\n--- Funcionário %d ---\n", i + 1);
        printf("Nome: %s\n", equipe[i].nome);
        printf("ID: %d\n", equipe[i].id);
        printf("Idade: %d\n", equipe[i].idade);
        printf("Aniversário: %s\n", equipe[i].aniversario);
        printf("Salário: R$ %.2f\n", equipe[i].salario);
    }

    return 0;
}