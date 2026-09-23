/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char sex;
    
    printf("\a\a\a\a\a");
    printf("\t\tSexualidade\n\n");
    printf("\t-- MENU-- \n");
    printf("\nHeterossexual = H\n");
    printf("Bissexual = B\n");
    printf("Gay = G\n");
    printf("Pansexual = P\n");
    printf("Assexual = A\n");
    printf("Demissexual = D\n");
    printf("Queer =  Q\n");
    printf("\n(Responsa com uma letra)\n");
    printf("Qual é sua sexualidade? ");
    scanf("%c", &sex);
    switch(sex){
     case 'H':
     case 'h':
      printf("Você sente atração por pessoas do sexo oposto.");
      break;
     case 'B':
     case 'b':
      printf("Você sente atração por pessoas do sexo oposto e do mesmo que o seu.");
      break;
     case 'G':
     case 'g':
      printf("Você sente atração por pessoas do mesmo sexo (gênero) que você.");
      break;
     case 'P':
     case 'p':
      printf("Você não sente atração por outras pessoas independentemente do gênero ou sexo.");
      break;
     case 'A':
     case 'a':
      printf(" Pessoas que não sentem atração sexual por nenhum gênero, embora ainda possam sentir atração afetiva ou romântica.");
      break;
     case 'D':
     case 'd':
      printf("Pessoas que só sentem atração sexual após estabelecerem um forte vínculo emocional ou afetivo com alguém.");
      break;
     case 'Q':
     case 'q':
      printf(" Termo usado por quem não se identifica exclusivamente com a heterossexualidade ou cujas vivências de sexualidade e gênero fogem aos padrões tradicionais.");
      break;
     default:
      printf("O sistema não conhece sua sexualidade.");
    }

    return 0;
}
