/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct Aluno { 
 int matricula; 
 float nota; 
};

int main()
{
    printf("\a\a\a\a\a\a\a");
    struct Aluno a1 = {1001, 8.5f};
    
    // Declaração do ponteiro para a struct Aluno
    struct Aluno *ptr;
    
    // 'ptr' recebe o endereço de memória de 'a1' 
    ptr = &a1;
    
    printf("Matrícula acessada via ponteiro: %d\n", ptr->matricula);

    return 0;
}