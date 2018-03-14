#include <stdio.h>

int main() {

	int a, b, menor, mmc;

	printf("informe 2 numeros inteiros e positivos\n");
	scanf("%d %d", &a, &b);

	if ((a < 0) || (b < 0)) {

		do {

			printf("numeros invalidos. informe novamente dois numeros inteiros e positivos\n");
			scanf("%d %d", &a, &b);

		} while ((a < 0) || (b < 0));

	}

	if (a > b) {
		menor = b;
	} else if (b > a) {
		menor = a;
	} else if (a == b) {
		menor = a;
	}

	do {
		if ((a%menor == 0) && (b%menor == 0)) {

			mmc = menor;
		} 

		menor--;

	} while (menor > 1);

	printf("MMC = %d\n", mmc);

	return 0;
}