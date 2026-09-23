/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{  
    float compra, desconto, distancia, frete; 
    
    printf("\a\a\a\a");
    printf("\t\tCalculadora de Frete de Desconto da Loja\n");
    printf("Digite o valor da compra: ");
    scanf("%f", &compra);
    if (compra > 200.00){
     printf("Como sua compra foi maior que R$200,00, você ganhou um desconto de 15%!\n\n");
     desconto = compra * 0.15; 
    } else{
     printf("O valor total da sua compra foi menor que R$200,00, sendo assim, seu desconto é de %5!\n\n");
     desconto = compra / 20; 
    }
    printf("Digite a distância de entrega até sua casa em Km: ");
    scanf("%f", &distancia);
    if (distancia <= 50){
     printf("A distância é de até 50Km, sendo assim, seu frete é de R$15,00.\n\n");
     frete = 15.00;
    } else{
     printf("A distância é maior que 50Km, sendo assim, seu frete é de R$30,00.\n\n");
     frete = 30.00;
    }
    compra -= desconto;
    compra += frete;
    printf("Seu desconto foi de: R$%.2f\n", desconto);
    printf("O frete deu: R$%.2f\n", frete);
    printf("Total da sua compra: %.2f\n", compra);

    return 0;
}