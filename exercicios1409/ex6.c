#include <stdio.h>

int main() {

	int km;
	float gasto;

	printf("Informe o numero de km que irão ser rodados\n");
	scanf("%d", &km);

	if ((km < 0) || (km>900)) {

		printf("Informe uma quilometragem entre 0 e 900.\n");

	} else {

		if (km > 45) {

			gasto = 0.23*km;

		} else {

			gasto = 0.25*km;

		}
		
	}

	printf("Gasto com diesel: R$%.2f\n", gasto);

	return 0;



}