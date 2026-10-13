/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void digiteNumero(){
    printf("Digite um número: ");
}

void menu();

int produto(int, int);

int main()
{
    int num, num2, resultado;
    char res = 'S';
    
    printf("\a\a\a\a\a");
    printf("\t\t Produtos \n\n");
    do{
        printf("\n");
        digiteNumero();
        scanf("%d", &num);
        digiteNumero();
        scanf("%d", &num2);
        resultado = produto(num, num2);
        printf("O resultado de %d x %d = %d.\n", num, num2, resultado);
        menu();
        scanf(" %c", &res);
        }while(res == 'S' || res == 's');

    return 0;
}

int produto(int x, int y){
    int resultado = x * y;
    return resultado;
}

void menu(){
    printf("Quer continuar? S/N \n");
}