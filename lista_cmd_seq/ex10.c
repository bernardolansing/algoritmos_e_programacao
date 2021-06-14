#include <stdio.h>

int main() {
	int a, b;

	printf("Escolha um inteiro de três dígitos.\n");
	scanf("%i", &a);

	b = (a % 10) * 100 + (a / 10 % 10) * 10 + (a / 100);

	printf("%i", b);

	return 0;
}