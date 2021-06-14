// Aluno: Bernardo Lansing

#include <stdio.h>

// Converte Celsius para Fahrenheit
void cparaf(float temp) {
	float conv = temp * 1.8 + 32;
	printf("Temperatura equivalente em Fahrenheit: %.2f\n", conv);
}

// Converte Fahrenheit para Celsius
void fparac(float temp) {
	float conv = 5 * (temp - 32) / 9;
	printf("Temperatura equivalente em Celsius: %.2f\n", conv);
}

// Dispõe o menu
void menu() {
	int resposta;
	float t;

	puts("Entre com uma das opções:");
	puts("1 - Converter graus centígrados para Fahrenheit.");
	puts("2 - Converter graus Fahrenheit para centígrados.");
	puts("3 - Sair.");

	printf("Opção: ");
	scanf("%i", &resposta);

	switch (resposta) {
		case 1:
		printf("Entre com a temperatura em graus Celsius: ");
		scanf("%f", &t);
		cparaf(t);
		break;

		case 2:
		printf("Entre com a temperatura em graus Fahrenheit: ");
		scanf("%f", &t);
		fparac(t);
		break;

		case 3:
		puts("Encerrando programa!");
		return;

		default:
		puts("Entrada inválida!");
	}

	puts("");
	menu();
}

int main() {
	menu();
	return 0;
}