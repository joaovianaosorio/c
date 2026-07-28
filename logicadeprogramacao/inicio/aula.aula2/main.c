/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ //o main seria tipo função ()
 //o int significa que no final deve-se retornarum núemro inteiro
	int num = 9;
	float saldo = 9000.5;//em C, o deve-se usar"."  como decimal
	char letra = 'Z';
	printf("Tipos de Dados\n");
	printf("Número: %d\n", num);//o %d seria um marcador de posição para 
	//númros do tipo int
	printf("Saldo: %f\n", saldo);
	//printf("Saldo: %d/n", saldo) -> %d é p/ tipo inteiro;
	printf("Letra: %c\n", letra);
	printf("Endereço de num: %p", &num);
	return 0;
}

/*
 o & é para acessar o endereço da variável.
 por isso, o scanf precisa saber onde é o endereço da variável que vamos salvar
 o número que o usuário digitou
 por isso também, ele é usado na linha 23.
 o %p serve para mostrar o endereço físico da memória RAM
*/
