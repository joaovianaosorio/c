/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

struct Aniversario{
 int dia;
 int mes;
 int ano;
};

typedef struct{
 char nome[20];
 int id;
 int idade;
 struct Aniversario nascimento;
 float salario;
} Funcionario;

int main()
{
    printf("\t\tCadastro de Funcionário\n\n");
    
    Funcionario f1;
    strcpy(f1.nome, "João");
    f1.id = 342;
    f1.idade = 21;
    f1.nascimento.dia = 9;
    f1.nascimento.mes = 8;
    f1.nascimento.ano = 2005;
    f1.salario = 12000.00;
    
    Funcionario f2;
    strcpy(f2.nome, "Maria");
    f2.id = 343;
    f2.idade = 24;
    f2.nascimento.dia = 6;
    f2.nascimento.mes = 5;
    f2.nascimento.ano = 2002;
    f2.salario = 9500.00;
    
    printf("O nome de f1 é: %s\n", f1.nome);
    printf("O ID de f1 é: %d\n", f1.id);
    printf("A idade de f1 é: %d\n", f1.idade);
    printf("O aniversário de f1 é: 0%d/0%d/%d\n", f1.nascimento.dia, f1.nascimento.mes, f1.nascimento.ano);
    printf("O salário de f1 é: %.2f\n", f1.salario);
    
    printf("O nome de f1 é: %s\n", f2.nome);
    printf("O ID de f1 é: %d\n", f2.id);
    printf("A idade de f1 é: %d\n", f2.idade);
    printf("O aniversário de f1 é: 0%d/0%d/%d\n", f2.nascimento.dia, f2.nascimento.mes, f2.nascimento.ano);
    printf("O salário de f1 é: %.2f\n", f2.salario);
    
    if(f1.idade > f2.idade){
     printf("O funcionário 1 é mais velho que o funcionário 2.");
    } else{
    printf("O funcionário 2 é mais velho que o funcionário 1.");
    }

    return 0;
}
