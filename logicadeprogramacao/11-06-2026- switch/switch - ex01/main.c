/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char letra;
    printf("\tComando Switch\n\n");
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    switch (letra){
        case 'a':
        case 'A':
            printf("Abacaxi\n");
            break; 
            //break -> usado para encerrar o programa.
            //sem o break, o programa rodará todas as outras opções;
        case 'b':
        case 'B':
            printf("Banana\n");
            break;
        case 'c':
        case 'C':
            printf("Caqui\n");
            break;
        default: //caso nenhuma das outras opções sejam respondidas
            printf("Letra nenhuma corresponde a uma fruta");
            break; //como é o último, esse break seria mais para reforçar, mas ele não tem tanta eficiência.
    }

    return 0;
}