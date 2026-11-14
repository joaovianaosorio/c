/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("\a\a\a\a\a");
    
    FILE *fp;
    fp = fopen("eu.txt", "w");
    if (fp == NULL){
        printf("Erro ao conectar ao arquivo!\n");
        return 1;
    }
    fprintf(fp, "Olá! Estou aprendendo a linguagem C. Dessa vez, estou mexendo com o ponteiro FILE!\n");
    fclose(fp);
    
    fp = fopen("eu.txt", "r");
    if(fp != NULL){
        char c;
        while((c = fgetc(fp)) != EOF){
            /*
            Quem avança no loop não é a variável, mas sim o próprio arquivo através do ponteiro "fp"
            Toda vez que você executa a função fgetc(fp):
            - Ela lê o caractere onde o ponteiro está posicionado atualmente no arquivo.
            - Automaticamente, o sistema operacional move o ponteiro interno do arquivo uma posição para a frente, preparando-o para a próxima leitura.
            */
            printf("%c", c);
        }
        fclose(fp);
    }
    
    FILE *arq = fopen("eu.txt", "a"); // "a" -> escreve sem apagar o que tinha
    if (arq == NULL){
        printf("Erro ao conectar ao arquivo!\n");
        return 1;
    }
    fprintf(arq, "Consegui me conectar ao arquivo!\n");
    fclose(arq);
    
    FILE *p = fopen("ler.txt", "w");
    if(p == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    fprintf(p, "Nome: %s | Idade: %d", "Joao", 21);
    fclose(p);
    char nome[10], label[10], label2[10], lb[6];
    int idade;
    p = fopen("ler.txt", "r");
    if(p != NULL){
        fscanf(p, "%s %s %s %s %d", label, nome, lb, label2, &idade);
        printf("%s %s %s %s %d", label, nome, lb, label2, idade);
        fclose(p);
    }
    
    /*
        " " -> aspas duplas servem para string
        ' ' -> aspas simples servem para caractere
        Aspas simples são usadas na função "fputc"
        "fputc" espera um número/caractere, espera algo do tipo int
        Um carcatere tem um número inteiro correspondente, por exemplo: C = 67
    */
    
    FILE *f = fopen("putc.txt", "w");
    if (f != NULL){
        fputc('J', f);
        fputc('O', f);
        fputc('A', f);
        fputc('O', f);
        fputc('\n', f);
        fclose(f);
    }
    f = fopen("putc.txt", "r");
    if (f != NULL){
        char d;
        while((c = fgetc(f) != EOF)){
            printf("%c", d);
        }
        fclose(f);
    }
    
    return 0;
}