#include <stdio.h>

int main() {

	int m, n, soma = 0, i;

	printf("Informe um par de valores m e n\n");
	scanf("%d %d", &m, &n);

	while((m > 0) && (n > 0)) {

		soma = m; 

		for(i = 1; i < n; i++) {
			m++;
			soma = soma + m; 

		}

		printf("Soma nos %d inteiros consecutivos = %d\n", n, soma);

		printf("Informe um par de valores m e n\n");
		scanf("%d %d", &m, &n);

	}

	return 0;
}