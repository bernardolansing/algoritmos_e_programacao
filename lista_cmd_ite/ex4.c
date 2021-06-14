#include <stdio.h>
#include <math.h>

int main() {

	int n, i, somador = 1; 
	
	while (1) {
		printf("Informe algum inteiro positivo.\n");
		scanf("%i", &n);

		if (n <= 1) {
			break;
		}

		for (i = 2; i < n; i++) {

			if (n % i == 0) {
				somador += i;	
			}
		}

		if (somador == n) {
			printf("%i é um número perfeito.\n", n);
		} else {
			printf("%i não é um número perfeito.\n", n);
		}

		somador = 1;
	}

	return 0;
}