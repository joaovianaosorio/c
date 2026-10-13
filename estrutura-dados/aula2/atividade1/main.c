/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

/* 
 1. REGIÃO DE DECLARAÇÃO GLOBAL
'vantagens' e 'salarioBruto' são globais: qualquer função pode usá-las
*/

float salarioBruto; 
float vantagens;

// Protótipo do procedimento 
void calculoVantagens(float numeroHoras, float salarioHora, int numeroFilhos, float valorPorFilho);

int main()
{
 
    // Variáveis LOCAIS (existem apenas dentro do main) 
    float horas = 160.0; float valorHora = 25.0;
    float valorHora = 25.0;
    int filhos = 2; 
    float valorFilho = 150.0;
    
    // Chama o módulo passando os dados locais por valor (cópia) 
    calculoVantagens(horas, valorHora, filhos, valorFilho);
    
    // O main() acessa diretamente as variáveis globais alteradas pelo módulo 
    printf("\a\a\a\a\a");
    printf("Salário Bruto: R$ %.2f\n", salarioBruto); 
    printf("Total de Vantagens: R$ %.2f\n", vantagens);

    return 0;
}

// 2. IMPLEMENTAÇÃO DO MÓDULO 
void calculoVantagens(float numeroHoras, float salarioHora, int numeroFilhos, float valorPorFilho) {
 
 // Altera diretamente as variáveis GLOBAIS sem precisar do comando return 
 salarioBruto = numeroHoras * salarioHora; 
 float salarioFamilia = numeroFilhos * valorPorFilho;
 
 vantagens = salarioBruto + salarioFamilia;
}
