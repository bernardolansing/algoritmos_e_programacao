#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int x1, y1, x2, y2;
	float deltax, deltay, dist;

	printf("Digite X da primeira coordenada. ");
	scanf("%i", &x1);
	printf("Digite Y da primeira coordenada. ");
	scanf("%i", &y1);

	printf("Digite X da segunda coordenada. ");
	scanf("%i", &x2);
	printf("Digite Y da segunda coordenada. ");
	scanf("%i", &y2);

	deltax = abs(x2 - x1);
	deltay = abs(y2 - y1);

	dist = sqrt(pow(deltax, 2) + pow(deltay, 2));
	printf("A distância entre os dois pontos especificados é de %.1f unidades.", dist);

	return 0;
}