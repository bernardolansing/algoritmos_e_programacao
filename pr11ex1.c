// Aluno: Bernardo Lansing

#include <stdio.h>

int avaliar_aposta(int *aposta, int *sorteio, int tam) {
	int i, j, acertos = 0;	
	
	// CONSISTÊNCIA DOS DADOS -------------------
	for (i = 0; i < tam; i++) {
		if (aposta[i] < 1 || aposta[i] > 80) return -1;
		if (sorteio[i] < 1 || sorteio[i] > 80) return -1;
	}
	// ------------------------------------------

	// CONTAR ACERTOS ---------------------------
	for (i = 0; i < tam; i++) {
		for (j = 0; j < tam; j++) {
			if (aposta[i] == sorteio[j]) acertos++;
		}
	}
	// ------------------------------------------

	return acertos;
}

int main() {
	int i, aposta[6], sorteio[6], resultado;
	int *pont_aposta = aposta, *pont_sorteio = sorteio;
	
	// RECEBIMENTO DAS INFORMAÇÕES --------------
	puts("Entre com as 6 dezenas sorteadas:");
	for (i = 0; i < 6; i++) scanf("%i", sorteio + i);

	puts("Entre com o jogo:");
	for (i = 0; i < 6; i++) scanf("%i", aposta + i);
	// ------------------------------------------

	// IMPRESSÃO DO RESULTADO -------------------
	resultado = avaliar_aposta(pont_aposta, pont_sorteio, 6);

	if (resultado == -1) {
		puts("Houve um erro com a entrada de dados; encerrando o programa.");
		return 0;
	}

	printf("Número de acertos: %i", resultado);

	switch (resultado) {
		case 4: puts("\nQuadra!"); break;
		case 5: puts("\nQuina!"); break;
		case 6: puts("\nSena!"); break;
	}
	// ------------------------------------------

	return 0;
}