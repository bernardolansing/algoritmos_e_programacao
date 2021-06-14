/* Este programa calcula o montante de um empréstimo acrescido dos juros após uma quantidade arbitrária
de dias transcorridos.

Entradas:
- Capital inicial do empréstimo;
- Taxa de juros mensal;
- Número de dias desde o empréstimo.

Saídas:
- Montante final do empréstimo.

Aluno: Bernardo Lansing */

#include <stdio.h>
#include <math.h>

int main() {
	int dias, meses;
	float capital, juros, montante;

	printf("Entre com o valor do capital. ");
	scanf("%f", &capital);
	printf("Agora, com a taxa mensal de juros. ");
	scanf("%f", &juros);
	printf("Quantos dias se passaram desde o empréstimo? ");
	scanf("%i", &dias);

	meses = dias / 30;
	montante = capital * pow(1 + juros / 100, meses);

	printf("A quantia a ser paga pelo empréstimo é de R$ %.2f.", montante);

	return 0;
}