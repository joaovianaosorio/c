/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char letra;
    char nome[20], frase[50], setenca[50];
    char senhaCorreta[4] = "1234"; 
    char senhaDigitada[4] = "1234";
    
    printf("\a\a\a\a\a\a");
    printf("Digite uma letra: ");
    letra = getchar();
    printf("A letra digitada foi: ");
    putchar(letra);
    putchar('\n');
    if(isalpha(letra) && isalnum(letra) && islower(letra)){
        printf("Você digitou uma letra minúscula!\n");
    } else if(isalpha(letra) && isalnum(letra) && isupper(letra)){
        printf("Você digitou uma letra maiúscula!\n");
    } else if(isdigit(letra)){
        printf("Você digitou um número!\n");
    } else{
        printf("Você digitou um espaço em branco!\n");
    }
    
    printf("\a\a\a\a\a\a\a");
    printf("\nDigite seu primeiro nome: ");
    scanf("%s", nome);
    for(int i = 0; nome[i] != '\0'; i++){
        if(islower(nome[i])){
           nome[i] = toupper(nome[i]);
        }
    }
    for(int i = 0; nome[i] != '\0'; i++){
        printf("%c", nome[i]);
    }
    if(strchr(nome, 'A') != NULL){
     printf("\nO nome contém a letra A!\n");
    } else{
     printf("O nome não contém a letra A!\n");
    }
    
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    printf("\a\a\a\a\a\a\a\a\a\a\n");
    printf("Digite uma frase (não muito grande): ");
    fgets(frase, 50, stdin);
    printf("A frase digitada é: \n");
    puts(frase);
    
    int tamanho = strlen(frase);
    printf("O tamanho da frase digitada é: %d\n", tamanho);
    int j;
    while ((j = getchar()) != '\n' && j != EOF);
    printf("Digite outra frase: ");
    fgets(setenca, 50, stdin);
    if(strstr(setenca, "Ola") != NULL){
     printf("A frase não contém a palavra 'Ola'!\n");
    } else{
     printf("A frase contém a palavra 'Ola'!\n");
    }
    strcat(setenca, nome);
    puts(setenca);
    strcpy(frase, nome);
    puts(frase);
    
    printf("\a\a\a\a\a\a");
    if (strcmp(senhaCorreta, senhaDigitada) == 1){
      printf("Acesso liberado! Senhas iguais.\n");
    } else{ 
     printf("Senha incorreta.\n"); 
    }
    
    return 0;
}
