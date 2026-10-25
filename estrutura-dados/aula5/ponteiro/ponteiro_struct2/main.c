/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct Produto{ 
 int id; 
 float preco; 
};

int main()
{
    struct Produto p1 = {1, 50.0f}; 
    struct Produto *ptr = &p1;
    
    printf("\a\a\a\a\a\a");
    // 1. ALTERANDO SEM A SETA 
    // É obrigatório usar parênteses (*ptr) porque o ponto '.' tem prioridade sobre o '*'
    (*ptr).id = 2; 
    (*ptr).preco = 75.0f;
    printf("Sem seta -> ID: %d | Preco: R$ %.2f\n", p1.id, p1.preco);
    
    // 2. ALTERANDO COM A SETA (Forma recomendada) 
    // O operador '->' substitui a sintaxe (*ptr). membro de forma limpa
    ptr->id = 3; 
    ptr->preco = 100.0f;
    printf("Com seta -> ID: %d | Preco: R$ %.2f\n", p1.id, p1.preco);

    return 0;
}