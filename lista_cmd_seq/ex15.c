#include <stdio.h>
#include <math.h>

int main() {
	float custo, altura, raio, area;

	printf("Entre com a altura e o raio do cilindro.\n");
	scanf("%f %f", &altura, &raio);

	area = 3.14159265358979323846 * pow(raio, 2) + 2 * 3.14159265358979323846 * altura * raio;
	custo = (area * 5) / 3;

	printf("O gasto em tinta será de R$ %.2f.", custo);

	return 0;
}