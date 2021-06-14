// Aluno: Bernardo Lansing

#include <stdio.h>
#include <string.h>

// define CARRO como uma referência à struct Carro.
typedef struct Carro {
	int cod;
	int ano;
	char modelo[45];
	char marca[45];
	float preco;
} CARRO;

CARRO arrcar[3];  // constrói o array de três structs de carro

int menu() {
	int resposta;
	
	puts("\n1 - Cadastro de carro");
	puts("2 - Consulta de carro");
	puts("3 - Preço médio dos carros");
	puts("4 - Imprime estoques da revenda");
	puts("5 - Sair");
	printf("Entre com a sua opção: ");
	
	scanf("%i", &resposta);
	if (resposta < 1 && resposta > 5) return -1;

	return resposta;
}

void cadastra_carro(CARRO *carro) {
	printf("\nCódigo: ");
	scanf("%i", &(carro->cod));

	printf("\nMarca: ");
	scanf("%s", carro->marca);

	fflush(stdin);
	printf("\nModelo: ");
	fgets(carro->modelo, 45, stdin);
	carro->modelo[strlen(carro->modelo) - 1] = '\0';

	printf("\nPreço: ");
	scanf("%f", &(carro->preco));

	printf("\nAno: ");
	scanf("%i", &(carro->ano));
}

void print_carro(CARRO carro) {
	printf("\nCódigo: %i", carro.cod);
	printf("\nMarca: %s", carro.marca);
	printf("\nModelo: %s", carro.modelo);
	printf("\nPreço: %.2f", carro.preco);
	printf("\nAno: %i", carro.ano);
}

float calcula_media_preco(CARRO carros[], int ncarros) {
	int i = 0;
	float media = 0;

	for (i; i < ncarros; i++) media += carros[i].preco;

	media /= ncarros;

	return media;
}

CARRO procura_carro(CARRO carros[], int ncarros, int cod) {
	int i = 0;
	
	for (i; i < ncarros; i++) {
		if (carros[i].cod == cod) return carros[i];
	}

	// cria uma struct com código -1 para sinalizar que não houve correspondências.
	CARRO erro;
	erro.cod = -1;

	return erro;
}

int main() {
	int opcao, cadastros = 0, consulta, i;
	CARRO busca;

	while (1) {
		opcao = menu();

		switch (opcao) {
			
			// cadastro
			case 1:
			
			if (cadastros < 3) {
				cadastra_carro(&arrcar[cadastros]);
				cadastros++;
			}
			
			else puts("O limite de carros cadastrados já foi atingido.");
			
			break;

			// consulta
			case 2:
			printf("Informe o código do carro: ");
			scanf("%i", &consulta);
			busca = procura_carro(arrcar, cadastros, consulta);
			if (busca.cod != -1) print_carro(busca);
			break;

			// preço médio
			case 3:
			printf("Preço médio: R$ %.2f", calcula_media_preco(arrcar, cadastros));
			break;

			// imprimir estoque
			case 4:
			puts("Relatório de estoque:");

			for (i = 0; i < cadastros; i++) {
				print_carro(arrcar[i]);
				puts("");
			}

			break;

			// sair do programa
			case 5:
			return 0;
			
			default:
			opcao = menu();
			continue;
		}
	}
}