/* Este programa calcula o valor do uso de um estacionamento.

Entradas:
- Tempo usado pelo cliente.

Saídas:
- Valor total a ser pago.

Aluno: Bernardo Lansing */

#include <stdio.h>

int main() {
	int horas, preco = 15;

	printf("Entre com a quantidade de horas que o cliente deixou seu carro estacionado.\n");
	scanf("%i", &horas);

	if (horas >= 8) {
		printf("Total a pagar: R$ 32,00. Tenha um bom dia!");
		return 0;
	}

	if (horas > 1 && horas < 8) {
		horas -= 1;
		preco += 2 * horas;
		printf("Total a pagar: R$ %i,00. Tenha um bom dia!", preco);
		return 0;
	}

	if (horas == 1) {
		printf("Total a pagar: R$ 15,00. Tenha um bom dia!");
	}

	return 0;
}