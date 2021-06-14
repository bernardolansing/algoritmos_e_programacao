#include <stdio.h>
#include <string.h>

int main() {
	char entrada[50], saida[50];
	int i, j = 0;

	puts("Entre com uma string.");
	fgets(entrada, 50, stdin);
	entrada[strlen(entrada) - 1] = '\0';

	for (i = 0; i < strlen(entrada); i++) {
		if (entrada[i] == ' ') continue;
		saida[j] = entrada[i];
		j++;
	}

	saida[j + 1] = '\0';

	puts("Espaços removidos:");
	
	printf("%s", saida);
	
	for (i = 0; i < strlen(saida) - 1; i++) {
		printf("%c", saida[i]);
	}

	return 0;
}