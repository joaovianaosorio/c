/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float temperatura[7], m = 0, media;
    int dias_acima = 0;
    int total_dias = sizeof(temperatura) / sizeof(temperatura[0]);
    
    printf("\a\a\a\a\a\a");
    printf("\t\tTemperatura da Semana\n\n");
    
    for(int n=0; n < total_dias; n++){
     printf("Digite o temperatura do dia %d: ", n + 1);
     scanf("%f", &temperatura[n]);
     m += temperatura[n];
    }
    media = m / total_dias;
    for(int n=0; n < total_dias; n++){
     if(temperatura[n] > media){
      dias_acima++;
     }
    }
    printf("\nA média das temperaturas foi: %.1f\n", media);
    printf("%d dias ficaram acima da média.", dias_acima);

    return 0;
}
