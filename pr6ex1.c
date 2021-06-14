// Aluno: Bernardo Lansing

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char strInput[60], strSemEspaco[60], strVogais[60];
	int i = 0, f = 0, vogais = 0;

	printf("Entre com um string: ");
	fgets(strInput, 60, stdin);
	strInput[strlen(strInput) - 1] = '\0'; // remove a quebra de linha do fgets()

	for (i; i < strlen(strInput); i++) {
		if (strInput[i] != ' ') {
			
			// criando a string sem espaços
			strSemEspaco[f] = strInput[i];
			f++;

			// contando o número de vogais
			switch(tolower(strInput[i])) {
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u': 
					vogais++;
					break;
				default: break;
			}
		}
	}

	strSemEspaco[f+1] = '\0'; // encerra a string sem espaços.

	printf("String sem espaços: %s\n", strSemEspaco);
	printf("Nro de vogais: %i", vogais);

	return 0;
}