#include <stdio.h>

int main() {

	int num, primo1, primo2, i, j, div=0, cont=0;

	printf("informe um numero\n");
	scanf("%d", &num);

	while (num%2==0) {

		for (primo1=0; primo1<num; primo1++){

			for (j = 1; j<=primo1; j++) {
				if (primo1%1==0) {
					div++;
				}
			}

			if (div==2) {
				primo2 = primo1 + 2;
				if (primo1 + primo2 == num) {
					printf("%d + %d = %d\n", primo1, primo2, num);
					cont++;
				}
			}

		}

		if (cont == 0) {
			printf("nao é possivel formar arranjo\n");
		}
		cont = 0;

		printf("informe um numero\n");
		scanf("%d", &num);

	}


	return 0;
}