/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

typedef struct{
   int id;
   float preco;
} GARRAFA;

int main()
{
    printf("\t\t Usando \"fwrite\" e \"fread\"\n\n");
    printf("\a\a\a\a\a");
    
    GARRAFA g1 = {67,23.0f};
    FILE *f = fopen("garrafa.dat", "wb");
    if (f != NULL){
        fwrite(&g1, sizeof(GARRAFA), 1, f);
        fclose(f)
    };
    
    GARRAFA g2;
    f = fopen("garrafa.dat", "rb");
    if (f != NULL){
        fread(&g2, sizeof(GARRAFA), 1, f);
        printf("ID Lido: %d | Preço lido: %.2f\n", g2.id, g2.preco);
        printf("Arquivo lido com sucesso!");
        fclose(f);
    }
    
    return 0;
}
