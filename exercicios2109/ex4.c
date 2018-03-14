#include <stdio.h>

int main() {

	int m, n, i = 1, menor, mdc;

	printf("informe dois numeros inteiros e positivos\n");
	scanf("%d %d", &m, &n);

	if ((m < 0) || (n < 0)) {

		do {

			printf("informe dois numeros inteiros e positivos\n");
			scanf("%d %d", &m, &n);

		} while ((m < 0) || (n < 0));
	}

	if (m > n) {
		menor = n;
	} else if (n > m) {
		menor = m;
	} else if (m == n) {
		menor = m;
	}

	do {
		
		if ((m%i == 0) && (n%i == 0)) {
			mdc = i;
		}
		i++;
		menor--;
		
	} while (menor > 0);

	printf("MDC = %d\n", mdc);

	return 0;
}