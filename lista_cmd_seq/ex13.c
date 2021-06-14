#include <stdio.h>

int main() {
	int h, m, s, stotal;

	printf("Insira o intervalo de tempo em horas, minutos e segundos.\n");
	scanf("%i %i %i", &h, &m, &s);

	stotal = s + m * 60 + h * 3600;

	printf("O intervalo de tempo especificado soma %i segundos.", stotal);

	return 0;
}