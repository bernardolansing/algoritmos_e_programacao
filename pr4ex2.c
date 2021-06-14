/* Este programa recebe algumas informações censitárias sobre cinco residências e então imprime um pequeno
resumo sobre os dados coletados.

Entradas:
- Quantidade de ocupantes de cada uma das cinco residências;
- Renda familiar total de cada uma das cinco residências;
- Disponibilidade de acesso ou não à internet para cada uma das cinco residências.

Saídas:
- Média de habitantes por moradia;
- Renda familiar mensal média da amostra de dados;
- Quantidade de residências com acesso à internet.

Aluno: Bernardo Lansing */

#include <stdio.h>
#include <ctype.h>
#define NMORAD 5

int main() {
	int residHabitantes = 0, totalHabitantes = 0, totalInternet = 0, forContador = 0;
	char residInternet;
	float residRenda, totalRenda;

	for (forContador = 1; forContador <= NMORAD; forContador++) {
		
		printf("Quantas pessoas residem este domicílio?\t");
		scanf("%i", &residHabitantes);

		printf("Estime a renda familiar mensal.\t");
		scanf("%f", &residRenda);

		printf("Esta residência possui acesso à internet? (S/N)  ");
		scanf(" %c", &residInternet);
		residInternet = tolower(residInternet);

		if (residInternet == 's') {
			totalInternet += 1;
		} 
		
		else if (residInternet != 'n') {  // checa se, caso o input não tenha sido sim, tenha sido não
			printf("A entrada foi inadequada!");
			forContador -= 1;
			continue; // coloquei só pra deixar mais completo, espero que seja permitido
		}

		totalHabitantes += residHabitantes;
		totalRenda += residRenda;

		printf("---------------------------\n");  // separa cada casa
	}

	printf("Média de habitantes por domicílio: %.2f\n", (float) totalHabitantes / 5);
	printf("Média de renda familiar mensal na amostra: R$ %.2f\n", totalRenda / 5);
	printf("Número de domicílios com acesso à internet: %i\n", totalInternet);

	return 0;
}