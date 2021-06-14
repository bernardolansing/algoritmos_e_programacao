/* Aluno: Bernardo Lansing */

#include <stdio.h>
#include <ctype.h>

int main() {
	char input;
	int contupper = 0, contlower = 0;

	do {
		printf("Selecione algum caractere. ");
		scanf(" %c", &input);

		if (toupper(input) == tolower(input)) {
			// isto testa se o caractere é uma letra.
			// este bloco não precisa executar nada.
		}
		
		else if (input == toupper(input)) {
			contupper++;
		}

		else if (input == tolower(input)) {
			contlower++;
		}
	} while (input != '!');
		

	printf("Letras maiúsculas: %i\nLetras minúsculas: %i", contupper, contlower);
	return 0;
}