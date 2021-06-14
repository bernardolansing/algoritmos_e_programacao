// Aluno: Bernardo Lansing

#include <stdio.h>
#define tammax 10

int main() {
	int input[tammax], pares[tammax/2], impares[tammax/2], output[tammax], i = 0, f = 0, g = 0;
	// "pares" e "impares" referem-se ao index dos elementos no array original.
	// i, f e g serão usados como contadores para laços for.

	printf("Arranjo de entrada: ");

	for (i; i < tammax; i++) {
		scanf("%i", &input[i]);
	}

	for (i = 0; i < tammax; i++) {
		if (input[i] % 2 == 0) {
			pares[f] = input[i];
			f++;
		}
		
		else {
			impares[g] = input[i];
			g++;
		}
	}

	f = g = 0;

	for (i = 0; i < tammax; i++) {
		if (input[i] % 2 == 0) {
			output[i] = impares[f];
			f++;
		}

		else {
			output[i] = pares[g];
			g++;
		}
	}

	printf("Arranjo de saída: ");
	
	for(i = 0; i < tammax; i++) {
		printf("%i ", output[i]);
	}

	return 0;
}