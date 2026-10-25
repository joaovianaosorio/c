#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1. Abrindo o arquivo para escrita ("w")
    FILE *f = fopen("nome.txt", "w");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    // Escrevendo o nome "Joao" letra por letra
    char palavra[10] = "Joao";
    int i = 0;

    while (palavra[i] != '\0') {
        fputc(palavra[i], f); // Grava um caractere por vez no arquivo
        i++;
    }

    fclose(f); // Fecha o arquivo após a escrita

    // 2. Abrindo o arquivo para leitura ("r")
    f = fopen("nome.txt", "r");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo para leitura!\n");
        return 1;
    }

    printf("Nome lido do arquivo: ");

    char c;
    // Lê caractere por caractere até encontrar o fim do arquivo (EOF)
    while ((c = fgetc(f)) != EOF) {
        printf("%c", c); // Mostra cada letra na tela
    }

    printf("\n");
    fclose(f); // Fecha o arquivo no final

    return 0;
}
