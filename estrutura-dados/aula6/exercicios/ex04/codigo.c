#include <stdio.h>

int main (){

    FILE *f = fopen("cliente.txt", "w");

    if (f != NULL){
        fprintf(f, "Nome do cliente: %s | ID: %d", "Alberto", 54);
        fclose(f);
    }

    char nome[20];
    int id;

    f = fopen("cliente.txt", "r");
    if (f != NULL){
        fscanf(f, "%*s %*s %*s %s %*s %*s %d", nome, &id);
        printf("Nome do cliente: %s | ID: %d\n", nome, id);
        fclose(f);
    }

    return 0;
}
