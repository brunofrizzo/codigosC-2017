#include <stdio.h>

int main() {

	float precoAlc, precoGasol, rendAlc, rendGasol, custoPorKmAlc, custoPorKmGasol;

	printf("Informe o preco do litro de alcool, o de gasolina, o rendimento do carro usando alcool e o rendimento usando gasolina: \n");
	scanf("%f %f %f %f", &precoAlc, &precoGasol, &rendAlc, &rendGasol);

	custoPorKmAlc = precoAlc / rendAlc;
	custoPorKmGasol = precoGasol / rendGasol;

	if ( ( custoPorKmGasol == custoPorKmAlc ) || ( custoPorKmAlc > custoPorKmGasol ) ) {
		printf("Abasteça com gasolina.\n");
	} else {
		printf("Abasteça com alcool.\n");
	}

	return 0;
}