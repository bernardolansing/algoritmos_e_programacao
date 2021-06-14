#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float v1, v2, v3, arit, harm;

	printf("Digite o primeiro valor. ");
	scanf("%f", &v1);
	printf("Digite o primeiro valor. ");
	scanf("%f", &v2);
	printf("Digite o primeiro valor. ");
	scanf("%f", &v3);

	arit = (v1 + v2 + v3) / 3;
	printf("A média aritmética entre os elementos dados é: %.2f\n", arit);
	
	v1 = 1/v1;
	v2 = 1/v2;
	v3 = 1/v3;
	
	harm = 3 / (v1 + v2 + v3);
	printf("Já a média harmônica é: %.2f", harm);

	return 0;
}