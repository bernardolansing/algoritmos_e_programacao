// Aluno: Bernardo Lansing

#include <stdio.h>

int f(char ind, float x) {
	int n = 0, soma = 0;
	
	if (ind == 'L') {

		while (soma + n < x) {
			n++;
			soma += n;
		}

		return n;
	}

	else if (ind == 'Q') {
		
		while (soma + n * n + 2 * n - 1 <= x) {
			n++;
			soma += n * n;

			/* aqui foi usada a propriedade de que a diferença entre um número n ao quadrado
			e o antecessor de n ao quadrado vale 2n - 1. */

			/* também poderia ter sido usada a expressão soma + (n + 1) * (n + 1) <= x, mas julgo
			que este formato seria um pouco de "trapaça". */
		}

		return n;
	}

	return -1;
}

int main() {
	char ind;
	float x;
	int resp;
	
	printf("Entre o valor de X: ");
	scanf("%f", &x);
	printf("Entre o indicador (L ou Q): ");
	scanf(" %c", &ind);

	resp = f(ind, x);

	if (resp == -1) {
		printf("Código inválido!");
		return 0;
	}

	printf("O valor de n é: %i", resp);
	return 0;
}