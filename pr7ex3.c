// Aluno: Bernardo Lansing

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int dim, lin, col, mmlin, maior = 0, minimax = 31;

	// CONSTRUÇÃO DA MATRIZ VAZIA

	printf("Entre com a dimensão da matriz: ");
	scanf("%i", &dim);

	if (dim < 3 || dim > 9) {
		puts("Dimensão não suportada.");
		return 0;
	}

	int matriz[dim][dim];

	// PREENCHIMENTO DA MATRIZ

	srand(time(NULL));

	for (lin = 0; lin < dim; lin++) {
		for (col = 0; col < dim; col++) {
			matriz[lin][col] = (rand() % 30) + 1;
		}
	}

	// IMPRESSÃO DA MATRIZ

	for (lin = 0; lin < dim; lin++) {

		for (col = 0; col < dim - 1; col++) {
			printf("%i\t", matriz[lin][col]);
		}

		printf("%i\n", matriz[lin][dim - 1]);
	}

	// ENCONTRAR MINIMAX

	for (lin = 0; lin < dim; lin++) {

		for (col = 0; col < dim; col++) {
			if (matriz[lin][col] > maior) {
				maior = matriz[lin][col];
				mmlin = lin;
			}
		}
	}

	for (col = 0; col < dim; col++) {
		if (matriz[mmlin][col] < minimax) {
			minimax = matriz[mmlin][col];
		}
	}

	printf("O elemento minimax vale %i", minimax);
	return 0;
}