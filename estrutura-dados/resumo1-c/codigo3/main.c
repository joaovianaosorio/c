/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, ano, res, ano_hab;
    char sexo;
    printf("\a\a\a\a\a");
    printf("\\O/");
    printf(" ''' \n\n");
    printf("\t\t Permissões \n");
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade < 16){
     printf("Você não pode votar.");
     exit(1);
    }
    else{
     printf("Digite se você é homem (M) ou mulher (F): ");
     scanf(" %c", &sexo);
     if (idade >= 18 && sexo == 'M'){
      printf("Você pode tirar sua CNH e votar!\n");
      printf("Mas se atente ao exército.");
     } else if (idade == 17 && sexo == 'M'){
      printf("Você pode votar, mas não é obrigatório!\n");
      printf("Aliás, se você for fazer 18 anos esse ano, se aliste!");
     } else if (idade >= 18 && sexo == 'F'){
      printf("Você pode tirar sua CNH e votar!");
     } else{
      printf("Você pode votar, mas não é obrigado(a)!");
     }
     }

/*
Observações: 
 1 - Na linha 28, é necessário dar um espaço entre o %c e as aspas.
 Caso contrário, o scanf lerá o "/n" da linha anterior.
 Ou, ele lerá o "Enter" que você deu no teclado anteriormente.
 2 - O exit(1) só funciona com a biblioteca <stdlib.h>
*/
    return 0;
}