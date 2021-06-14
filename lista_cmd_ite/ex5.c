#include <stdio.h>
#include <math.h>

int main() {
	int n, i, j, primo = 1;

	printf("Selecione os n primeiros números primos a serem calculados.\n");
	scanf("%i", &n);

	printf("Primos:\n2\t3");

	for (i = 5; i < n; i += 2) {
		
		for (j = 3; j < sqrt(i); j++) {
			
			if (i % j == 0) {
				primo = 0;
				break;
			}
			
			primo = 1;
		}

		if (primo) {
			printf("\t%i", i);
		}
	}

	return 0;
}