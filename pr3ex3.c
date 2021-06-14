/* Este programa calcula as raízes reais de uma função quadrática.

Entradas:
- Coeficientes de X² (a), X (b) e o valor do termo independente (c).

Saídas:
- Sinal do delta e raízes reais.

Aluno: Bernardo Lansing */

#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	float delta, r1, r2;

	printf("Entre com os coeficientes a, b e c.\n");
	scanf("%i %i %i", &a, &b, &c);
	
	if (a == 0) {
		printf("Coeficiente a nulo descaracteriza função quadrática!");
		return 0;
	}

	delta = (b * b) - (4 * a * c);

	if (delta > 0) {
		r1 = (-b + sqrt(delta)) / (2 * a);
		r2 = (-b - sqrt(delta)) / (2 * a);

		printf("Esta equação tem duas raízes reais, que são: %.3f e %.3f.", r1, r2);
		return 0;
	}

	if (delta == 0) {
		r1 = -b / (2 * a);
		printf("Esta equação tem apenas uma raiz real, que é: %.3f.", r1);
		return 0;
	}

	if (delta < 0) {
		printf("Esta equação não possui raízes reais.");
	}

	return 0;
}