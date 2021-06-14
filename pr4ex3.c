/* Este programa calcula a fórmula de pi de Leibniz com um número arbitrário de termos.

Entradas:
- Quantidade de termos da sequência de Leibniz (mais termos significa mais precisão).

Saídas:
- Número pi estimado.

Aluno: Bernardo Lansing */

#include <stdio.h>

int main() {
	float precisao = 0, pi = 0, contmais = 0, contmenos = 0;

	printf("Especifique um nível de precisão para o cálculo de pi.\t");
	scanf("%f", &precisao);

	for (contmais = 0; contmais < precisao; contmais += 2) {
		pi += 4 / (2 * contmais + 1);
	}

	for (contmenos = 1; contmenos < precisao; contmenos += 2) {
		pi -= 4 / (2 * contmenos + 1);
	}

	printf("O resultado aproximado de pi foi de %f", pi);
	return 0;
}