#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	int i, j = 0, k, tamtexto, tampalavra, palindroma = 1;
	char texto[100], palavra[20];

	printf("Digite o texto.\n");
	fgets(texto, 100, stdin);
	tamtexto = strlen(texto) - 1;
	texto[tamtexto] = '\0';

	// SEPARANDO PALAVRAS

	for (i = 0; i < tamtexto; i++) {

		if (toupper(texto[i]) != tolower(texto[i])) {
			palavra[j] = texto[i];
			j++;
		} 
		
		else {
			palavra[j + 1] = '\0';
			j = 0;
			tampalavra = strlen(palavra);

			// TESTANDO PALÍNDROMA
			
			for (k = 0; k <= tampalavra / 2; k++) {
				if (palavra[k] != palavra[tampalavra - k]) {
					palindroma = 0;
					break;
				}
			}

			if (palindroma) {printf("%s: \tpalíndroma\n", palavra);}
			else {printf("%s: \tnão palíndroma\n", palavra);}
			
		}
	}

	return 0;
}