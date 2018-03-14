#include <stdio.h>

int main() {

	int n1, n2, produto=0, i;

	printf("informe 2 numeros inteiros\n");
	scanf("%d %d", &n1, &n2);

	for (i=0; i<n2; i++) {
		produto = produto + n1;
	}
	printf("produto = %d\n", produto);
	return 0;
}