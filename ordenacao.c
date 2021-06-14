#include <stdio.h>

void ordena(int array[], int len) {
	int ord[len], i, j, menor = array[0], maior = array[0], indmenor = 0, indmaior = 0;

	for (i = 1; i < len; i++) {
		if (array[i] > maior) {
			maior = array[i];
			indmaior = i;
		}
	}

	for (i = 0; i < len; i++) {
		
		for (j = 0; j < len; j++) {
			if (array[j] < menor) {
				indmenor = j;
				menor = array[indmenor];
			}
		}

		ord[i] = menor;
		array[indmenor] = maior + 1;
		menor = maior + 1;
	}

	for (i = 0; i < len; i++) printf("%i  ", ord[i]);
}

int main() {
	int vetor[] = {-2, 10, 15, 31, -32, 3};

	ordena(vetor, 6);

	return 0;
}