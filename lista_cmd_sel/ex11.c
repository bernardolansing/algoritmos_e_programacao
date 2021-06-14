#include <stdio.h>

int main() {
	int hi, hf, mi, mf, mintotal_i, mintotal_f, duracao;

	printf("Informe o horário do início da partida.\n");
	scanf("%i %i", &hi, &mi);

	printf("Informe o horário do fim da partida.\n");
	scanf("%i %i", &hf, &mf);

	mintotal_i = hi * 60 + mi;
	mintotal_f = hf * 60 + mf;

	if (mintotal_f <= mintotal_i) {
		mintotal_f += 1440;
	}

	duracao = mintotal_f - mintotal_i;

	printf("A partida durou %i h e %i min.", duracao / 60, duracao % 60);
	return 0;
}