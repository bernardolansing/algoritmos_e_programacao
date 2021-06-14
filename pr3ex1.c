/* Este programa decide se um voluntário está apto a doar sangue ou não.

Entradas:
- Idade;
	- Para 16 ou 17 anos: se os pais autorizam a doação;
- Se fez tatuagem nos últimos doze meses;
- Peso do voluntário.

Saídas:
- Permissão ou não para fazer a doação.

Aluno: Bernardo Lansing */

#include <stdio.h>

int main() {
	int idade, peso;
	char tatoo, autorizacao;


	/* SEÇÃO IDADE */
	printf("Informe a idade do voluntário. ");
	scanf("%i", &idade);

	if (idade < 16 || idade > 69) {
		printf("O voluntário não tem a idade necessária para realizar a doação.");
		return 0;
	} 
	
	else if (idade == 16 || idade == 17) {
		printf("Os pais do voluntário autorizaram a doação? (S/N)\n");
		scanf(" %c", &autorizacao);

		if (autorizacao == 'N') {
			printf("O voluntário precisaria de autorização dos responsáveis!");
			return 0;
		}

		else if (autorizacao == 'S') {
			printf("Então tudo bem!\n");
		}
	}

	/* SEÇÃO TATUAGEM */
	printf("Fez alguma tatuagem nos últimos doze meses? (S/N)\n");
	scanf(" %c", &tatoo);

	if (tatoo == 'S') {
		printf("Por medidas de segurança, você deve esperar um ano após uma tatuagem.");
		return 0;
	}

	else if (tatoo == 'N') {
		printf("Então podemos continuar.\n");
	}

	/* SEÇÃO PESO */
	printf("Qual a massa corpórea do voluntário? ");
	scanf("%i", &peso);

	if (peso < 50) {
		printf("O voluntário tem massa aquém do recomendado!");
		return 0;
	}

	/* CONCLUSÃO */
	printf("O voluntário está autorizado a fazer a doação!!!");
	return 0;
}