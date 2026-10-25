#include <stdio.h>

int main (){

    FILE *fp;

    fp = fopen("ola.txt", "w");

    if(fp == NULL){
            printf("Erro ao conectar com o arquivo!\n");
        return 1;
    }

    fprintf(fp, "Olá meu amigo. Está aprendendo a linguagem C, né?\n");
    fclose(fp);

    fp = fopen("ola.txt", "r");

    if(fp == NULL){
        printf("Erro ao abrir o arquivo para leitura!\n");
        return 1;
    }

    char buffer[100];
    fgets(buffer, 100, fp);

    printf("Texto lido do arquivo: %s", buffer);

    fclose(fp);

    return 0;
}
