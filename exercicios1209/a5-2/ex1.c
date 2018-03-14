#include <stdio.h>

int main() {

	float altura, peso;
	char sexo;

	printf("Informe a altura e o sexo (M ou F): \n");
	scanf("%f %c", &altura, &sexo);

	if (sexo == 'F') {
		peso = (62.1 * altura) - 44.7;
		printf("Peso ideal: %.2fKg\n", peso);
	} else {
		peso = (72.7 * altura) - 58;
		printf("Peso ideal: %.2fKg\n", peso);
	}

	return 0;
}