/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

/*
 Meta de Peso - Esse programa cálcula quantas proteínas você deve ingerir por dia
 para hipertrofia. 
*/

int main()
{
    float peso = 0, dias = 0, meta = 0, prot;
    printf("\t\tMeta de Peso\n\n");
    printf("Qual é seu peso: ");
    scanf("%f", &peso);
    printf("Qual sua meta de peso: ");
    scanf("%f", &meta);
    printf("Quantos dias na semana você treina: ");
    scanf("%f", &dias);
    if (dias > 7)
    {
     printf("\nImpossível. Os dias da semana só têm 7 dias.");
    }
    else if (peso == meta && dias < 4) //&& = and 
    {
     printf("\nMeta atingida!\n");
     printf("\nSeu peso atual é: %.1f\n", peso);
     printf("Essa informação está reservado em: %p", &peso);
    } else if (peso == meta && dias >= 4)
    {
     printf("\nMeta atingida ou em manutenção. Cuidado com o excedente calórico.\n\n");
     printf("\nSeu peso atual é: %.1f\n", peso);
     printf("Essa informação está reservado em: %p", &peso);
    } else
    {
     printf("\nFoco no ganho de massa! Aumente o consumo de Whey e Creatina.\n");
     prot = 2 * peso;
     printf("Você deve comer %.1f gramas de proteína por dia!\n\n", prot);
     printf("Seu peso atual é: %.1f\n", peso);
     printf("Essa informação está reservado em: %p", &peso);
    }

    return 0;
}

/*
 O cálculo do peso está no final pois só nós usaremos ele se tiver 
 os dias da semana estiverem certos. Isso diminui processamento do computador.
*/
