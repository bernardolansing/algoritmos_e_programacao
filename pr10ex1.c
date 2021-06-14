// Aluno: Bernardo Lansing

#include <stdio.h>
#include <math.h>
#include <ctype.h>

char triangulo(float a, float b, float c, float *area) {

	// é triângulo
	if ( !(a + b > c && a + c > b && b + c > a)) return 'n';

	// cálculo da área
	float p = (a + b + c) / 2;
	*area = sqrt(p * (p - a) * (p - b) * (p - c));
	
	// equilátero
	if (a == b && b == c) return 'q';

	// isósceles
	if ((a == b && b != c) || (a != b && b == c)) return 'i';

	// escaleno
	if (a != b && b != c && a != c) return 'e';
}

char le_s_n() {
	char ks;
	printf("Mais um? (S/N) ");
	scanf(" %c", &ks);
	ks = toupper(ks);
	
	while (ks != 'S' && ks != 'N') {
		puts("Entrada inválida!");
		scanf(" %c", &ks);
		ks = toupper(ks);
	}

	return ks;
}

int main() {
	char killswitch = 'S', triang;
	float a, b, c, area, *pont_area = &area;
	
	while (killswitch == 'S') {
		printf("Entre com os valores de a, b e c: ");
		scanf("%f %f %f", &a, &b, &c);

		triang = triangulo(a, b, c, pont_area);

		switch (triang) {
			case 'n': puts("Não é triângulo!");
			break;

			case 'q': printf("Triângulo equilátero com área\n%f", area);
			break;

			case 'i': printf("Triângulo isósceles com área\n%f", area);
			break;

			case 'e': printf("Triângulo escaleno com área\n%f", area);
			break;
		}

		puts("");
		killswitch = le_s_n();
	}

	return 0;
}