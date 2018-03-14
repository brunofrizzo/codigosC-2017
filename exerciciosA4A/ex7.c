#include <stdio.h>

int main() {

	float comprimentoPista, consumo, distTotal, distAbastecimento, numLitros;
	int numVoltasTotal, numAbastecimentos;
	printf("Informe o comprimento da pista, o número total de voltas, o número de abastecimentos desejados e o consumo do carro em km/l\n");
	scanf("%f %d %d %f", &comprimentoPista, &numVoltasTotal, &numAbastecimentos, &consumo);

	distTotal = comprimentoPista * numVoltasTotal;
	distAbastecimento = distTotal / numAbastecimentos;
	numLitros = distAbastecimento / consumo; 

	printf("Número de litros mínimos ate o primeiro reabastecimento: %.2f\n", numLitros);
	return 0;
}