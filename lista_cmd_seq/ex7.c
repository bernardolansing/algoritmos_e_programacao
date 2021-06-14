#include <stdio.h>

int main() {
	float r1, r2, r3, re;

	printf("Digite o valor dos três resistores em paralelo. ");
	scanf("%f %f %f", &r1, &r2, &r3);

	re = 1 / (1/r1 + 1/r2 + 1/r3);

	printf("A resistência equivalente do circuito é de %.1f ohms.", re);

	return 0;
}