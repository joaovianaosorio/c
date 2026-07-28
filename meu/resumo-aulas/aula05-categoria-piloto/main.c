/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade = 0;
    printf("\tRes. Aula 5 - Categoria de Pilotos\n");
    printf("Digite a idade do piloto: ");
    scanf("%d", &idade);
    if (idade < 0){
     printf("Deus é mais!");
    }
    /*
    o if acima tem que estar lá, porque se ele ficar lá embaixo e 
    tiver uma condição antes dele verdadeira, será ela que vai aparecer.
    ex: else if (idade < 8){...}
    */
    else if (idade < 8){
     printf("Muito jovem para correr.");
    }
    else if (idade >= 8 && idade <= 12){
     printf("Categoria: Infantil.");
    } 
    else if (idade >= 13 && idade <= 17){
     printf("Categoria: Juvenil.");
    }
    else if (idade >= 18 && idade <= 60){
     printf("Categoria: Adulto.");
    } else{
     printf("Categoria: Sênior.");
    }

    return 0;
}