#include <stdio.h>

int main() {
	float c, f;

	printf("Introduza a temperatura em Fahrenheit. ");
	scanf("%f", &f);

	c = 5 * (f - 32) / 9;

	printf("%.1f°F equivale a %.1f°C.", f, c);

	return 0;
}