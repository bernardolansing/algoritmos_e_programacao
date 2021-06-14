// Aluno: Bernardo Lansing

#include <stdio.h>

#define NLIN 10
#define NCOL 10

int abre_le_arquivo(char m[NLIN][NCOL], char filename[]) {
	FILE *arquivo = fopen(filename, "r");
	int l, c;

	if (arquivo == NULL) return -1;  // validação

	for (l = 0; l < NLIN; l++)	
		for (c = 0; c < NCOL + 1; c++) // necessário o +1 porque a quebra de linha (\n) conta como um caractere.
			m[l][c] = fgetc(arquivo);

	//printf("\nultimo = %c\n", m[9][9]);

	return 1;
}

void imprime_matriz_tela(char m[NLIN][NCOL]) {
	int l, c;
	
	for (l = 0; l < NLIN; l++) {	
		for (c = 0; c < NCOL; c++) printf("%c", m[l][c]);
		puts("");
	}

	//printf("\n it = %i", it);

	puts("");
}

int abre_grava_arquivo(char m[NLIN][NCOL], char filename[]) {
	FILE *arquivo = fopen(filename, "w");
	int lin, col;

	if (arquivo == NULL) return -1;  // validação

	for (lin = 0; lin < NLIN; lin++) {
		for (col = 0; col < NCOL; col++)
			if (fprintf(arquivo, "%c", m[lin][col]) < 0) return -1;
		
		fprintf(arquivo, "\n");
	}

	return 1;
}

void troca_caractere(char m[NLIN][NCOL], char alvo, char novo) {
	int lin, col;

	for (lin = 0; lin < NLIN; lin++) {
		for (col = 0; col < NCOL; col++)
			if (m[lin][col] == alvo) m[lin][col] = novo;
	}
}

int main() {
	int opcao, lida = 0;
	char matriz[NLIN][NCOL], filename[25], alvo, novo;

	puts("1 - Lê arquivo");
	puts("2 - Imprime matriz na tela");
	puts("3 - Troca caractere");
	puts("4 - Grava arquivo");
	puts("5 - Sair");

	printf("Entre com o nome do arquivo: ");
	scanf("%s", filename);

	while (1) {
		printf("Entre com a sua opção: ");
		scanf("%i", &opcao);
		puts("");

		switch (opcao) {
			case 1:
			if (abre_le_arquivo(matriz, filename) == 1) puts("Arquivo lido com sucesso!");
			else puts("Ocorreu um erro na abertura do arquivo!");
			break;

			case 2:
			if (!lida) {abre_le_arquivo(matriz, filename); lida = 1;}
			imprime_matriz_tela(matriz);
			break;

			case 3:
			if (!lida) {abre_le_arquivo(matriz, filename); lida = 1;}
			printf("Qual caractere você gostaria de substituir? ");
			scanf(" %c", &alvo);
			printf("Qual será o novo caractere? ");
			scanf(" %c", &novo);
			troca_caractere(matriz, alvo, novo);
			break;

			case 4:
			if (!lida) {abre_le_arquivo(matriz, filename); lida = 1;}
			if (abre_grava_arquivo(matriz, filename)) puts("Arquivo gravado com sucesso!");
			else puts("Ocorreu um erro na gravação do arquivo");
			break;

			case 5:
			puts("Encerrando o programa!");
			return 0;
		}
	}

	return 0;
}