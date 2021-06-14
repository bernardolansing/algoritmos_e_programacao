/* Este programa calcula a área e o perímetro de um quadrado circunscrito.

Entradas:
- Raio do círculo.

Saídas:
- Área e perímetro do maior quadrado que pode ser contido pelo círculo especificado.

Aluno: Bernardo Lansing */

#include <stdio.h>
#include <math.h>

int main() {
	float raio, lado, area;

	printf("Informe o raio do círculo. ");
	scanf("%f", &raio);

	lado = raio * 2 / sqrt(2);
	area = lado * lado;

	printf("Seguem as dimensões do quadrado circunscrito:\n");
	printf("%.2f unidadades quadradas de área;\n%.2f unidades de perímetro.", area, lado * 4);

	return 0;
}