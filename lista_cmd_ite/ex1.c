#include <stdio.h>

int main() {
	int compr;
	float numer = 1, denom = 1, serie = 0, termo = 1;

	for (compr = 1; termo >= 0.01; compr++) {
		termo = numer / (denom * denom);
		serie += termo;
		numer += 1;
		denom += 2;
	}

	printf("Comprimento: %i\nValor da sequência: %f", compr, serie);
	return 0;
}