#include <stdio.h>

int main() {
	int valor_original, valor, n200, n100, n50, n20, n10, n5, n2;

	printf("Especifique uma quantia a ser sacada.\n");
	scanf("%i", &valor);
	valor_original = valor;

	n200 = valor / 200;
	valor -= n200 * 200;
	n100 = valor / 100;
	valor -= n100 * 100;
	n50 = valor / 50;
	valor -= n50 * 50;
	n20 = valor / 20;
	valor -= n20 * 20;
	n10 = valor / 10;
	valor -= n10 * 10;
	n5 = valor / 5;
	valor -= n5 * 5;
	n2 = valor / 2;
	valor -= n2 * 2;

	printf("A quantia de R$ %i foi sacada com:\n", valor_original);
	printf("%i notas de R$ 200\n", n200);
	printf("%i notas de R$ 100\n", n100);
	printf("%i notas de R$ 50\n", n50);
	printf("%i notas de R$ 20\n", n20);
	printf("%i notas de R$ 10\n", n10);
	printf("%i notas de R$ 5\n", n5);
	printf("%i notas de R$ 2\n", n2);

	return 0;
}