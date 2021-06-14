#include <stdio.h>

int main() {
	int numi, numr, a1, a2, a3;

	printf("Escolha um inteiro de três dígitos.\n");
	scanf("%i", &numi);

	a1 = numi / 100;
	a2 = numi / 10 % 10;
	a3 = numi % 10;

	numr = numi * 10 + ((a1 + 3 * a2 + 5 * a3) % 7);

	printf("O código é %i.", numr);

	return 0;
}