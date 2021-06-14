// Aluno: Bernardo Lansing

#include <stdio.h>
#include <math.h>

void calc(float r, float x0, float t);

int main() {
	float x0, r, t;

	// obtenção de dados
	printf("Entre com o valor de r: ");
	scanf("%f", &r);
	printf("Entre com o valor de X0: ");
	scanf("%f", &x0);
	printf("Entre a tolerância: ");
	scanf("%f", &t);

	// validação da tolerância
	if (t <= 0) {
		printf("Valor de tolerância inválido!");
		return 0;
	}

	calc(r, x0, t);
	return 0;
}

void calc(float r, float x0, float t) {
	float xn = x0;

	do {
		xn -= (pow(xn, 3) - r) / (3 * pow(xn, 2));
	} while (fabs(pow(xn, 3) - r) >= t);

	printf("A raiz cúbica aproximada de %f é %f", r, xn);
}