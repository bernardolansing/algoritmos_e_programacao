#include <stdio.h>
#include <math.h>

int main() {
	float x, serie, numenos, numais;

	printf("Selecione um valor.\t");
	scanf("%f", &x);

	for (numais = 25; numais >= 1; numais -= 2) {
		serie += pow(x, numais) / (26 - numais);
	}

	for (numenos = 24; numenos >= 2; numenos -= 2) {
		serie -= pow(x, numenos) / (25 - numenos);
	}

	printf("O resultado da sequência foi: %.4f", serie);
	return 0;
}