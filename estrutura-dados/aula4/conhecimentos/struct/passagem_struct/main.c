/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct Produto { 
    int codigo; 
    float preco; 
};

// A) Passagem de campo isolado por valor
void exibirPreco(float valor){
    printf("Preco individual: R$ %.2f\n", valor); 
}

// B) Passagem da struct inteira por valor (cópia)
void exibirProduto(struct Produto p){
    printf("Cod: %d | Preco: R$ %.2f\n", p.codigo, p.preco); 
}

// C) Passagem de vetor de structs
void exibirLista(struct Produto lista[], int tam){ 
    for(int i = 0; i < tam; i++){ 
        printf("Item %d -> Codigo: %d\n", i + 1, lista[i].codigo); 
    }
}

// D) Passagem por Referência (Ponteiro) usando o Operador Seta (->) 
void reajustarPreco(struct Produto *p, float porcentagem){ 
    // p -> preco é o atalho para (*p).preco 
    p->preco = p->preco + (p->preco * (porcentagem / 100.0f)); 
}

int main()
{
    printf("\a\a\a\a\a");
    struct Produto prod1 = {101, 50.0f}; 
    struct Produto estoque[13] = {{201, 10.0f}, {202, 20.0f}};
    
    exibirPreco(prod1.preco); // Campo isolado
    reajustarPreco(&prod1, 10.0f); // Alteração via ponteiro (->) 
    exibirProduto(prod1); // Struct completa 
    exibirLista(estoque, 2); // Vetor de structs

    return 0;
}