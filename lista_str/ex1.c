#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char str[40];
	int freq[10], letras = 0, h, i, ocorrencias = 0;

	fgets(str, 40, stdin);
	str[strlen(str)] = '\0';

	for (i = 0; i < strlen(str); i++) {
		if (str[i] == '#') {
			str[i] = '\0';
			break;
		}
	}

	str[strlen(str)] = ' ';

	for (h = 0; h < 10; h++) {	
		
		for (i = 0; i < strlen(str) - 1; i++) {
			
			if (isalpha(str[i])) {
				letras++;
			}

			else {
				if (letras == h + 1) ocorrencias++;
				//printf("%i  ", letras);
				letras = 0;
			}

			
		}
		 printf("%i  ", ocorrencias);

		freq[h] = ocorrencias;
		ocorrencias = 0;
	}

	puts("Array de frequências:");
	for (h = 0; h < 10; h++) {
		printf("%i\t", freq[h]);
	}

	return 0;
}