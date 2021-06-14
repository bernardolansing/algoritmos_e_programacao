/* Aluno: Bernardo Lansing */

#include <stdio.h>
#include <math.h>

int main() {
	float x, tol, n = 1, termo, seq = 0;

	printf("Especifique um valor para X e uma tolerância de imprecisão.\n");
	scanf("%f %f", &x, &tol);

	if (x < -1 || x > 1) {
		printf("O valor de X entrado é inválido.\n");
		return 0;
	}
	
	termo = pow(x, n) / (n * (n + 1));
	
	do {
		seq += termo;
		n += 2;
		termo = pow(x, n) / (n * (n + 1));

		if (fabs(termo) >= tol) {
			seq -= termo;
			n += 2;
		}

		termo = pow(x, n) / (n * (n + 1));

	} while (fabs(termo) >= tol);

	printf("%.0f ", n);

	printf("A sequência, para os argumentos dados, vale %f.", seq);
	return 0;
}