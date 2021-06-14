/* Aluno: Bernardo Lansing */

#include <stdio.h>

int main() {
	int input = 0, maior = 0, menor = 0; // menor deveria valer 9999 por padrão

	do {
		printf("Selecione um inteiro ou entre 9999 para sair.\n");
		scanf("%i", &input);

		if (input == 9999) {
			break;
			/* não tenho certeza se posso usar, mas sei que poderia ser substituído deixando este bloco
			vazio e colocando um else à frente do próximo if. No entanto, acho essa solução mais prática. */
		}
		
		if (input > maior) {
			maior = input;
		}

		else if (input < menor) {
			menor = input;
		} 
	} while (input != 9999);

	if (maior == 0 && menor == 0) {
		printf("Não há valores a mostrar.");
		return 0;
	}

	else {
		printf("O maior valor inserido foi %i e o menor foi %i.", maior, menor);
		return 0;
	}
}