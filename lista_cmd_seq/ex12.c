#include <stdio.h>

int main() {
	int bin, dec;

	printf("Entre com um binário puro de cinco dígitos.\n");
	scanf("%i", &bin);

	dec = (bin % 10) + (bin / 10 % 10) * 2 + (bin / 100 % 10) * 4 + (bin / 1000 % 10) * 8 + (bin / 10000) * 16;

	printf("A forma decimal de %i é %i.", bin, dec);

	return 0;
}