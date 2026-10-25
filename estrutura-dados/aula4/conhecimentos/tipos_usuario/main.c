/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// 1. ESTRUTURA (struct): Agrupa variáveis de tipos diferentes 
struct Pessoa{ 
 char nome; 
 int idade; 
};

// 2. CAMPOS DE BIT (Bit Fields): Especifica a quantidade exata de BITS por membro
struct StatusBateria{ 
 unsigned int nivel : 7; // Usa apenas 7 bits (0 a 100) para economizar memória 
 unsigned int carregando : 1; // Usa apenas 1 bit (0 ou 1) 
};

// 3. UNIÃO (union): Todos os membros compartilham a MESMA região de memória
union Dado{ 
 int numero; 
 char letra; 
};

// 4. ENUMERAÇÃO (enum): Conjunto de constantes inteiras nomeadas
enum DiaSemana{ DOMINGO, SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO};

// 5. TYPEDEF: Cria um apelido/sinônimo para um tipo existente
typedef unsigned long int TextoID;

int main()
{
    printf("\a\a\a\a\a");
    struct Pessoa p1 = {"Carlos", 25};
    enum DiaSemana hoje = SEGUNDA; // 'hoje' recebe o valor inteiro 1 
    TextoID meuCodigo = 987654321;
    printf("Nome: %s, Dia da semana: %d, ID: %lu\\n", p1.nome, hoje, meuCodigo);

    return 0;
}