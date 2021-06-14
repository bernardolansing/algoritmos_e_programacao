#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char input[1100], resultado[1100], matriz[100][11], palavra[11];
	int i = 0, j = 0, k = 0, index;

	// coletar a frase do usuário
	puts("Entre com alguma frase.");
	fgets(input, 1100, stdin);
	input[strlen(input) - 1] = '\0';
	for (i; i < strlen(input); i++) input[i] = tolower(input[i]);

	// transfere a frase para uma matriz de palavras
	for (i = 0; i < strlen(input); i++) {
		if (isalpha(input[i])) {
			palavra[j] = input[i];
			j++;
			continue;
		}
		
		j = 0;
		strcpy(matriz[k], palavra);
		memset(palavra, 0, 11);
		k++;
	}

	//strcpy(resultado, matriz[0]);
	//resultado[strlen(resultado)] = ' ';
	strcpy(palavra, matriz[0]);
	
	for (i = 0; i <= k; i++) {	
		for (j = 0; j <= k; j++) {
			//puts("Deu certo até aqui.");
			if (strcmp(matriz[j], palavra) > 0 && isalpha(matriz[j][0])) {
				memset(palavra, 0, 11);
				strcpy(palavra, matriz[j]);
				index = j;
			}

			puts(matriz[j]);
		}

		strncat(resultado, palavra, strlen(palavra));
		resultado[strlen(resultado)] = ' ';
		memset(matriz[index], 0, 11);
	}

	printf("resultado = %s", resultado);
	return 0;
}