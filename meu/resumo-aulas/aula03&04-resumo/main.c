/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x, y, z, n1 = 0, r = 0;
    printf("\tResumo - Aula 3 e 4\n");
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Operações:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Qual você quer? ");
    scanf("%d", &r);
    if (r == 1){
     printf("Tamanho de %d é %d\n", n1, sizeof(n1));
     printf("O resultado de %d + 2 = ", n1);     
     n1 += 2;
     printf("%d\n\n", n1);

    } 
    else if (r == 2){
     printf("Tamanho de %d é %d\n", n1, sizeof(n1));
     printf("O resultado de %d - 2 = ", n1);
     n1 -= 2;
     printf("%d\n\n", n1);
    } 
    else if (r == 3) {
     printf("Tamanho de %d é %d\n", n1, sizeof(n1));
     printf("O resultado de %d x 2 = ", n1);
     n1 *= 2;
     printf("%d\n\n", n1);
    } else if (r == 4){
     printf("Tamanho de %d é %d\n", n1, sizeof(n1));
     printf("O resultado de %d / 2 = ", n1);
     n1 /= 2;
     printf("%d\n\n", n1);
    } else{
     printf("Opção inválida.\n");
     printf("Tamanho de %d é %zu\n\n.", n1, sizeof(n1));
    }
    x = 8;
    y = 0;
    
    y = --x;
    printf("O valor de Y é: %d\n", y);
    printf("O valor de X é: %d\n\n", x);
    
    y = x++;
    printf("O valor de Y é: %d\n", y);
    printf("O valor de X é: %d\n\n", x);
    
    z = 8;
    z++;
    printf("O valor de Z é: %d\n", z);
    
    return 0;
}
