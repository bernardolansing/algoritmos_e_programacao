#include <stdio.h>
#include <math.h>
#define PI 3.1415

int main() {
	int op;
	float raio, area, perimetro;

	printf("Digite 1 para obter a área e 2 para obter o perímetro da circunferência.\n");
	scanf("%i", &op);

	if (op != 1 && op != 2) {
		printf("Operação inválida!");
		return 0;
	}

	printf("Digite o valor do raio da circunferência. ");
	scanf("%f", &raio);

	switch(op) {
		case 1:
			printf("A área da circunferência é %.2f.", raio * raio * PI);
			break;
		
		case 2:
			printf("O perímetro da circunferência é %.2f.", 2 * PI * raio);
			break;
	}

	return 0;
}