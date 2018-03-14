#include <stdio.h>

int main() {

	int num, i, divisores;

	divisores = 0;

	printf("Informe um numero\n");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {

		if (num % i == 0) {
			divisores++;
		}

	}

	if (divisores > 2) {
		printf("Número não é primo.\n");

		for (i = 1; i <= num; i++) {

			if (num % i == 0) {
				printf("%d\n", i);
			}

		}

	} else {

		printf("Número %d é primo\n", num);

	}

	return 0;
}