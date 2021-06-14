// Aluno: Bernardo Lansing

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int matriz[4][4], arraycol[4], arraylin[4], lin, col, append, maior = 1;

	// CRIAÇÃO DA MATRIZ
	srand(time(NULL));  // define uma seed "aleatória"
	
	for (lin = 0; lin < 4; lin++) {  // laço que preenche a matriz
		
		for (col = 0; col < 4; col++) {  // laço que preenche uma linha
			append = 2 + (rand() % 39);  // escolhe um número aleatório entre 2 e 40
			matriz[lin][col] = append;
		}
	}

	// CÁLCULO DOS ARRAYS
	
	for (lin = 0; lin < 4; lin++) {  // laço que seleciona os maiores números de cada linha
		
		for (col = 0; col < 4; col++) {  // laço que seleciona o maior número de uma linha	
			if (matriz[lin][col] > maior) {
				maior = matriz[lin][col];
			}
		}

		arraylin[lin] = maior;
		maior = 1;
	}

	for (col = 0; col < 4; col++) {  // laço que seleciona os maiores números de cada coluna

		for (lin = 0; lin < 4; lin++) {  // laço que seleciona o maior número de uma coluna
			if (matriz[lin][col] > maior) {
				maior = matriz[lin][col];
			}
		}

		arraycol[col] = maior;
		maior = 1;
	}

	// IMPRESSÃO
	
	puts("Matriz");
	for (lin = 0; lin < 4; lin++) {
		
		for (col = 0; col < 3; col++) {
			printf("%i\t", matriz[lin][col]);
		}

		printf("%i\n", matriz[lin][3]);

	}

	puts("\nArranjo maiores elementos colunas");
	for (col = 0; col < 3; col++) {
		printf("%i\t", arraycol[col]);
	}
	printf("%i\n", arraycol[3]);

	puts("\nArranjo maiores elementos linhas");
	for (lin = 0; lin < 3; lin++) {
		printf("%i\t", arraylin[lin]);
	}
	printf("%i", arraylin[3]);

	return 0;
}