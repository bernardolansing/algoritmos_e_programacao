#include <stdio.h>
#include <math.h>

int main() {
	float serie = 0, termo, meta, x, n = 0, fat = 1;

	printf("Escolha uma potência para e.\n");
	scanf("%f", &x);

	meta = exp(x);

	while (1) {
		termo = pow(x, n) / fat;
		n++;
		fat *= n;
		serie += termo;
	
		if (serie >= meta - 0.0001 && serie <= meta + 0.0001) {
			printf("A aproximação da exponencial especificada é de %f", serie);
			printf("\nO valor correto é de %f", meta);
			printf("\nForam usadas %.0f iterações até se chegar a um resultado satisfatório", n);
			return 0;
		}
	}
}