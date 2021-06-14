#include <stdio.h>
#include <math.h>

int main() {
	int contador;
	float l1, l2, l3, maiorlado;

	printf("Entre com três medidas de lados.\n");
	scanf("%f %f %f", &l1, &l2, &l3);

	/* DETERMINAR MAIOR LADO */

	if (l1 > l2 && l1 > l3) {
		maiorlado = l1;
	}

	else if (l2 > l1 && l2 > l3) {
		maiorlado = l2;
	}

	else {
		maiorlado = l3;
	}

	/* CHECAR SE NÃO FORMA TRIÂNGULO */

	if (maiorlado >= (l1 + l2 + l3 - maiorlado)) {
		printf("Os lados não formam um triângulo");
		return 0;
	}
	
	/* DETERMINAR O TIPO DE TRIÂNGULO */

	if (l1 == l2 && l2 == l3) {
		printf("Os lados formam um triângulo equilátero.");
		return 0;
	}

	if ((l1 == l2 && l2 != l3) || (l1 != l2 && l2 == l3)) {
		printf("Os lados formam um triângulo isóceles.");
		return 0;
	}

	if (l1 != l2 && l1 != l3 && l2 != l3) {
		printf("Os lados formam um triângulo escaleno.");
	}

	return 0;
}