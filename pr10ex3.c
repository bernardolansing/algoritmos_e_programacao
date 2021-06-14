// Aluno: Bernardo Lansing

#include <stdio.h>
#include <ctype.h>

char le_s_n() {
	char resp;

	printf("Mais um? (S/N) ");
	scanf(" %c", &resp);
	resp = toupper(resp);

	while (resp != 'S' && resp != 'N') {
		puts("Entrada inválida!");
		scanf(" %c", &resp);
		resp = toupper(resp);
	}

	return resp;
}

char avaliacao(int n1, int n2, int n3, int n4, int nf, float *media) {
	int i, menor = 20;

	if (n1 < menor) menor = n1;
	if (n2 < menor) menor = n2;
	if (n3 < menor) menor = n3;
	if (n4 < menor) menor = n4;

	*media = n1 + n2 + n3 + n4 + nf - menor;

	if (*media <= 49) return 'D';
	if (*media <= 69) return 'C';
	if (*media <= 84) return 'B';
	return 'A';
}

int main() {
	char killsw = 'S', conceito;
	int n1, n2, n3, n4, nf;
	float media, *pont_media = &media;

	while (killsw == 'S') {
		printf("Entre com as 5 notas (4 provas mensais e uma prova final): ");
		scanf("%i %i %i %i %i", &n1, &n2, &n3, &n4, &nf);

		conceito = avaliacao(n1, n2, n3, n4, nf, pont_media);
		printf("Sua média é %.1f e seu conceito é %c.", media, conceito);

		puts("");
		killsw = le_s_n();
	}

}