// Aluno: Bernardo Lansing

#include <stdio.h>
#include <string.h>

struct Aluno {
	char nome[60];
	int idade;
	int media;
};

struct Aluno aluno;

int main() {
	FILE *arquivo;  // criação do ponteiro para o arquivo
	char filename[20];

	printf("Entre com o nome do arquivo:\t");
	scanf("%s", filename);

	// ESCRITA DO ARQUIVO

	arquivo = fopen(filename, "wb");  // abre o arquivo para escrita em binário
	
	while (1) {

		// receber o nome
		printf("Nome: ");
		fflush(stdin);
		fgets(aluno.nome, 60, stdin);
		aluno.nome[strlen(aluno.nome) - 1] = '\0';

		// checar se o programa deve encerrar
		if (!strcmp(aluno.nome, "sair")) break;

		// receber a idade e a média
		printf("Idade: ");
		scanf("%i", &aluno.idade);
		printf("Média: ");
		scanf("%i", &aluno.media);

		puts("");

		// gravar informações no arquivo
		fwrite(aluno.nome, 1, 60, arquivo);  // grava o nome do aluno
		fwrite(&aluno.idade, 4, 1, arquivo);  // grava a idade do aluno
		fwrite(&aluno.media, 4, 1, arquivo);  // grava a média do aluno
	}

	fclose(arquivo);  // fecha a escrita do arquivo
	puts("");

	// LEITURA DO ARQUIVO

	int mediabusca, qnt_alunos = 0;
	float idademedia = 0;

	printf("Entre com a média para busca: ");
	scanf("%i", &mediabusca);
	printf("Lista de todos os alunos com média maior ou igual a %i:\n", mediabusca);

	arquivo = fopen(filename, "rb");  // abre o arquivo para leitura de binário

	while (1) {
		size_t retorno;  
		/* size_t é o nome que stdio.h dá a um long unisgned int, tipo que é grande o suficiente para
		representar o tamanho de qualquer objeto usando sizeof(). */

		retorno = fread(aluno.nome, 1, 60, arquivo);  // lê o nome do aluno e informa quantos bytes foram lidos.

		if (retorno < 60) break;  /* se o programa não leu todos os 60 bytes de alunos.nome,
		então o arquivo deve ter chegado ao fim. */

		fread(&aluno.idade, 4, 1, arquivo);  // lê a idade do aluno
		fread(&aluno.media, 4, 1, arquivo);  // lê a média do aluno
		
		if (aluno.media >= mediabusca) {
			printf("Nome: %s, média: %i\n", aluno.nome, aluno.media);
		}
		
		qnt_alunos++;
		idademedia += aluno.idade;
	}

	fclose(arquivo);  // fecha o arquivo

	idademedia /= qnt_alunos;
	printf("Idade média de todos os alunos: %.2f", idademedia);

	return 0;
}