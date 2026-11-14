/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

typedef struct{
    int id;
    int gols;
    float nota_media;
} ATACANTES;

int main()
{
    printf("\t\t Usando o \"rewind\" e \"fseek\"\n\n");
    printf("\a\a\a\a\a");

    ATACANTES t[3] = {{67, 253, 8.7}, {70, 308, 9.2}, {12, 123, 7.5}};
    
    FILE *fp;
    fp = fopen("jogador.dat", "wb");
    if (fp != NULL){
     fwrite(t, sizeof(ATACANTES), 3, fp);
     fclose(fp);
    }
    
    fp = fopen("jogador.dat", "rb");
    if (fp != NULL){
     ATACANTES a;
     
     fseek(fp, 2 * sizeof(ATACANTES), SEEK_SET);
     fread(&a, sizeof(ATACANTES), 1, fp);
     printf("Acesso ao terceiro atacante.\n");
     printf("\t ID: %d | Gols: %d | Nota Média: %.1f\n", a.id, a.gols, a.nota_media);
     rewind(fp);
     
     fread(&a, sizeof(ATACANTES), 1, fp);
     printf("Acesso ao primeiro atacante.\n");
     printf("\t ID: %d | Gols: %d | Nota Média: %.1f\n.", a.id, a.gols, a.nota_media);
     fclose(fp);
    }
    
    return 0;
}
