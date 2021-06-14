// Aluno: Bernardo Lansing

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXTRY 5;

int main() {
	int input, tentativas = 1, secreto;

	// escolhe o número aleatório
	srand(time(NULL));
	secreto = 1 + (rand() % 10);

	// julga a tentativa e determina o encerramento do programa
	for (tentativas; tentativas < 6; tentativas++) {
		printf("Digite seu chute: ");
		scanf("%i", &input);

		if (input == secreto) {
			printf("Parabéns! Você acertou em %i tentativas!", tentativas);
			return 0;
		}

		else if (input > secreto) {
			puts("Seu chute é maior do que o valor sorteado!");
		} else {
			puts("Seu chute é menor do que o valor sorteado!");
		}
	}

	puts("\nVocê ultrapassou o número máximo de tentativas!");
	return 0;
}