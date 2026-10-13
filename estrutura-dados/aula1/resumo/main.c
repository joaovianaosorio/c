/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   int mat[2][2], n, m, res, epoca;
    int alta_temporada = 0;
    double orcamento;
    char destino[50];

    printf("\a\a\a\a");
    printf("\t\t Matriz \n\n");
    for(n = 0; n < 2; n++){
        for(m = 0; m < 2; m++){
            printf("Digite um número: ");
            scanf("%d", &mat[n][m]);
        }
    }
    for(n = 0; n < 2; n++){
        for(m = 0; m < 2; m++){
            printf("{%d}", mat[n][m]);
            if(m == 1){
                printf("\n");
            }
        }
    }
    printf("\t\t Viagem \n\n");
    inicio:
    printf("Qual é o destino no Brasil que você quer ir? ");
    scanf("%s", &destino);
    printf("Digite seu orçamento: ");
    scanf("%lf", &orcamento);
    printf("Você está com %s.\n", (orcamento <= 10000) ? "Econômica" : "Luxo" );
    
    
    printf("Quando você quer ir? \n");
    printf("1 - Verão\n");
    printf("2 -  Primavera\n");
    printf("3 - Inverno\n");
    printf("4 - Outono\n");
    printf("Resposta: ");
    scanf("%d", &epoca);
    if(epoca == 1){
        alta_temporada = !alta_temporada;
        printf("Nesse caso, sua viagem será mais cara!\n");
        printf("Você irá fazer uma viagem para %s, na alta temporada, com %.2lf, sendo uma viagem %s", destino, orcamento, (orcamento <= 10000) ? "econômica" : " de luxo\n\n");
    } else{
    printf("Você irá fazer uma viagem para %s, na baixa temporada, com %.2lf, sendo uma viagem %s", destino, orcamento, (orcamento <= 10000) ? "econômica" : " de luxo\n\n");
    }
    
    printf("\nQuer fazer o orçamento para outra viagerm? \n");
    printf("1 - Sim\n");
    printf("2 - Não\n");
    printf("Resposta: ");
    scanf("%d", &res);
    if(res == 1){
        goto inicio;
    }
    

    return 0;
}