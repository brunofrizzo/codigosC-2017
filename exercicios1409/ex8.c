#include <stdio.h>
#include <string.h>

int main() {

	char prato[30], sobremesa[30], bebida[30];
	int cal;

	printf("Informe o prato, a sobremesa e a bebida\n");
	scanf("%s %s %s", prato, sobremesa, bebida);

	cal = 0;
	
	if (strcmp(prato, "vegetariano") == 0) {
		cal = cal + 180;		
	} else if (strcmp(prato, "peixe") == 0) {
		cal = cal + 230;
	} else if (strcmp(prato, "frango") == 0) {
		cal = cal + 250;
	} else if (strcmp(prato, "carne") == 0) {
		cal = cal + 350;
	}

	if (strcmp(sobremesa, "abacaxi") == 0) {
		cal = cal + 75;
	} else if (strcmp(sobremesa, "sorvete diet") == 0) {
		cal = cal + 110;
	} else if (strcmp(sobremesa, "mousse diet") == 0) {
		cal = cal + 170;
	} else if (strcmp(sobremesa, "mousse chocolate") == 0) {
		cal = cal + 200;
	}

	if (strcmp(bebida, "chá") == 0) {
		cal = cal + 20;
	} else if (strcmp(bebida, "suco laranja") == 0) {
		cal = cal + 70;
	} else if (strcmp(bebida, "suco melão") == 0) {
		cal = cal + 100;
	} else if (strcmp(bebida, "refrigerante diet") == 0) {
		cal = cal + 65;
	}

	printf("Calorias consumidas: %d\n", cal);

	return 0;
}