/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// A função recebe um ponteiro para inteiro (*x)
void dobrarValor(int *x) {
	*x = (*x) * 2; // Altera o conteúdo da variável original apontada por x
}

int main() {
	int numero = 10;

	printf("Antes da função: %d\n", numero); // Imprime 10
	// Passa o ENDEREÇO de 'numero' usando o operador &
	dobrarValor(&numero);

	printf("Depois da função: %d\n", numero); // Imprime 20

	return 0;
}