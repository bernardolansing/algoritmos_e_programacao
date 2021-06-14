// Aluno: Bernardo Lansing

#include <stdio.h>
#include <math.h>
#define MAXLIDOS 10

int main() {
	float input[MAXLIDOS] = {0}, mediapot, mediarad, append;
	int i = 0, quant = 0, entremedias = 0;

	printf("Entre os valores: ");
	
	for (i; i < MAXLIDOS; i++) {
		scanf("%f", &append);

		if (append < 0) {
			break;
		} else if (append == 0) {
			continue;
			/* não sei se era o objetivo, mas o enunciado diz que o programa para de coletar inputs
			para valores negativos, mas que só aceita positivos, então deduzi
			que zeros devem ser ignorados... */
		}

		input[i] = append;
		quant++;
	}

	for (i = 0; i < quant; i++) {
		mediapot += pow(input[i], 2);
	}

	mediapot /= quant;
	printf("Média dos quadrados: %f\n", mediapot);

	for (i = 0; i < quant; i++) {
		mediarad += sqrt(input[i]);
	}

	mediarad /= quant;
	printf("Média das raízes quadradas: %f\n", mediarad);

	for (i = 0; i < quant; i++) {
		if (input[i] >= mediarad && input[i] <= mediapot || input[i] <= mediarad && input[i] >= mediapot) {
			entremedias++;
		}
	}

	printf("Quantidade de valores entre as duas médias: %i", entremedias);
	return 0;
}