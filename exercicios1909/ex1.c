#include <stdio.h>

int main() {

	int interv1, interv2, soma, i;
	printf("Informe um intervalo\n");
	scanf("%d %d", &interv1, &interv2);

	for (i = interv1, soma = 0; i <= interv2; i++) {

		if (i%2 != 0) {
			printf("Número %d é impar.\n", i);
			soma = soma + i;
		}

	}

	printf("Soma: %d\n", soma);

	return 0;
}