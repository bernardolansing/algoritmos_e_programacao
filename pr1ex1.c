#include <stdio.h>

int main() {
	float val1, val2, val3, soma, mult;

	printf("Digite o primeiro valor. ");
	scanf("%f", &val1);
	printf("Digite o segundo valor: ");
	scanf("%f", &val2);
	printf("Digite o terceiro valor: ");
	scanf("%f", &val3);

	soma = val1 + val2 + val3;
	mult = val1 * val2 * val3;

	printf("A soma dos números resultou em: %.1f", soma);
	printf("A multiplicação dos números resultou em: %.1f", mult);

	return 0;
}