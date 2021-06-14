// Aluno: Bernardo Lansing

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void contador_vogais(char texto[], int vogais[]) {
	int i;

	for (i = 0; i < strlen(texto); i++) {
		switch (tolower(texto[i])) {
			case 'a': (*vogais)++; break;
			case 'e': (*(vogais + 1))++; break;
			case 'i': (*(vogais + 2))++; break;
			case 'o': (*(vogais + 3))++; break;
			case 'u': (*(vogais + 4))++; break;
		}
	}
}

int main() {
	char frase[100];
	int vogais[5] = {0};

	// OBTENÇÃO DA STRING

	printf("Entre com o texto: ");
	fgets(frase, 100, stdin);
	frase[strlen(frase) - 2] = '\0';  // deveria ser -1

	// IMPRESSÃO DOS RESULTADOS

	contador_vogais(frase, vogais);

	printf("A vogal A aparece no texto %i vez(es)\n", vogais[0]);
	printf("A vogal E aparece no texto %i vez(es)\n", vogais[1]);
	printf("A vogal I aparece no texto %i vez(es)\n", vogais[2]);
	printf("A vogal O aparece no texto %i vez(es)\n", vogais[3]);
	printf("A vogal U aparece no texto %i vez(es)\n", vogais[4]);

	return 0;
}