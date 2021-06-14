// Aluno: Bernardo Lansing

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int substitui_menor(int vetor[], int tam, int x) {
	int i, menor = 101, indmenor;
	
	// ENCONTRAR O MENOR ELEMENTO ---------------
	for (i = 0; i < tam; i++) 
		if (vetor[i] < menor) {
			menor = vetor[i];
			indmenor = i;
	}
	// ------------------------------------------

	// SUBSTITUIR OU NÃO O ELEMENTO -------------
	if (menor > x) {
		*(vetor + indmenor) = x;
		return 1;
	}
	// ------------------------------------------

	return 0;
}

int main() {
	int i, x, vetor[10];

	// GERAR E IMPRIMIR O VETOR -----------------
	srand(time(NULL));

	for (i = 0; i < 10; i++) {
		vetor[i] = rand() % 101;
		printf("%i ", vetor[i]);
	}
	// ------------------------------------------

	// COLETAR X E EXECUTAR A OPERAÇÃO ----------
	printf("\nEntre com o valor de X: ");
	scanf("%i", &x);

	if (substitui_menor(vetor, 10, x)) {
		for (i = 0; i < 10; i++) printf("%i ", vetor[i]);
		puts("\nFoi feita a troca!");
	}

	else puts("\nNão foi feita a troca!");
	
	return 0;
}