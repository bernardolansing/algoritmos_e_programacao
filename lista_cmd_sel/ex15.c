#include <stdio.h>

int main() {
	float x, y;

	printf("Determine o valor das abscissas e das ordenadas (X e Y)\n");
	scanf("%f %f", &x, &y);

	/* checa se o ponto está na origem ou em algum eixo. */
	if (x == 0) {
		
		if (y == 0) {
			printf("O ponto está na origem.");
			return 0;
		}

		else {
			printf("O ponto (%.1f; %.1f) é contido pelo eixo Y", x, y);
			return 0;
		}
	} else if (y == 0) {
		printf("O ponto (%.1f; %.1f) é contido pelo eixo X", x, y);
		return 0;
	}

	/* checa em qual quadrante está o ponto */
	if (x > 0) {

		if (y > 0) {
			printf("O ponto (%.1f, %.1f) pertence ao primeiro quadrante.", x, y);
			return 0;
		}

		if (y < 0) {
			printf("O ponto (%.1f, %.1f) pertence ao quarto quadrante.", x, y);
			return 0;
		}
	}

	else if (x < 0) {

		if (y > 0) {
			printf("O ponto (%.1f, %.1f) pertence ao segundo quadrante.", x, y);
			return 0;
		}

		if (y < 0) {
			printf("O ponto (%.1f, %.1f) pertence ao terceiro quadrante.", x, y);
			return 0;
		}
	}

	return 0;
}