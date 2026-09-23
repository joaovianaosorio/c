/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float altura, peso, imc;
    printf("\a\a\a\a\a");
    printf("\t\tCalculadora de IMC\n\n");
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    /*
    Ou poderia ser usado esse código: 
    altura *= altura;
    imc = peso / altura;
    */
    if (imc < 18.5){
     printf("Seu IMC é: %.2f", imc);
     printf("A categoria correspondente a esse peso é: Abaixo do peso.");
    } else if (imc <= 24.9){
     printf("Seu IMC é: %.2f", imc);
     printf("A categoria correspondente a esse peso é: Peso normal.");
    } else if (imc <= 29.9){
     printf("Seu IMC é: %.2f", imc);
     printf("A categoria correspondente a esse peso é: Sobrepeso.");
    } else{
     printf("Seu IMC é: %.2f", imc);
     printf("A categoria correspondente a esse peso é: Obesidade.");
    }
    

    return 0;
}
