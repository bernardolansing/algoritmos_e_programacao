#include <stdio.h>


int main() {
	int n;

	printf("Insira um inteiro. ");
	scanf("%i", &n);

	printf("O último algarismo de %i é %i.", n, n % 10);

	return 0;
}