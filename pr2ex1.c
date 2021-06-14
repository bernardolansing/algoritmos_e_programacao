/* Este programa estima a quantidade de lâmpadas necessária para iluminar um ambiente.

Entradas: 
- Largura e comprimento de um cômodo;
- Potência do modelo de lâmpada a ser instalado.

Saída:
- Quantidade recomendada de lâmpadas para a situação descrita pelo usuário.

Aluno: Bernardo Lansing */

#include <stdio.h>
#include <math.h>

int main() {
	int qnt_lamp;
	float largura, comprimento, area, potencia;

	printf("Entre com as dimensões do cômodo. ");
	scanf("%f %f", &largura, &comprimento);
	printf("Informe a potência do modelo de lâmpada escolhido. ");
	scanf("%f", &potencia);

	area = largura * comprimento;
	qnt_lamp = ceil((area * 16) / potencia);

	printf("Recomenda-se a seguinte quantidade de lâmapadas: %i", qnt_lamp);

	return 0;
}