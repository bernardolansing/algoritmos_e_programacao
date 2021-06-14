/* Este programa determina o mês de pagamento do IPVA com base na parte numérica de seu emplacamento.

Entradas:
- Número (apenas os algarismos) da placa.

Saídas:
- Mês em que o IPVA deverá ser pago.

Aluno: Bernardo Lansing */

#include <stdio.h>

int main() {
	int placa;

	printf("Digite a parte numérica do emplacamento.\n");
	scanf("%i", &placa);

	if (placa < 1000 || placa > 9999) {  // checa se a placa tem quatro dígitos
		printf("O emplacamento inserido é inválido!");
		return 0;
	}

	placa %= 10;  // obtém o último dígito da placa

	printf("O proprietário deverá pagar o IPVA do referido veículo no mês de ");
	
	switch (placa) {  // imprime o mês
	case 1:
		printf("janeiro.");
		break;

	case 2:
		printf("fevereiro.");
		break;
	
	case 3:
		printf("março.");
		break;
	
	case 4:
		printf("abril.");
		break;
	
	case 5:
		printf("maio.");
		break;
	
	case 6:
		printf("junho.");
		break;
	
	case 7:
		printf("julho.");
		break;
	
	case 8:
		printf("agosto.");
		break;
	
	case 9:
		printf("setembro.");
		break;
	
	case 0:
		printf("outubro.");
		break;
	}

	return 0;
}