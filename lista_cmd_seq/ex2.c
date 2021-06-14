#include <stdio.h>

int main() {
	float preco, dolar;
	dolar = 5.46;

	printf("Entre com o preço do produto. ");
	scanf("%f", &preco);

	printf("O preço do produto, em dólares, é de $%.2f.", preco / dolar);

	return 0;
}