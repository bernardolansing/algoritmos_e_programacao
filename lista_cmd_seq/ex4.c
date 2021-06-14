#include <stdio.h>

int main() {
	int horas, filhos;
	float salario_hora, salario_familia, salario_bruto;

	printf("Entre com o salário-hora e a jornada de trabalho do funcionário.\n");
	scanf("%f %i", &salario_hora, &horas);
	printf("Quantos filhos com menos de 14 anos tem o funcionário? ");
	scanf("%i", &filhos);

	if (filhos > 0) {
		printf("Qual é o salário-família oferecido pela empresa? ");
		scanf("%f", &salario_familia);
	}

	salario_bruto = salario_hora * horas + salario_familia * filhos;
	printf("O funcionário deverá receber um salário de R$ %.2f.", salario_bruto);

	return 0;
}
