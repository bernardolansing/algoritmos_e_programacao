// Aluno: Bernardo Lansing

#include <stdio.h>

void intersec(int a[], int na, int b[], int nb, int c[], int *nc) {
	int i, j, h = 0;

	for (i = 0; i < na; i++) {

		for (j = 0; j < nb; j++) {

			if (a[i] == b[j]) {
				c[h] = a[i];
				h++;
			}
		}
	}

	*nc = h;
}

int main() {
	int i, na, nb, c[20], nc, *pont_nc = &nc;

	printf("Entre com o número de valores do vetor A: ");
	scanf("%i", &na);
	int a[na];
	printf("Entre com os %i elementos de A: ", na);
	for (i = 0; i < na; i++) scanf("%i", &a[i]);

	printf("Entre com o número de valores do vetor B: ");
	scanf("%i", &nb);
	int b[nb];
	printf("Entre com os %i elementos de B: ", nb);
	for (i = 0; i < nb; i++) scanf("%i", &b[i]);

	intersec(a, na, b, nb, c, pont_nc);

	if (nc == 0) {
		printf("Vetor intersecção: vazio");
		return 0;
	}

	printf("Vetor intersecção: ");
	for (i = 0; i < nc; i++) printf("%i ", c[i]);

	return 0;
}